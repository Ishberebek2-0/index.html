
ul {
    display: block;
    margin: 0;
    padding: 0;
    list-style: none;
}
ul:after {
    display: block;
    content: ' ';
    clear: both;
    float: none;
}
ul.menu > li {
    float: left;
    position: relative;
}
ul.menu > li > a {
    display: block;
    padding: 10px;
    color: white;
    background-color: #900FB0;
    text-decoration: none;
}
ul.menu > li > a:hover {
    background-color: white;
    color: #900FB0;
}
ul.submenu {
    display: none;
    position: absolute;
    width: 120px;
    top: 37px;
    left: 0;
    background-color: white;
    color:#900FB0;
}
ul.submenu > li {
    display: block;
    background-color:  #900FB0;
    color: white;
}
ul.submenu > li > a {
    display: block;
    padding: 10px;
    color: white;
    background-color: #900FB0;
    text-decoration: none;
}
ul.submenu > li > a:hover {
    text-decoration: none;
    color:#900FB0; 
    background-color: white;
}
ul.menu > li:hover > ul.submenu {
    display: block;
    background-color: #900FB0;
    color: white;
}
/*body {
    font: 14px 'Verdana', 'Courier','Comic Sans MS';
    margin: 0;
    padding: 0;
    background-color: #BDF8EB;

}*/
/*video::-webkit-media-controls-fullscreen-button {
    display: none;
}s
video::-webkit-media-controls-play-button {}
video::-webkit-media-controls-timeline {}
video::-webkit-media-controls-current-time-display{}
video::-webkit-media-controls-time-remaining-display {}
video::-webkit-media-controls-mute-button {}
video::-webkit-media-controls-toggle-closed-captions-button {}
video::-webkit-media-controls-volume-slider {}
*/
video {
    width: ;
    height: ;
}
