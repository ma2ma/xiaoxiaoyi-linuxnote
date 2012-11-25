##命令生成框架
rails new blog

##开发服务器
进入项目目录:rails s

Q:java runtime
A:在gemfile中加入 
    gem 'execjs'  
    gem 'therubyracer'  

##命令生成控制器
rails generate controller home index

##改变路由
you can have the root of your site routed with "root"
# just remember to delete public/index.html.
# root :to => 'welcome#index'

##安装rails api文档服务器
sudo gem rdoc --all

##开启rails api文档服务器
sudo gem server


