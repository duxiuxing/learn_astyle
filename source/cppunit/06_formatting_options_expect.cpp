﻿// -break-closing-braces 不使用
void Foo( bool isFoo )
{
  if ( isFoo )
  {
    bar();
  }
  else
  {
    anotherBar();
  }
}

// --break-elseifs 不使用
if ( isFoo )
{
  bar();
}
else if ( isFoo1() )
{
  bar1();
}
else if ( isFoo2() )
{
  bar2;
}

if ( isFoo )
{
  bar();
}
else if ( isFoo1() )
{
  bar1();
}
else if ( isFoo2() )
{
  bar2();
}

// --break-one-line-headers if, while, else里面，不把条件语句和执行语句放一行
// --add-braces 一行的执行语句自动加上{}
void Foo( bool isFoo )
{
  if ( isFoo1 )
  {
    bar1();
  }

  if ( isFoo2 )
  {
    bar2();
  }
}

void Foo( bool isFoo )
{
  if ( isFoo1 )
  {
    bar1();
  }

  if ( isFoo2 )
  {
    bar2();
  }
}

if ( isFoo )
{
  isFoo = false;
}

// --add-one-line-braces 不使用
// --remove-braces 不使用

// --keep-one-line-blocks 不使用
if ( isFoo )
{
  isFoo = false;
  cout << isFoo << endl;
}

// --keep-one-line-statements 不使用
if ( isFoo )
{
  isFoo = false;
  cout << isFoo << endl;
}

// --convert-tabs 如果决定全民使用空格代替Tab，那就用吧

// --close-templates 不使用
Stack< int, List< int > > stack1;
Stack< int, List< int >> stack1;

// --remove-comment-prefix 以*开头的注释，去掉*
/*
   comment line 1
   comment line 2
*/