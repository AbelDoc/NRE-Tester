<!-- HTML header for doxygen 1.8.8-->
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="X-UA-Compatible" content="IE=edge">
        <!-- For Mobile Devices -->
        <meta name="viewport" content="width=device-width, initial-scale=1">
        <meta http-equiv="Content-Type" content="text/xhtml;charset=UTF-8"/>
        <meta name="generator" content="Doxygen 1.8.11"/>
        <script type="text/javascript" src="../../js/jquery-2.1.1.min.js"></script>
        <title>NRE-Tester: /mnt/c/Users/abell/Documents/GitHub/NRE-Tester/src/Header/NRE_Tester.hpp File Reference</title>
        <!--<link href="tabs.css" rel="stylesheet" type="text/css"/>-->
        <script type="text/javascript" src="dynsections.js"></script>
        <link href="search/search.css" rel="stylesheet" type="text/css"/>
<script type="text/javascript" src="search/searchdata.js"></script>
<script type="text/javascript" src="search/search.js"></script>
<script type="text/javascript">
  $(document).ready(function() { init_search(); });
</script>
        <link href="doxygen.css" rel="stylesheet" type="text/css" />
        <link href="style.css" rel="stylesheet" type="text/css"/>
        <link href='https://fonts.googleapis.com/css?family=Roboto+Slab' rel='stylesheet' type='text/css'>
        <?php
            include '../../php/navigation.php';
            if (!isset($_COOKIE["theme"]) || $_COOKIE["theme"] == "dark") {
                echo '<link href="../../css/dark/bootstrap.css" rel="stylesheet">';
            } else {
                echo '<link href="../../css/light/bootstrap.css" rel="stylesheet">';
            }
        ?>
        <script src="../../js/bootstrap.min.js"></script>
        <script type="text/javascript" src="doxy-boot.js"></script>
    </head>
    <body>
        <div class="container-fluid">
            <header class="page-header">
                <a href="../../../index.php">
                    <img src="../../img/Logo.png" class="logo img-responsive"/>
                </a>
            </header>
            <?php addNavigationBarInl(false); ?>
            <div id="top" class="row"><!-- do not remove this div, it is closed by doxygen! -->
                <div class="col-lg-12">
                    <div class="panel panel-default">
                        <div class="panel-body">
<!-- end header part -->
<!-- Generated by Doxygen 1.8.11 -->
<script type="text/javascript">
var searchBox = new SearchBox("searchBox", "search",false,'Search');
</script>
  <div id="navrow1" class="tabs">
    <ul class="tablist">
      <li><a href="index.php"><span>Main&#160;Page</span></a></li>
      <li><a href="namespaces.php"><span>Namespaces</span></a></li>
      <li><a href="annotated.php"><span>Classes</span></a></li>
      <li class="current"><a href="files.php"><span>Files</span></a></li>
      <li>
        <div id="MSearchBox" class="MSearchBoxInactive">
        <span class="left">
          <img id="MSearchSelect" src="search/mag_sel.png"
               onmouseover="return searchBox.OnSearchSelectShow()"
               onmouseout="return searchBox.OnSearchSelectHide()"
               alt=""/>
          <input type="text" id="MSearchField" value="Search" accesskey="S"
               onfocus="searchBox.OnSearchFieldFocus(true)" 
               onblur="searchBox.OnSearchFieldFocus(false)" 
               onkeyup="searchBox.OnSearchFieldChange(event)"/>
          </span><span class="right">
            <a id="MSearchClose" href="javascript:searchBox.CloseResultsWindow()"><img id="MSearchCloseImg" border="0" src="search/close.png" alt=""/></a>
          </span>
        </div>
      </li>
    </ul>
  </div>
  <div id="navrow2" class="tabs2">
    <ul class="tablist">
      <li><a href="files.php"><span>File&#160;List</span></a></li>
    </ul>
  </div>
<!-- window showing the filter options -->
<div id="MSearchSelectWindow"
     onmouseover="return searchBox.OnSearchSelectShow()"
     onmouseout="return searchBox.OnSearchSelectHide()"
     onkeydown="return searchBox.OnSearchSelectKey(event)">
</div>

<!-- iframe showing the search results (closed by default) -->
<div id="MSearchResultsWindow">
<iframe src="javascript:void(0)" frameborder="0" 
        name="MSearchResults" id="MSearchResults">
</iframe>
</div>

<div id="nav-path" class="navpath">
  <ul>
<li class="navelem"><a class="el" href="dir_68267d1309a1af8e8297ef4c3efbcdba.php">src</a></li><li class="navelem"><a class="el" href="dir_0bb4bacb73d7f86c6a963ab22a4f5c20.php">Header</a></li>  </ul>
</div>
</div><!-- top -->
<div class="header">
  <div class="summary">
<a href="#define-members">Macros</a>  </div>
  <div class="headertitle">
<div class="title">NRE_Tester.hpp File Reference</div>  </div>
</div><!--header-->
<div class="contents">

