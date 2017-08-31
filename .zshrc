source ~/dotfiles3/.zplug/init.zsh

alias la='ls -a'
bindkey -v
# (1) プラグインを定義する
zplug 'zsh-users/zsh-autosuggestions'
zplug 'zsh-users/zsh-syntax-highlighting'
zplug 'b4b4r07/enhancd', use:init.sh

# (2) インストールする
if ! zplug check --verbose; then
    printf 'Install? [y/N]: '
    if read -q; then
        echo; zplug install
    fi
fi

zplug load --verbose

#storical backward/forward search with linehead string binded to ^P/^N

autoload history-search-end
zle -N history-beginning-search-backward-end history-search-end
zle -N history-beginning-search-forward-end history-search-end
bindkey "^P" history-beginning-search-backward-end
bindkey "^N" history-beginning-search-forward-end

export PATH=/usr/local/anaconda3/bin:"$PATH"
