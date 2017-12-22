<?php
$z[0]=Array("field","\$ID = @me; \$sql = \"SELECT * FROM `dede_arctype` WHERE id=\$ID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); \$relID = \"\$row[reid]\"; if(\$relID == 0) {@me = \$row[typename];}else{\$sql = \"SELECT `typename` FROM `dede_arctype` WHERE id=\$relID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); @me = \$row[typename];}",57,441);
$z[0][4]['name']="typeid";
$z[0][4]['runphp']="yes";
$z[1]=Array("channel","\r\n          <p><a href='[field:typeurl/]' >[field:typename/]</a></p>\r\n          ",517,637);
$z[1][4]['type']="son";
$z[2]=Array("arclist","\r\n      <li><a href=\"[field:arcurl/]\" target=\"_blank\" title=\"[field:title/]\">[field:title/]</a></li>\r\n      ",775,947);
$z[2][4]['row']="10";
$z[2][4]['titlelen']="40";
$z[2][4]['typeid']="14";

?>