<p>Declaration of <a class="el" href="namespace_tester.php" title="Tester&#39;s API. ">Tester</a>'s API's Header.  
<a href="#details">More...</a></p>
<div class="textblock"><code>#include &quot;<a class="el" href="_n_r_e___internal_test_8hpp_source.php">../Tester/InternalTest/NRE_InternalTest.hpp</a>&quot;</code><br />
<code>#include &quot;<a class="el" href="_n_r_e___test_suite_8hpp_source.php">../Tester/TestSuite/NRE_TestSuite.hpp</a>&quot;</code><br />
</div>
<p><a href="_n_r_e___tester_8hpp_source.php">Go to the source code of this file.</a></p>
<table class="memberdecls">
<tr class="heading"><td colspan="2"><h2 class="groupheader"><a name="define-members"></a>
Macros</h2></td></tr>
<tr class="memitem:a86cbd2153e730e88a4d7ca4dba8a80fc"><td class="memItemLeft" align="right" valign="top"><a class="anchor" id="a86cbd2153e730e88a4d7ca4dba8a80fc"></a>
#define&#160;</td><td class="memItemRight" valign="bottom"><b>TEST_NAME</b>(Case,  Name)&#160;&#160;&#160;Case##Name##_Test</td></tr>
<tr class="separator:a86cbd2153e730e88a4d7ca4dba8a80fc"><td class="memSeparator" colspan="2">&#160;</td></tr>
<tr class="memitem:a38152179b3b5fa958919e79612e389a0"><td class="memItemLeft" align="right" valign="top">#define&#160;</td><td class="memItemRight" valign="bottom"><b>TEST</b>(Case,  Name)</td></tr>
<tr class="separator:a38152179b3b5fa958919e79612e389a0"><td class="memSeparator" colspan="2">&#160;</td></tr>
</table>
<a name="details" id="details"></a><h2 class="groupheader">Detailed Description</h2>
<div class="textblock"><p>Declaration of <a class="el" href="namespace_tester.php" title="Tester&#39;s API. ">Tester</a>'s API's Header. </p>
<dl class="section author"><dt>Author</dt><dd>Louis ABEL </dd></dl>
<dl class="section date"><dt>Date</dt><dd>18/06/2019 </dd></dl>
<dl class="section copyright"><dt>Copyright</dt><dd>CC-BY-NC-SA </dd></dl>
</div><h2 class="groupheader">Macro Definition Documentation</h2>
<a class="anchor" id="a38152179b3b5fa958919e79612e389a0"></a>
<div class="memitem">
<div class="memproto">
      <table class="memname">
        <tr>
          <td class="memname">#define TEST</td>
          <td>(</td>
          <td class="paramtype">&#160;</td>
          <td class="paramname">Case, </td>
        </tr>
        <tr>
          <td class="paramkey"></td>
          <td></td>
          <td class="paramtype">&#160;</td>
          <td class="paramname">Name&#160;</td>
        </tr>
        <tr>
          <td></td>
          <td>)</td>
          <td></td><td></td>
        </tr>
      </table>
</div><div class="memdoc">
<b>Value:</b><div class="fragment"><div class="line"><span class="keyword">class </span>TEST_NAME(Case, Name) : <span class="keyword">public</span> <a class="code" href="class_n_r_e_1_1_tester_1_1_internal_test.php">NRE::Tester::InternalTest</a> {\</div><div class="line">                                 public :\</div><div class="line">                                    TEST_NAME(Case, Name)() : <a class="code" href="class_n_r_e_1_1_tester_1_1_internal_test.php">NRE::Tester::InternalTest</a>(#Case, #Name) {\</div><div class="line">                                    }\</div><div class="line">                                    void <a class="code" href="class_n_r_e_1_1_tester_1_1_internal_test.php#a03ce20227a8571daad015075f242107d">internalTestBody</a>() <span class="keyword">const override</span>;\</div><div class="line">                             };\</div><div class="line">                             TEST_NAME(Case, Name) t<span class="preprocessor">##Case##Name;\</span></div><div class="line"><span class="preprocessor">                             void TEST_NAME(Case, Name)::internalTestBody() const</span></div><div class="ttc" id="class_n_r_e_1_1_tester_1_1_internal_test_php"><div class="ttname"><a href="class_n_r_e_1_1_tester_1_1_internal_test.php">NRE::Tester::InternalTest</a></div><div class="ttdoc">Describe an internal test used to register a user test inside the suite. </div><div class="ttdef"><b>Definition:</b> NRE_InternalTest.hpp:28</div></div>
<div class="ttc" id="class_n_r_e_1_1_tester_1_1_internal_test_php_a03ce20227a8571daad015075f242107d"><div class="ttname"><a href="class_n_r_e_1_1_tester_1_1_internal_test.php#a03ce20227a8571daad015075f242107d">NRE::Tester::InternalTest::internalTestBody</a></div><div class="ttdeci">virtual void internalTestBody() const =0</div></div>
</div><!-- fragment -->
</div>
</div>
</div><!-- contents -->
<!-- HTML footer for doxygen 1.8.8-->
<!-- start footer part -->
</div>
</div>
</div>
</div>
</body>
</html>
