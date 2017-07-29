#!/usr/bin/env python3
# -*- coding: utf-8 -*-

out = 'build'

def options(opt):
    opt.load('compiler_cxx')

    # opt.load('cppcheck')
    opt.recurse('src test')


def configure(conf):
    conf.load('compiler_cxx')
    conf.recurse('src test')

def build(bld):
    bld.recurse('src test')