<?php
$z[0]=Array("field","",622,641);
$z[0][4]['name']="title";
$z[1]=Array("global","",642,668);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",709,738);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",778,836);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",1381,1418);
$z[4][4]['filename']="head_m.htm";
$z[5]=Array("field","",1537,1559);
$z[5][4]['name']="typename";
$z[6]=Array("channel","\r\n        <li><a href=\"list.php?tid=[field:id/]\">>[field:typename/]</a></li>\r\n        ",1784,1910);
$z[6][4]['type']="son";
$z[7]=Array("list","\r\n    <a title=\"[field:title/]\" href=\"view.php?aid=[field:id/]\" class=\"s-babg\">\r\n    <dl class=\"prolistbgfa\">\r\n      <dt> <img width=\"100\" alt=\"[field:title/]\" src=\"[field:litpic/]\" class=\"loaded\"><br>\r\n      </dt>\r\n      <h3 class=\"s-wc\"> [field:title/]</h3>\r\n      <p> [field:description function='cn_substr(@me,250)'/]...</p>\r\n      <span></span>\r\n      <div class=\"clear\"> </div>\r\n    </dl>\r\n    </a>\r\n    ",2006,2466);
$z[7][4]['pagesize']="6";
$z[7][4]['titlelen']="36";
$z[8]=Array("pagelist","",2501,2558);
$z[8][4]['listitem']="index,end,pageno";
$z[8][4]['listsize']="2";
$z[9]=Array("include","",2593,2630);
$z[9][4]['filename']="foot_m.htm";

?>