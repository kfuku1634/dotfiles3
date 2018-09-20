source ~/.zplug/init.zsh

autoload -U compinit
compinit

alias ls='ls -G'
alias la='ls -a'

umask 022

bindkey -v
bindkey -M vicmd 'H' vi-first-non-blank
bindkey -M vicmd 'L' vi-end-of-line 

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

zmodload zsh/terminfo zsh/system
color_stderr() {
    while sysread std_err_color; do
        syswrite -o 2 "${fg_bold[red]}${std_err_color}${terminfo[sgr0]}"
    done
}
exec 2> >(color_stderr)

# 履歴ファイルの保存先
export HISTFILE=$HOME/.zsh_history
# メモリに保存される履歴の件数
export HISTSIZE=10000
# 履歴ファイルに保存される履歴の件数
export SAVEHIST=100000
# 重複を記録しない
setopt hist_ignore_dups
# 開始と終了を記録
setopt EXTENDED_HISTORY

if type trash-put &> /dev/null
then
    alias rm=trash-put
fi
