source ~/.zplug/init.zsh

autoload -U compinit
compinit

umask 022
setopt nonomatch

bindkey -v
bindkey -M vicmd 'H' vi-first-non-blank
bindkey -M vicmd 'L' vi-end-of-line

export PDB_HOME=/Users/kouki/db
# (1) プラグインを定義する
zplug 'zsh-users/zsh-autosuggestions'
zplug 'zsh-users/zsh-syntax-highlighting'

# (2) インストールする
if ! zplug check --verbose; then
    printf 'Install? [y/N]: '
    if read -q; then
        echo; zplug install
    fi
fi

zplug load --verbose

autoload history-search-end
zle -N history-beginning-search-backward-end history-search-end
zle -N history-beginning-search-forward-end history-search-end
bindkey "^P" history-beginning-search-backward-end
bindkey "^N" history-beginning-search-forward-end

export PATH=/usr/local/sbin:"$PATH"
export PATH=/Users/kouki/bin:"$PATH"
export PATH=/Users/kouki/dotfiles3/.tmux/bin:"$PATH"
export PATH="$PATH:/usr/local/texlive/2017/bin/x86_64-darwin"
export PATH=/usr/local/bin:"$PATH"
export PATH=/usr/X11R6/bin:"$PATH"
export PATH=${PATH}:${HOME}/.nodebrew/current/bin
export CPATH="${HOME}/cpp/ProteinData/include:${CPATH}"
export LIBRARY_PATH="${LIBRARY_PATH}:$HOME/cpp/ProteinData/lib"
export LD_LIBRARY_PATH="${LD_LIBRARY_PATH}:$HOME/cpp/ProteinData/lib"
export PYTHONPATH="${HOME}/opt/python/protein"
export DISPLAY=`find /private/tmp 2>/dev/null | grep 'xquartz'`


# 色
#http://d.hatena.ne.jp/yk5656/20140305/1394585110
autoload colors
colors

# プロンプト
PROMPT="%{$fg[red]%}[%n@%m]%{$reset_color%} $ "
RPROMPT="%{${fg[red]}%}[%~]%{${reset_color}%}"
#PROMPT2="%{${fg[yellow]}%} %_ > %{${reset_color}%}"
#SPROMPT="%{${fg[red]}%}correct: %R -> %r ? [n,y,a,e] %{${reset_color}%}"

# ls
export LSCOLORS=exfxcxdxbxegedabagacad
export LS_COLORS='di=34:ln=35:so=32:pi=33:ex=31:bd=34:cd=34:su=30:sg=30:tw=30:ow=30'

# 補完候補もLS_COLORSに合わせて色が付くようにする
zstyle ':completion:*:default' list-colors ${(s.:.)LS_COLORS}
zstyle ':completion:*:default' menu select=1

# lsがカラー表示になるようエイリアスを設定
alias ls='ls -F --color'


# 履歴ファイルの保存先
export HISTFILE=$HOME/.zsh_history
# メモリに保存される履歴の件数
export HISTSIZE=10000
# 履歴ファイルに保存される履歴の件数
export SAVEHIST=100000
# 開始と終了を記録
setopt EXTENDED_HISTORY
# 他のターミナルとヒストリーを共有
setopt share_history
# ヒストリーに重複を表示しない
setopt histignorealldups

if type trash-put &> /dev/null
then
    alias rm=trash-put
fi

if [ -e /usr/local/share/zsh-completions ]; then
    fpath=(/usr/local/share/zsh-completions $fpath)
fi

alias ls='ls -G'
alias la='ls -a'
alias cp='cp -i'
cdls ()
{
    \cd "$@" && ls
}
alias cd="cdls"
alias ..='cd ..'
alias mv='mv -i'

alias rasp='(){ras ras ${HOME}/db/pdbstyle-2.07_unit/${1}}'
