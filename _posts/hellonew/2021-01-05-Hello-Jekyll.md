---
layout: post
title:  "Hello Jekyll from Sab"
author: sab
categories: [ helloworld, getting started ]
image: assets/images/15.jpg
---

Hello I am a Jekyll post on Github.



## Repo information 

This repository is a collection of advanced vs primitive java differences. 

```java
package com.simple.codes;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.Assert;
import org.junit.jupiter.api.Test;

import com.simple.tests.PalindromeCheck;

class PalindromeCheckTest {

	PalindromeCheck pd = new PalindromeCheck();
	@Test
	void testIsPalindrome() {
		Assert.assertEquals(pd.isPalindrome("madam"), true);
	}

	@Test
	void testIsPalindrome2() {
		Assert.assertEquals(pd.isPalindrome("hello"), false);
	}
	
	@Test
	void testTestthis2() {
//		fail("Not yet implemented");
	}

}
```
![](../../assets/images/snap_task.png)