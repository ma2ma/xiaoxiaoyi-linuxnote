##退去tdmux
CTRL^D

##创建seesion
tmux new-session -s seesion_name

##脱离当前session
CTRL^b d

##显示sessions
tmux list-sessions

##跳转到某个session
tmux a -t session_name

##杀死session
tmux kill-session -t session_name

##删除所有session
tmux kill-server 

#一个session可以有多个窗口
##创建窗口
CTRL^b c

##左右分割窗口
% l|r

#一个server多个session
#一个session多个window
#一个window多个windows panle

##tmux配置文件
~/.tmux.conf

##去除绑定
unbind prefix C-a

##设定
set -g modekeys vi
