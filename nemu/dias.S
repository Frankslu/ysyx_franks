
build/loongarch32r-nemu-interpreter:     file format elf64-x86-64


Disassembly of section .init:

0000000000002000 <_init>:
    2000:	f3 0f 1e fa          	endbr64 
    2004:	48 83 ec 08          	sub    $0x8,%rsp
    2008:	48 8b 05 c9 bf 00 00 	mov    0xbfc9(%rip),%rax        # dfd8 <__gmon_start__@Base>
    200f:	48 85 c0             	test   %rax,%rax
    2012:	74 02                	je     2016 <_init+0x16>
    2014:	ff d0                	call   *%rax
    2016:	48 83 c4 08          	add    $0x8,%rsp
    201a:	c3                   	ret    

Disassembly of section .plt:

0000000000002020 <.plt>:
    2020:	ff 35 02 be 00 00    	push   0xbe02(%rip)        # de28 <_GLOBAL_OFFSET_TABLE_+0x8>
    2026:	f2 ff 25 03 be 00 00 	bnd jmp *0xbe03(%rip)        # de30 <_GLOBAL_OFFSET_TABLE_+0x10>
    202d:	0f 1f 00             	nopl   (%rax)
    2030:	f3 0f 1e fa          	endbr64 
    2034:	68 00 00 00 00       	push   $0x0
    2039:	f2 e9 e1 ff ff ff    	bnd jmp 2020 <_init+0x20>
    203f:	90                   	nop
    2040:	f3 0f 1e fa          	endbr64 
    2044:	68 01 00 00 00       	push   $0x1
    2049:	f2 e9 d1 ff ff ff    	bnd jmp 2020 <_init+0x20>
    204f:	90                   	nop
    2050:	f3 0f 1e fa          	endbr64 
    2054:	68 02 00 00 00       	push   $0x2
    2059:	f2 e9 c1 ff ff ff    	bnd jmp 2020 <_init+0x20>
    205f:	90                   	nop
    2060:	f3 0f 1e fa          	endbr64 
    2064:	68 03 00 00 00       	push   $0x3
    2069:	f2 e9 b1 ff ff ff    	bnd jmp 2020 <_init+0x20>
    206f:	90                   	nop
    2070:	f3 0f 1e fa          	endbr64 
    2074:	68 04 00 00 00       	push   $0x4
    2079:	f2 e9 a1 ff ff ff    	bnd jmp 2020 <_init+0x20>
    207f:	90                   	nop
    2080:	f3 0f 1e fa          	endbr64 
    2084:	68 05 00 00 00       	push   $0x5
    2089:	f2 e9 91 ff ff ff    	bnd jmp 2020 <_init+0x20>
    208f:	90                   	nop
    2090:	f3 0f 1e fa          	endbr64 
    2094:	68 06 00 00 00       	push   $0x6
    2099:	f2 e9 81 ff ff ff    	bnd jmp 2020 <_init+0x20>
    209f:	90                   	nop
    20a0:	f3 0f 1e fa          	endbr64 
    20a4:	68 07 00 00 00       	push   $0x7
    20a9:	f2 e9 71 ff ff ff    	bnd jmp 2020 <_init+0x20>
    20af:	90                   	nop
    20b0:	f3 0f 1e fa          	endbr64 
    20b4:	68 08 00 00 00       	push   $0x8
    20b9:	f2 e9 61 ff ff ff    	bnd jmp 2020 <_init+0x20>
    20bf:	90                   	nop
    20c0:	f3 0f 1e fa          	endbr64 
    20c4:	68 09 00 00 00       	push   $0x9
    20c9:	f2 e9 51 ff ff ff    	bnd jmp 2020 <_init+0x20>
    20cf:	90                   	nop
    20d0:	f3 0f 1e fa          	endbr64 
    20d4:	68 0a 00 00 00       	push   $0xa
    20d9:	f2 e9 41 ff ff ff    	bnd jmp 2020 <_init+0x20>
    20df:	90                   	nop
    20e0:	f3 0f 1e fa          	endbr64 
    20e4:	68 0b 00 00 00       	push   $0xb
    20e9:	f2 e9 31 ff ff ff    	bnd jmp 2020 <_init+0x20>
    20ef:	90                   	nop
    20f0:	f3 0f 1e fa          	endbr64 
    20f4:	68 0c 00 00 00       	push   $0xc
    20f9:	f2 e9 21 ff ff ff    	bnd jmp 2020 <_init+0x20>
    20ff:	90                   	nop
    2100:	f3 0f 1e fa          	endbr64 
    2104:	68 0d 00 00 00       	push   $0xd
    2109:	f2 e9 11 ff ff ff    	bnd jmp 2020 <_init+0x20>
    210f:	90                   	nop
    2110:	f3 0f 1e fa          	endbr64 
    2114:	68 0e 00 00 00       	push   $0xe
    2119:	f2 e9 01 ff ff ff    	bnd jmp 2020 <_init+0x20>
    211f:	90                   	nop
    2120:	f3 0f 1e fa          	endbr64 
    2124:	68 0f 00 00 00       	push   $0xf
    2129:	f2 e9 f1 fe ff ff    	bnd jmp 2020 <_init+0x20>
    212f:	90                   	nop
    2130:	f3 0f 1e fa          	endbr64 
    2134:	68 10 00 00 00       	push   $0x10
    2139:	f2 e9 e1 fe ff ff    	bnd jmp 2020 <_init+0x20>
    213f:	90                   	nop
    2140:	f3 0f 1e fa          	endbr64 
    2144:	68 11 00 00 00       	push   $0x11
    2149:	f2 e9 d1 fe ff ff    	bnd jmp 2020 <_init+0x20>
    214f:	90                   	nop
    2150:	f3 0f 1e fa          	endbr64 
    2154:	68 12 00 00 00       	push   $0x12
    2159:	f2 e9 c1 fe ff ff    	bnd jmp 2020 <_init+0x20>
    215f:	90                   	nop
    2160:	f3 0f 1e fa          	endbr64 
    2164:	68 13 00 00 00       	push   $0x13
    2169:	f2 e9 b1 fe ff ff    	bnd jmp 2020 <_init+0x20>
    216f:	90                   	nop
    2170:	f3 0f 1e fa          	endbr64 
    2174:	68 14 00 00 00       	push   $0x14
    2179:	f2 e9 a1 fe ff ff    	bnd jmp 2020 <_init+0x20>
    217f:	90                   	nop
    2180:	f3 0f 1e fa          	endbr64 
    2184:	68 15 00 00 00       	push   $0x15
    2189:	f2 e9 91 fe ff ff    	bnd jmp 2020 <_init+0x20>
    218f:	90                   	nop
    2190:	f3 0f 1e fa          	endbr64 
    2194:	68 16 00 00 00       	push   $0x16
    2199:	f2 e9 81 fe ff ff    	bnd jmp 2020 <_init+0x20>
    219f:	90                   	nop
    21a0:	f3 0f 1e fa          	endbr64 
    21a4:	68 17 00 00 00       	push   $0x17
    21a9:	f2 e9 71 fe ff ff    	bnd jmp 2020 <_init+0x20>
    21af:	90                   	nop
    21b0:	f3 0f 1e fa          	endbr64 
    21b4:	68 18 00 00 00       	push   $0x18
    21b9:	f2 e9 61 fe ff ff    	bnd jmp 2020 <_init+0x20>
    21bf:	90                   	nop
    21c0:	f3 0f 1e fa          	endbr64 
    21c4:	68 19 00 00 00       	push   $0x19
    21c9:	f2 e9 51 fe ff ff    	bnd jmp 2020 <_init+0x20>
    21cf:	90                   	nop
    21d0:	f3 0f 1e fa          	endbr64 
    21d4:	68 1a 00 00 00       	push   $0x1a
    21d9:	f2 e9 41 fe ff ff    	bnd jmp 2020 <_init+0x20>
    21df:	90                   	nop
    21e0:	f3 0f 1e fa          	endbr64 
    21e4:	68 1b 00 00 00       	push   $0x1b
    21e9:	f2 e9 31 fe ff ff    	bnd jmp 2020 <_init+0x20>
    21ef:	90                   	nop
    21f0:	f3 0f 1e fa          	endbr64 
    21f4:	68 1c 00 00 00       	push   $0x1c
    21f9:	f2 e9 21 fe ff ff    	bnd jmp 2020 <_init+0x20>
    21ff:	90                   	nop
    2200:	f3 0f 1e fa          	endbr64 
    2204:	68 1d 00 00 00       	push   $0x1d
    2209:	f2 e9 11 fe ff ff    	bnd jmp 2020 <_init+0x20>
    220f:	90                   	nop
    2210:	f3 0f 1e fa          	endbr64 
    2214:	68 1e 00 00 00       	push   $0x1e
    2219:	f2 e9 01 fe ff ff    	bnd jmp 2020 <_init+0x20>
    221f:	90                   	nop
    2220:	f3 0f 1e fa          	endbr64 
    2224:	68 1f 00 00 00       	push   $0x1f
    2229:	f2 e9 f1 fd ff ff    	bnd jmp 2020 <_init+0x20>
    222f:	90                   	nop
    2230:	f3 0f 1e fa          	endbr64 
    2234:	68 20 00 00 00       	push   $0x20
    2239:	f2 e9 e1 fd ff ff    	bnd jmp 2020 <_init+0x20>
    223f:	90                   	nop
    2240:	f3 0f 1e fa          	endbr64 
    2244:	68 21 00 00 00       	push   $0x21
    2249:	f2 e9 d1 fd ff ff    	bnd jmp 2020 <_init+0x20>
    224f:	90                   	nop
    2250:	f3 0f 1e fa          	endbr64 
    2254:	68 22 00 00 00       	push   $0x22
    2259:	f2 e9 c1 fd ff ff    	bnd jmp 2020 <_init+0x20>
    225f:	90                   	nop
    2260:	f3 0f 1e fa          	endbr64 
    2264:	68 23 00 00 00       	push   $0x23
    2269:	f2 e9 b1 fd ff ff    	bnd jmp 2020 <_init+0x20>
    226f:	90                   	nop
    2270:	f3 0f 1e fa          	endbr64 
    2274:	68 24 00 00 00       	push   $0x24
    2279:	f2 e9 a1 fd ff ff    	bnd jmp 2020 <_init+0x20>
    227f:	90                   	nop
    2280:	f3 0f 1e fa          	endbr64 
    2284:	68 25 00 00 00       	push   $0x25
    2289:	f2 e9 91 fd ff ff    	bnd jmp 2020 <_init+0x20>
    228f:	90                   	nop
    2290:	f3 0f 1e fa          	endbr64 
    2294:	68 26 00 00 00       	push   $0x26
    2299:	f2 e9 81 fd ff ff    	bnd jmp 2020 <_init+0x20>
    229f:	90                   	nop
    22a0:	f3 0f 1e fa          	endbr64 
    22a4:	68 27 00 00 00       	push   $0x27
    22a9:	f2 e9 71 fd ff ff    	bnd jmp 2020 <_init+0x20>
    22af:	90                   	nop
    22b0:	f3 0f 1e fa          	endbr64 
    22b4:	68 28 00 00 00       	push   $0x28
    22b9:	f2 e9 61 fd ff ff    	bnd jmp 2020 <_init+0x20>
    22bf:	90                   	nop
    22c0:	f3 0f 1e fa          	endbr64 
    22c4:	68 29 00 00 00       	push   $0x29
    22c9:	f2 e9 51 fd ff ff    	bnd jmp 2020 <_init+0x20>
    22cf:	90                   	nop
    22d0:	f3 0f 1e fa          	endbr64 
    22d4:	68 2a 00 00 00       	push   $0x2a
    22d9:	f2 e9 41 fd ff ff    	bnd jmp 2020 <_init+0x20>
    22df:	90                   	nop
    22e0:	f3 0f 1e fa          	endbr64 
    22e4:	68 2b 00 00 00       	push   $0x2b
    22e9:	f2 e9 31 fd ff ff    	bnd jmp 2020 <_init+0x20>
    22ef:	90                   	nop
    22f0:	f3 0f 1e fa          	endbr64 
    22f4:	68 2c 00 00 00       	push   $0x2c
    22f9:	f2 e9 21 fd ff ff    	bnd jmp 2020 <_init+0x20>
    22ff:	90                   	nop
    2300:	f3 0f 1e fa          	endbr64 
    2304:	68 2d 00 00 00       	push   $0x2d
    2309:	f2 e9 11 fd ff ff    	bnd jmp 2020 <_init+0x20>
    230f:	90                   	nop
    2310:	f3 0f 1e fa          	endbr64 
    2314:	68 2e 00 00 00       	push   $0x2e
    2319:	f2 e9 01 fd ff ff    	bnd jmp 2020 <_init+0x20>
    231f:	90                   	nop
    2320:	f3 0f 1e fa          	endbr64 
    2324:	68 2f 00 00 00       	push   $0x2f
    2329:	f2 e9 f1 fc ff ff    	bnd jmp 2020 <_init+0x20>
    232f:	90                   	nop
    2330:	f3 0f 1e fa          	endbr64 
    2334:	68 30 00 00 00       	push   $0x30
    2339:	f2 e9 e1 fc ff ff    	bnd jmp 2020 <_init+0x20>
    233f:	90                   	nop

Disassembly of section .plt.got:

0000000000002340 <__cxa_finalize@plt>:
    2340:	f3 0f 1e fa          	endbr64 
    2344:	f2 ff 25 75 bc 00 00 	bnd jmp *0xbc75(%rip)        # dfc0 <__cxa_finalize@GLIBC_2.2.5>
    234b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

Disassembly of section .plt.sec:

0000000000002350 <__printf_chk@plt>:
    2350:	f3 0f 1e fa          	endbr64 
    2354:	f2 ff 25 dd ba 00 00 	bnd jmp *0xbadd(%rip)        # de38 <__printf_chk@GLIBC_2.3.4>
    235b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002360 <ftell@plt>:
    2360:	f3 0f 1e fa          	endbr64 
    2364:	f2 ff 25 d5 ba 00 00 	bnd jmp *0xbad5(%rip)        # de40 <ftell@GLIBC_2.2.5>
    236b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002370 <SDL_RenderPresent@plt>:
    2370:	f3 0f 1e fa          	endbr64 
    2374:	f2 ff 25 cd ba 00 00 	bnd jmp *0xbacd(%rip)        # de48 <SDL_RenderPresent@Base>
    237b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002380 <rand@plt>:
    2380:	f3 0f 1e fa          	endbr64 
    2384:	f2 ff 25 c5 ba 00 00 	bnd jmp *0xbac5(%rip)        # de50 <rand@GLIBC_2.2.5>
    238b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002390 <SDL_CreateWindowAndRenderer@plt>:
    2390:	f3 0f 1e fa          	endbr64 
    2394:	f2 ff 25 bd ba 00 00 	bnd jmp *0xbabd(%rip)        # de58 <SDL_CreateWindowAndRenderer@Base>
    239b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000023a0 <strlen@plt>:
    23a0:	f3 0f 1e fa          	endbr64 
    23a4:	f2 ff 25 b5 ba 00 00 	bnd jmp *0xbab5(%rip)        # de60 <strlen@GLIBC_2.2.5>
    23ab:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000023b0 <regerror@plt>:
    23b0:	f3 0f 1e fa          	endbr64 
    23b4:	f2 ff 25 ad ba 00 00 	bnd jmp *0xbaad(%rip)        # de68 <regerror@GLIBC_2.2.5>
    23bb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000023c0 <memset@plt>:
    23c0:	f3 0f 1e fa          	endbr64 
    23c4:	f2 ff 25 a5 ba 00 00 	bnd jmp *0xbaa5(%rip)        # de70 <memset@GLIBC_2.2.5>
    23cb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000023d0 <__strncpy_chk@plt>:
    23d0:	f3 0f 1e fa          	endbr64 
    23d4:	f2 ff 25 9d ba 00 00 	bnd jmp *0xba9d(%rip)        # de78 <__strncpy_chk@GLIBC_2.3.4>
    23db:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000023e0 <__sprintf_chk@plt>:
    23e0:	f3 0f 1e fa          	endbr64 
    23e4:	f2 ff 25 95 ba 00 00 	bnd jmp *0xba95(%rip)        # de80 <__sprintf_chk@GLIBC_2.3.4>
    23eb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000023f0 <SDL_PollEvent@plt>:
    23f0:	f3 0f 1e fa          	endbr64 
    23f4:	f2 ff 25 8d ba 00 00 	bnd jmp *0xba8d(%rip)        # de88 <SDL_PollEvent@Base>
    23fb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002400 <__assert_fail@plt>:
    2400:	f3 0f 1e fa          	endbr64 
    2404:	f2 ff 25 85 ba 00 00 	bnd jmp *0xba85(%rip)        # de90 <__assert_fail@GLIBC_2.2.5>
    240b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002410 <SDL_UpdateTexture@plt>:
    2410:	f3 0f 1e fa          	endbr64 
    2414:	f2 ff 25 7d ba 00 00 	bnd jmp *0xba7d(%rip)        # de98 <SDL_UpdateTexture@Base>
    241b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002420 <setlocale@plt>:
    2420:	f3 0f 1e fa          	endbr64 
    2424:	f2 ff 25 75 ba 00 00 	bnd jmp *0xba75(%rip)        # dea0 <setlocale@GLIBC_2.2.5>
    242b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002430 <SDL_Init@plt>:
    2430:	f3 0f 1e fa          	endbr64 
    2434:	f2 ff 25 6d ba 00 00 	bnd jmp *0xba6d(%rip)        # dea8 <SDL_Init@Base>
    243b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002440 <readline@plt>:
    2440:	f3 0f 1e fa          	endbr64 
    2444:	f2 ff 25 65 ba 00 00 	bnd jmp *0xba65(%rip)        # deb0 <readline@Base>
    244b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002450 <time@plt>:
    2450:	f3 0f 1e fa          	endbr64 
    2454:	f2 ff 25 5d ba 00 00 	bnd jmp *0xba5d(%rip)        # deb8 <time@GLIBC_2.2.5>
    245b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002460 <strcpy@plt>:
    2460:	f3 0f 1e fa          	endbr64 
    2464:	f2 ff 25 55 ba 00 00 	bnd jmp *0xba55(%rip)        # dec0 <strcpy@GLIBC_2.2.5>
    246b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002470 <SDL_RenderClear@plt>:
    2470:	f3 0f 1e fa          	endbr64 
    2474:	f2 ff 25 4d ba 00 00 	bnd jmp *0xba4d(%rip)        # dec8 <SDL_RenderClear@Base>
    247b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002480 <srand@plt>:
    2480:	f3 0f 1e fa          	endbr64 
    2484:	f2 ff 25 45 ba 00 00 	bnd jmp *0xba45(%rip)        # ded0 <srand@GLIBC_2.2.5>
    248b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002490 <__isoc99_sscanf@plt>:
    2490:	f3 0f 1e fa          	endbr64 
    2494:	f2 ff 25 3d ba 00 00 	bnd jmp *0xba3d(%rip)        # ded8 <__isoc99_sscanf@GLIBC_2.7>
    249b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000024a0 <fclose@plt>:
    24a0:	f3 0f 1e fa          	endbr64 
    24a4:	f2 ff 25 35 ba 00 00 	bnd jmp *0xba35(%rip)        # dee0 <fclose@GLIBC_2.2.5>
    24ab:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000024b0 <fseek@plt>:
    24b0:	f3 0f 1e fa          	endbr64 
    24b4:	f2 ff 25 2d ba 00 00 	bnd jmp *0xba2d(%rip)        # dee8 <fseek@GLIBC_2.2.5>
    24bb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000024c0 <__stack_chk_fail@plt>:
    24c0:	f3 0f 1e fa          	endbr64 
    24c4:	f2 ff 25 25 ba 00 00 	bnd jmp *0xba25(%rip)        # def0 <__stack_chk_fail@GLIBC_2.4>
    24cb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000024d0 <SDL_RenderCopy@plt>:
    24d0:	f3 0f 1e fa          	endbr64 
    24d4:	f2 ff 25 1d ba 00 00 	bnd jmp *0xba1d(%rip)        # def8 <SDL_RenderCopy@Base>
    24db:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000024e0 <__isoc99_scanf@plt>:
    24e0:	f3 0f 1e fa          	endbr64 
    24e4:	f2 ff 25 15 ba 00 00 	bnd jmp *0xba15(%rip)        # df00 <__isoc99_scanf@GLIBC_2.7>
    24eb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000024f0 <regcomp@plt>:
    24f0:	f3 0f 1e fa          	endbr64 
    24f4:	f2 ff 25 0d ba 00 00 	bnd jmp *0xba0d(%rip)        # df08 <regcomp@GLIBC_2.2.5>
    24fb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002500 <fflush@plt>:
    2500:	f3 0f 1e fa          	endbr64 
    2504:	f2 ff 25 05 ba 00 00 	bnd jmp *0xba05(%rip)        # df10 <fflush@GLIBC_2.2.5>
    250b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002510 <fopen@plt>:
    2510:	f3 0f 1e fa          	endbr64 
    2514:	f2 ff 25 fd b9 00 00 	bnd jmp *0xb9fd(%rip)        # df18 <fopen@GLIBC_2.2.5>
    251b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002520 <free@plt>:
    2520:	f3 0f 1e fa          	endbr64 
    2524:	f2 ff 25 f5 b9 00 00 	bnd jmp *0xb9f5(%rip)        # df20 <free@GLIBC_2.2.5>
    252b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002530 <exit@plt>:
    2530:	f3 0f 1e fa          	endbr64 
    2534:	f2 ff 25 ed b9 00 00 	bnd jmp *0xb9ed(%rip)        # df28 <exit@GLIBC_2.2.5>
    253b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002540 <regexec@plt>:
    2540:	f3 0f 1e fa          	endbr64 
    2544:	f2 ff 25 e5 b9 00 00 	bnd jmp *0xb9e5(%rip)        # df30 <regexec@GLIBC_2.3.4>
    254b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002550 <sigaction@plt>:
    2550:	f3 0f 1e fa          	endbr64 
    2554:	f2 ff 25 dd b9 00 00 	bnd jmp *0xb9dd(%rip)        # df38 <sigaction@GLIBC_2.2.5>
    255b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002560 <add_history@plt>:
    2560:	f3 0f 1e fa          	endbr64 
    2564:	f2 ff 25 d5 b9 00 00 	bnd jmp *0xb9d5(%rip)        # df40 <add_history@Base>
    256b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002570 <malloc@plt>:
    2570:	f3 0f 1e fa          	endbr64 
    2574:	f2 ff 25 cd b9 00 00 	bnd jmp *0xb9cd(%rip)        # df48 <malloc@GLIBC_2.2.5>
    257b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002580 <putchar@plt>:
    2580:	f3 0f 1e fa          	endbr64 
    2584:	f2 ff 25 c5 b9 00 00 	bnd jmp *0xb9c5(%rip)        # df50 <putchar@GLIBC_2.2.5>
    258b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002590 <strcmp@plt>:
    2590:	f3 0f 1e fa          	endbr64 
    2594:	f2 ff 25 bd b9 00 00 	bnd jmp *0xb9bd(%rip)        # df58 <strcmp@GLIBC_2.2.5>
    259b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000025a0 <strtol@plt>:
    25a0:	f3 0f 1e fa          	endbr64 
    25a4:	f2 ff 25 b5 b9 00 00 	bnd jmp *0xb9b5(%rip)        # df60 <strtol@GLIBC_2.2.5>
    25ab:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000025b0 <setitimer@plt>:
    25b0:	f3 0f 1e fa          	endbr64 
    25b4:	f2 ff 25 ad b9 00 00 	bnd jmp *0xb9ad(%rip)        # df68 <setitimer@GLIBC_2.2.5>
    25bb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000025c0 <fread@plt>:
    25c0:	f3 0f 1e fa          	endbr64 
    25c4:	f2 ff 25 a5 b9 00 00 	bnd jmp *0xb9a5(%rip)        # df70 <fread@GLIBC_2.2.5>
    25cb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000025d0 <puts@plt>:
    25d0:	f3 0f 1e fa          	endbr64 
    25d4:	f2 ff 25 9d b9 00 00 	bnd jmp *0xb99d(%rip)        # df78 <puts@GLIBC_2.2.5>
    25db:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000025e0 <strtok@plt>:
    25e0:	f3 0f 1e fa          	endbr64 
    25e4:	f2 ff 25 95 b9 00 00 	bnd jmp *0xb995(%rip)        # df80 <strtok@GLIBC_2.2.5>
    25eb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000025f0 <gettimeofday@plt>:
    25f0:	f3 0f 1e fa          	endbr64 
    25f4:	f2 ff 25 8d b9 00 00 	bnd jmp *0xb98d(%rip)        # df88 <gettimeofday@GLIBC_2.2.5>
    25fb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002600 <__fprintf_chk@plt>:
    2600:	f3 0f 1e fa          	endbr64 
    2604:	f2 ff 25 85 b9 00 00 	bnd jmp *0xb985(%rip)        # df90 <__fprintf_chk@GLIBC_2.3.4>
    260b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002610 <getopt_long@plt>:
    2610:	f3 0f 1e fa          	endbr64 
    2614:	f2 ff 25 7d b9 00 00 	bnd jmp *0xb97d(%rip)        # df98 <getopt_long@GLIBC_2.2.5>
    261b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002620 <SDL_SetWindowTitle@plt>:
    2620:	f3 0f 1e fa          	endbr64 
    2624:	f2 ff 25 75 b9 00 00 	bnd jmp *0xb975(%rip)        # dfa0 <SDL_SetWindowTitle@Base>
    262b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002630 <SDL_CreateTexture@plt>:
    2630:	f3 0f 1e fa          	endbr64 
    2634:	f2 ff 25 6d b9 00 00 	bnd jmp *0xb96d(%rip)        # dfa8 <SDL_CreateTexture@Base>
    263b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002640 <putc@plt>:
    2640:	f3 0f 1e fa          	endbr64 
    2644:	f2 ff 25 65 b9 00 00 	bnd jmp *0xb965(%rip)        # dfb0 <putc@GLIBC_2.2.5>
    264b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002650 <fwrite@plt>:
    2650:	f3 0f 1e fa          	endbr64 
    2654:	f2 ff 25 5d b9 00 00 	bnd jmp *0xb95d(%rip)        # dfb8 <fwrite@GLIBC_2.2.5>
    265b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

Disassembly of section .text:

0000000000002660 <main>:
    2660:	f3 0f 1e fa          	endbr64 
    2664:	48 83 ec 08          	sub    $0x8,%rsp
    2668:	e8 93 49 00 00       	call   7000 <init_monitor>
    266d:	31 c0                	xor    %eax,%eax
    266f:	e8 5c 5f 00 00       	call   85d0 <engine_start>
    2674:	31 c0                	xor    %eax,%eax
    2676:	48 83 c4 08          	add    $0x8,%rsp
    267a:	e9 41 50 00 00       	jmp    76c0 <is_exit_status_bad>
    267f:	90                   	nop

0000000000002680 <_start>:
    2680:	f3 0f 1e fa          	endbr64 
    2684:	31 ed                	xor    %ebp,%ebp
    2686:	49 89 d1             	mov    %rdx,%r9
    2689:	5e                   	pop    %rsi
    268a:	48 89 e2             	mov    %rsp,%rdx
    268d:	48 83 e4 f0          	and    $0xfffffffffffffff0,%rsp
    2691:	50                   	push   %rax
    2692:	54                   	push   %rsp
    2693:	45 31 c0             	xor    %r8d,%r8d
    2696:	31 c9                	xor    %ecx,%ecx
    2698:	48 8d 3d c1 ff ff ff 	lea    -0x3f(%rip),%rdi        # 2660 <main>
    269f:	ff 15 23 b9 00 00    	call   *0xb923(%rip)        # dfc8 <__libc_start_main@GLIBC_2.34>
    26a5:	f4                   	hlt    
    26a6:	66 2e 0f 1f 84 00 00 	cs nopw 0x0(%rax,%rax,1)
    26ad:	00 00 00 

00000000000026b0 <deregister_tm_clones>:
    26b0:	48 8d 3d 91 ba 00 00 	lea    0xba91(%rip),%rdi        # e148 <__TMC_END__>
    26b7:	48 8d 05 8a ba 00 00 	lea    0xba8a(%rip),%rax        # e148 <__TMC_END__>
    26be:	48 39 f8             	cmp    %rdi,%rax
    26c1:	74 15                	je     26d8 <deregister_tm_clones+0x28>
    26c3:	48 8b 05 06 b9 00 00 	mov    0xb906(%rip),%rax        # dfd0 <_ITM_deregisterTMCloneTable@Base>
    26ca:	48 85 c0             	test   %rax,%rax
    26cd:	74 09                	je     26d8 <deregister_tm_clones+0x28>
    26cf:	ff e0                	jmp    *%rax
    26d1:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    26d8:	c3                   	ret    
    26d9:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

00000000000026e0 <register_tm_clones>:
    26e0:	48 8d 3d 61 ba 00 00 	lea    0xba61(%rip),%rdi        # e148 <__TMC_END__>
    26e7:	48 8d 35 5a ba 00 00 	lea    0xba5a(%rip),%rsi        # e148 <__TMC_END__>
    26ee:	48 29 fe             	sub    %rdi,%rsi
    26f1:	48 89 f0             	mov    %rsi,%rax
    26f4:	48 c1 ee 3f          	shr    $0x3f,%rsi
    26f8:	48 c1 f8 03          	sar    $0x3,%rax
    26fc:	48 01 c6             	add    %rax,%rsi
    26ff:	48 d1 fe             	sar    %rsi
    2702:	74 14                	je     2718 <register_tm_clones+0x38>
    2704:	48 8b 05 d5 b8 00 00 	mov    0xb8d5(%rip),%rax        # dfe0 <_ITM_registerTMCloneTable@Base>
    270b:	48 85 c0             	test   %rax,%rax
    270e:	74 08                	je     2718 <register_tm_clones+0x38>
    2710:	ff e0                	jmp    *%rax
    2712:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
    2718:	c3                   	ret    
    2719:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000002720 <__do_global_dtors_aux>:
    2720:	f3 0f 1e fa          	endbr64 
    2724:	80 3d 1d c9 00 00 00 	cmpb   $0x0,0xc91d(%rip)        # f048 <completed.0>
    272b:	75 2b                	jne    2758 <__do_global_dtors_aux+0x38>
    272d:	55                   	push   %rbp
    272e:	48 83 3d 8a b8 00 00 	cmpq   $0x0,0xb88a(%rip)        # dfc0 <__cxa_finalize@GLIBC_2.2.5>
    2735:	00 
    2736:	48 89 e5             	mov    %rsp,%rbp
    2739:	74 0c                	je     2747 <__do_global_dtors_aux+0x27>
    273b:	48 8b 3d c6 b8 00 00 	mov    0xb8c6(%rip),%rdi        # e008 <__dso_handle>
    2742:	e8 f9 fb ff ff       	call   2340 <__cxa_finalize@plt>
    2747:	e8 64 ff ff ff       	call   26b0 <deregister_tm_clones>
    274c:	c6 05 f5 c8 00 00 01 	movb   $0x1,0xc8f5(%rip)        # f048 <completed.0>
    2753:	5d                   	pop    %rbp
    2754:	c3                   	ret    
    2755:	0f 1f 00             	nopl   (%rax)
    2758:	c3                   	ret    
    2759:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000002760 <frame_dummy>:
    2760:	f3 0f 1e fa          	endbr64 
    2764:	e9 77 ff ff ff       	jmp    26e0 <register_tm_clones>
    2769:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000002770 <device_update>:
    2770:	f3 0f 1e fa          	endbr64 
    2774:	53                   	push   %rbx
    2775:	48 83 ec 40          	sub    $0x40,%rsp
    2779:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    2780:	00 00 
    2782:	48 89 44 24 38       	mov    %rax,0x38(%rsp)
    2787:	31 c0                	xor    %eax,%eax
    2789:	e8 a2 4e 00 00       	call   7630 <get_time>
    278e:	48 89 c2             	mov    %rax,%rdx
    2791:	48 2b 15 b8 c8 00 00 	sub    0xc8b8(%rip),%rdx        # f050 <last.0>
    2798:	48 81 fa 19 41 00 00 	cmp    $0x4119,%rdx
    279f:	77 1f                	ja     27c0 <device_update+0x50>
    27a1:	48 8b 44 24 38       	mov    0x38(%rsp),%rax
    27a6:	64 48 2b 04 25 28 00 	sub    %fs:0x28,%rax
    27ad:	00 00 
    27af:	75 69                	jne    281a <device_update+0xaa>
    27b1:	48 83 c4 40          	add    $0x40,%rsp
    27b5:	5b                   	pop    %rbx
    27b6:	c3                   	ret    
    27b7:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
    27be:	00 00 
    27c0:	48 89 05 89 c8 00 00 	mov    %rax,0xc889(%rip)        # f050 <last.0>
    27c7:	31 c0                	xor    %eax,%eax
    27c9:	48 89 e3             	mov    %rsp,%rbx
    27cc:	e8 4f 08 00 00       	call   3020 <vga_update_screen>
    27d1:	eb 25                	jmp    27f8 <device_update+0x88>
    27d3:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
    27d8:	8d 90 00 fd ff ff    	lea    -0x300(%rax),%edx
    27de:	83 fa 01             	cmp    $0x1,%edx
    27e1:	77 15                	ja     27f8 <device_update+0x88>
    27e3:	31 f6                	xor    %esi,%esi
    27e5:	0f b6 7c 24 10       	movzbl 0x10(%rsp),%edi
    27ea:	3d 00 03 00 00       	cmp    $0x300,%eax
    27ef:	40 0f 94 c6          	sete   %sil
    27f3:	e8 88 05 00 00       	call   2d80 <send_key>
    27f8:	48 89 df             	mov    %rbx,%rdi
    27fb:	e8 f0 fb ff ff       	call   23f0 <SDL_PollEvent@plt>
    2800:	85 c0                	test   %eax,%eax
    2802:	74 9d                	je     27a1 <device_update+0x31>
    2804:	8b 04 24             	mov    (%rsp),%eax
    2807:	3d 00 01 00 00       	cmp    $0x100,%eax
    280c:	75 ca                	jne    27d8 <device_update+0x68>
    280e:	c7 05 20 b9 00 00 04 	movl   $0x4,0xb920(%rip)        # e138 <nemu_state>
    2815:	00 00 00 
    2818:	eb de                	jmp    27f8 <device_update+0x88>
    281a:	e8 a1 fc ff ff       	call   24c0 <__stack_chk_fail@plt>
    281f:	90                   	nop

0000000000002820 <sdl_clear_event_queue>:
    2820:	f3 0f 1e fa          	endbr64 
    2824:	53                   	push   %rbx
    2825:	48 83 ec 40          	sub    $0x40,%rsp
    2829:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    2830:	00 00 
    2832:	48 89 44 24 38       	mov    %rax,0x38(%rsp)
    2837:	31 c0                	xor    %eax,%eax
    2839:	48 89 e3             	mov    %rsp,%rbx
    283c:	0f 1f 40 00          	nopl   0x0(%rax)
    2840:	48 89 df             	mov    %rbx,%rdi
    2843:	e8 a8 fb ff ff       	call   23f0 <SDL_PollEvent@plt>
    2848:	85 c0                	test   %eax,%eax
    284a:	75 f4                	jne    2840 <sdl_clear_event_queue+0x20>
    284c:	48 8b 44 24 38       	mov    0x38(%rsp),%rax
    2851:	64 48 2b 04 25 28 00 	sub    %fs:0x28,%rax
    2858:	00 00 
    285a:	75 06                	jne    2862 <sdl_clear_event_queue+0x42>
    285c:	48 83 c4 40          	add    $0x40,%rsp
    2860:	5b                   	pop    %rbx
    2861:	c3                   	ret    
    2862:	e8 59 fc ff ff       	call   24c0 <__stack_chk_fail@plt>
    2867:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
    286e:	00 00 

0000000000002870 <init_device>:
    2870:	f3 0f 1e fa          	endbr64 
    2874:	48 83 ec 08          	sub    $0x8,%rsp
    2878:	31 c0                	xor    %eax,%eax
    287a:	e8 b1 52 00 00       	call   7b30 <init_map>
    287f:	31 c0                	xor    %eax,%eax
    2881:	e8 5a 03 00 00       	call   2be0 <init_serial>
    2886:	31 c0                	xor    %eax,%eax
    2888:	e8 13 04 00 00       	call   2ca0 <init_timer>
    288d:	31 c0                	xor    %eax,%eax
    288f:	e8 0c 08 00 00       	call   30a0 <init_vga>
    2894:	31 c0                	xor    %eax,%eax
    2896:	e8 c5 05 00 00       	call   2e60 <init_i8042>
    289b:	31 c0                	xor    %eax,%eax
    289d:	e8 4e 09 00 00       	call   31f0 <init_audio>
    28a2:	31 c0                	xor    %eax,%eax
    28a4:	e8 a7 09 00 00       	call   3250 <init_disk>
    28a9:	31 c0                	xor    %eax,%eax
    28ab:	48 83 c4 08          	add    $0x8,%rsp
    28af:	e9 ac 00 00 00       	jmp    2960 <init_alarm>
    28b4:	66 2e 0f 1f 84 00 00 	cs nopw 0x0(%rax,%rax,1)
    28bb:	00 00 00 
    28be:	66 90                	xchg   %ax,%ax

00000000000028c0 <alarm_sig_handler>:
    28c0:	f3 0f 1e fa          	endbr64 
    28c4:	8b 05 96 c7 00 00    	mov    0xc796(%rip),%eax        # f060 <idx>
    28ca:	85 c0                	test   %eax,%eax
    28cc:	7e 32                	jle    2900 <alarm_sig_handler+0x40>
    28ce:	55                   	push   %rbp
    28cf:	48 8d 2d aa c7 00 00 	lea    0xc7aa(%rip),%rbp        # f080 <handler>
    28d6:	53                   	push   %rbx
    28d7:	31 db                	xor    %ebx,%ebx
    28d9:	48 83 ec 08          	sub    $0x8,%rsp
    28dd:	0f 1f 00             	nopl   (%rax)
    28e0:	31 c0                	xor    %eax,%eax
    28e2:	ff 54 dd 00          	call   *0x0(%rbp,%rbx,8)
    28e6:	48 83 c3 01          	add    $0x1,%rbx
    28ea:	39 1d 70 c7 00 00    	cmp    %ebx,0xc770(%rip)        # f060 <idx>
    28f0:	7f ee                	jg     28e0 <alarm_sig_handler+0x20>
    28f2:	48 83 c4 08          	add    $0x8,%rsp
    28f6:	5b                   	pop    %rbx
    28f7:	5d                   	pop    %rbp
    28f8:	c3                   	ret    
    28f9:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    2900:	c3                   	ret    
    2901:	66 66 2e 0f 1f 84 00 	data16 cs nopw 0x0(%rax,%rax,1)
    2908:	00 00 00 00 
    290c:	0f 1f 40 00          	nopl   0x0(%rax)

0000000000002910 <add_alarm_handle>:
    2910:	f3 0f 1e fa          	endbr64 
    2914:	48 63 05 45 c7 00 00 	movslq 0xc745(%rip),%rax        # f060 <idx>
    291b:	83 f8 07             	cmp    $0x7,%eax
    291e:	7f 15                	jg     2935 <add_alarm_handle+0x25>
    2920:	8d 50 01             	lea    0x1(%rax),%edx
    2923:	89 15 37 c7 00 00    	mov    %edx,0xc737(%rip)        # f060 <idx>
    2929:	48 8d 15 50 c7 00 00 	lea    0xc750(%rip),%rdx        # f080 <handler>
    2930:	48 89 3c c2          	mov    %rdi,(%rdx,%rax,8)
    2934:	c3                   	ret    
    2935:	50                   	push   %rax
    2936:	48 8d 0d 53 67 00 00 	lea    0x6753(%rip),%rcx        # 9090 <__PRETTY_FUNCTION__.1>
    293d:	ba 1b 00 00 00       	mov    $0x1b,%edx
    2942:	48 8d 35 bb 66 00 00 	lea    0x66bb(%rip),%rsi        # 9004 <_IO_stdin_used+0x4>
    2949:	48 8d 3d c7 66 00 00 	lea    0x66c7(%rip),%rdi        # 9017 <_IO_stdin_used+0x17>
    2950:	e8 ab fa ff ff       	call   2400 <__assert_fail@plt>
    2955:	66 66 2e 0f 1f 84 00 	data16 cs nopw 0x0(%rax,%rax,1)
    295c:	00 00 00 00 

0000000000002960 <init_alarm>:
    2960:	f3 0f 1e fa          	endbr64 
    2964:	48 81 ec c8 00 00 00 	sub    $0xc8,%rsp
    296b:	b9 12 00 00 00       	mov    $0x12,%ecx
    2970:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    2977:	00 00 
    2979:	48 89 84 24 b8 00 00 	mov    %rax,0xb8(%rsp)
    2980:	00 
    2981:	31 c0                	xor    %eax,%eax
    2983:	48 8d 54 24 28       	lea    0x28(%rsp),%rdx
    2988:	48 8d 74 24 20       	lea    0x20(%rsp),%rsi
    298d:	48 89 d7             	mov    %rdx,%rdi
    2990:	31 d2                	xor    %edx,%edx
    2992:	f3 48 ab             	rep stos %rax,%es:(%rdi)
    2995:	48 8d 05 24 ff ff ff 	lea    -0xdc(%rip),%rax        # 28c0 <alarm_sig_handler>
    299c:	bf 1a 00 00 00       	mov    $0x1a,%edi
    29a1:	48 89 44 24 20       	mov    %rax,0x20(%rsp)
    29a6:	e8 a5 fb ff ff       	call   2550 <sigaction@plt>
    29ab:	85 c0                	test   %eax,%eax
    29ad:	75 4a                	jne    29f9 <init_alarm+0x99>
    29af:	48 c7 44 24 10 00 00 	movq   $0x0,0x10(%rsp)
    29b6:	00 00 
    29b8:	31 d2                	xor    %edx,%edx
    29ba:	48 89 e6             	mov    %rsp,%rsi
    29bd:	bf 01 00 00 00       	mov    $0x1,%edi
    29c2:	48 c7 44 24 18 1a 41 	movq   $0x411a,0x18(%rsp)
    29c9:	00 00 
    29cb:	66 0f 6f 44 24 10    	movdqa 0x10(%rsp),%xmm0
    29d1:	0f 29 04 24          	movaps %xmm0,(%rsp)
    29d5:	e8 d6 fb ff ff       	call   25b0 <setitimer@plt>
    29da:	85 c0                	test   %eax,%eax
    29dc:	75 7b                	jne    2a59 <init_alarm+0xf9>
    29de:	48 8b 84 24 b8 00 00 	mov    0xb8(%rsp),%rax
    29e5:	00 
    29e6:	64 48 2b 04 25 28 00 	sub    %fs:0x28,%rax
    29ed:	00 00 
    29ef:	75 63                	jne    2a54 <init_alarm+0xf4>
    29f1:	48 81 c4 c8 00 00 00 	add    $0xc8,%rsp
    29f8:	c3                   	ret    
    29f9:	48 8b 3d 00 c6 00 00 	mov    0xc600(%rip),%rdi        # f000 <stdout@GLIBC_2.2.5>
    2a00:	e8 fb fa ff ff       	call   2500 <fflush@plt>
    2a05:	ba 26 00 00 00       	mov    $0x26,%edx
    2a0a:	48 8b 0d 2f c6 00 00 	mov    0xc62f(%rip),%rcx        # f040 <stderr@GLIBC_2.2.5>
    2a11:	be 01 00 00 00       	mov    $0x1,%esi
    2a16:	48 8d 3d 33 66 00 00 	lea    0x6633(%rip),%rdi        # 9050 <_IO_stdin_used+0x50>
    2a1d:	e8 2e fc ff ff       	call   2650 <fwrite@plt>
    2a22:	48 8b 3d 3f 2b 01 00 	mov    0x12b3f(%rip),%rdi        # 15568 <log_fp>
    2a29:	e8 d2 fa ff ff       	call   2500 <fflush@plt>
    2a2e:	31 c0                	xor    %eax,%eax
    2a30:	e8 9b 20 00 00       	call   4ad0 <assert_fail_msg>
    2a35:	48 8d 0d 44 66 00 00 	lea    0x6644(%rip),%rcx        # 9080 <__PRETTY_FUNCTION__.0>
    2a3c:	ba 2b 00 00 00       	mov    $0x2b,%edx
    2a41:	48 8d 35 bc 65 00 00 	lea    0x65bc(%rip),%rsi        # 9004 <_IO_stdin_used+0x4>
    2a48:	48 8d 3d da 65 00 00 	lea    0x65da(%rip),%rdi        # 9029 <_IO_stdin_used+0x29>
    2a4f:	e8 ac f9 ff ff       	call   2400 <__assert_fail@plt>
    2a54:	e8 67 fa ff ff       	call   24c0 <__stack_chk_fail@plt>
    2a59:	48 8b 3d a0 c5 00 00 	mov    0xc5a0(%rip),%rdi        # f000 <stdout@GLIBC_2.2.5>
    2a60:	e8 9b fa ff ff       	call   2500 <fflush@plt>
    2a65:	ba 1d 00 00 00       	mov    $0x1d,%edx
    2a6a:	48 8b 0d cf c5 00 00 	mov    0xc5cf(%rip),%rcx        # f040 <stderr@GLIBC_2.2.5>
    2a71:	be 01 00 00 00       	mov    $0x1,%esi
    2a76:	48 8d 3d b5 65 00 00 	lea    0x65b5(%rip),%rdi        # 9032 <_IO_stdin_used+0x32>
    2a7d:	e8 ce fb ff ff       	call   2650 <fwrite@plt>
    2a82:	48 8b 3d df 2a 01 00 	mov    0x12adf(%rip),%rdi        # 15568 <log_fp>
    2a89:	e8 72 fa ff ff       	call   2500 <fflush@plt>
    2a8e:	31 c0                	xor    %eax,%eax
    2a90:	e8 3b 20 00 00       	call   4ad0 <assert_fail_msg>
    2a95:	48 8d 0d e4 65 00 00 	lea    0x65e4(%rip),%rcx        # 9080 <__PRETTY_FUNCTION__.0>
    2a9c:	ba 32 00 00 00       	mov    $0x32,%edx
    2aa1:	48 8d 35 5c 65 00 00 	lea    0x655c(%rip),%rsi        # 9004 <_IO_stdin_used+0x4>
    2aa8:	48 8d 3d 7a 65 00 00 	lea    0x657a(%rip),%rdi        # 9029 <_IO_stdin_used+0x29>
    2aaf:	e8 4c f9 ff ff       	call   2400 <__assert_fail@plt>
    2ab4:	66 2e 0f 1f 84 00 00 	cs nopw 0x0(%rax,%rax,1)
    2abb:	00 00 00 
    2abe:	66 90                	xchg   %ax,%ax

0000000000002ac0 <dev_raise_intr>:
    2ac0:	f3 0f 1e fa          	endbr64 
    2ac4:	c3                   	ret    
    2ac5:	66 2e 0f 1f 84 00 00 	cs nopw 0x0(%rax,%rax,1)
    2acc:	00 00 00 
    2acf:	90                   	nop

0000000000002ad0 <serial_io_handler>:
    2ad0:	f3 0f 1e fa          	endbr64 
    2ad4:	41 54                	push   %r12
    2ad6:	83 fe 01             	cmp    $0x1,%esi
    2ad9:	75 27                	jne    2b02 <serial_io_handler+0x32>
    2adb:	41 89 fc             	mov    %edi,%r12d
    2ade:	85 ff                	test   %edi,%edi
    2ae0:	0f 85 96 00 00 00    	jne    2b7c <serial_io_handler+0xac>
    2ae6:	84 d2                	test   %dl,%dl
    2ae8:	74 37                	je     2b21 <serial_io_handler+0x51>
    2aea:	48 8b 05 cf c5 00 00 	mov    0xc5cf(%rip),%rax        # f0c0 <serial_base>
    2af1:	48 8b 35 48 c5 00 00 	mov    0xc548(%rip),%rsi        # f040 <stderr@GLIBC_2.2.5>
    2af8:	41 5c                	pop    %r12
    2afa:	0f be 38             	movsbl (%rax),%edi
    2afd:	e9 3e fb ff ff       	jmp    2640 <putc@plt>
    2b02:	48 8d 0d 07 66 00 00 	lea    0x6607(%rip),%rcx        # 9110 <__PRETTY_FUNCTION__.0>
    2b09:	ba 21 00 00 00       	mov    $0x21,%edx
    2b0e:	48 8d 35 8c 65 00 00 	lea    0x658c(%rip),%rsi        # 90a1 <__PRETTY_FUNCTION__.1+0x11>
    2b15:	48 8d 3d 99 65 00 00 	lea    0x6599(%rip),%rdi        # 90b5 <__PRETTY_FUNCTION__.1+0x25>
    2b1c:	e8 df f8 ff ff       	call   2400 <__assert_fail@plt>
    2b21:	48 8b 3d d8 c4 00 00 	mov    0xc4d8(%rip),%rdi        # f000 <stdout@GLIBC_2.2.5>
    2b28:	e8 d3 f9 ff ff       	call   2500 <fflush@plt>
    2b2d:	ba 1f 00 00 00       	mov    $0x1f,%edx
    2b32:	48 8b 0d 07 c5 00 00 	mov    0xc507(%rip),%rcx        # f040 <stderr@GLIBC_2.2.5>
    2b39:	be 01 00 00 00       	mov    $0x1,%esi
    2b3e:	48 8d 3d 83 65 00 00 	lea    0x6583(%rip),%rdi        # 90c8 <__PRETTY_FUNCTION__.1+0x38>
    2b45:	e8 06 fb ff ff       	call   2650 <fwrite@plt>
    2b4a:	48 8b 3d 17 2a 01 00 	mov    0x12a17(%rip),%rdi        # 15568 <log_fp>
    2b51:	e8 aa f9 ff ff       	call   2500 <fflush@plt>
    2b56:	31 c0                	xor    %eax,%eax
    2b58:	e8 73 1f 00 00       	call   4ad0 <assert_fail_msg>
    2b5d:	48 8d 0d ac 65 00 00 	lea    0x65ac(%rip),%rcx        # 9110 <__PRETTY_FUNCTION__.0>
    2b64:	ba 27 00 00 00       	mov    $0x27,%edx
    2b69:	48 8d 35 31 65 00 00 	lea    0x6531(%rip),%rsi        # 90a1 <__PRETTY_FUNCTION__.1+0x11>
    2b70:	48 8d 3d b9 64 00 00 	lea    0x64b9(%rip),%rdi        # 9030 <_IO_stdin_used+0x30>
    2b77:	e8 84 f8 ff ff       	call   2400 <__assert_fail@plt>
    2b7c:	48 8b 3d 7d c4 00 00 	mov    0xc47d(%rip),%rdi        # f000 <stdout@GLIBC_2.2.5>
    2b83:	e8 78 f9 ff ff       	call   2500 <fflush@plt>
    2b88:	44 89 e1             	mov    %r12d,%ecx
    2b8b:	be 01 00 00 00       	mov    $0x1,%esi
    2b90:	31 c0                	xor    %eax,%eax
    2b92:	48 8b 3d a7 c4 00 00 	mov    0xc4a7(%rip),%rdi        # f040 <stderr@GLIBC_2.2.5>
    2b99:	48 8d 15 48 65 00 00 	lea    0x6548(%rip),%rdx        # 90e8 <__PRETTY_FUNCTION__.1+0x58>
    2ba0:	e8 5b fa ff ff       	call   2600 <__fprintf_chk@plt>
    2ba5:	48 8b 3d bc 29 01 00 	mov    0x129bc(%rip),%rdi        # 15568 <log_fp>
    2bac:	e8 4f f9 ff ff       	call   2500 <fflush@plt>
    2bb1:	31 c0                	xor    %eax,%eax
    2bb3:	e8 18 1f 00 00       	call   4ad0 <assert_fail_msg>
    2bb8:	48 8d 0d 51 65 00 00 	lea    0x6551(%rip),%rcx        # 9110 <__PRETTY_FUNCTION__.0>
    2bbf:	ba 29 00 00 00       	mov    $0x29,%edx
    2bc4:	48 8d 35 d6 64 00 00 	lea    0x64d6(%rip),%rsi        # 90a1 <__PRETTY_FUNCTION__.1+0x11>
    2bcb:	48 8d 3d 5e 64 00 00 	lea    0x645e(%rip),%rdi        # 9030 <_IO_stdin_used+0x30>
    2bd2:	e8 29 f8 ff ff       	call   2400 <__assert_fail@plt>
    2bd7:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
    2bde:	00 00 

0000000000002be0 <init_serial>:
    2be0:	f3 0f 1e fa          	endbr64 
    2be4:	48 83 ec 08          	sub    $0x8,%rsp
    2be8:	bf 08 00 00 00       	mov    $0x8,%edi
    2bed:	e8 de 4e 00 00       	call   7ad0 <new_space>
    2bf2:	b9 08 00 00 00       	mov    $0x8,%ecx
    2bf7:	4c 8d 05 d2 fe ff ff 	lea    -0x12e(%rip),%r8        # 2ad0 <serial_io_handler>
    2bfe:	be f8 03 00 a0       	mov    $0xa00003f8,%esi
    2c03:	48 89 05 b6 c4 00 00 	mov    %rax,0xc4b6(%rip)        # f0c0 <serial_base>
    2c0a:	48 89 c2             	mov    %rax,%rdx
    2c0d:	48 83 c4 08          	add    $0x8,%rsp
    2c11:	48 8d 3d a6 64 00 00 	lea    0x64a6(%rip),%rdi        # 90be <__PRETTY_FUNCTION__.1+0x2e>
    2c18:	e9 e3 53 00 00       	jmp    8000 <add_mmio_map>
    2c1d:	0f 1f 00             	nopl   (%rax)

0000000000002c20 <timer_intr>:
    2c20:	f3 0f 1e fa          	endbr64 
    2c24:	8b 05 0e b5 00 00    	mov    0xb50e(%rip),%eax        # e138 <nemu_state>
    2c2a:	85 c0                	test   %eax,%eax
    2c2c:	74 02                	je     2c30 <timer_intr+0x10>
    2c2e:	c3                   	ret    
    2c2f:	90                   	nop
    2c30:	31 c0                	xor    %eax,%eax
    2c32:	e9 89 fe ff ff       	jmp    2ac0 <dev_raise_intr>
    2c37:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
    2c3e:	00 00 

0000000000002c40 <rtc_io_handler>:
    2c40:	f3 0f 1e fa          	endbr64 
    2c44:	48 83 ec 08          	sub    $0x8,%rsp
    2c48:	83 e7 fb             	and    $0xfffffffb,%edi
    2c4b:	75 29                	jne    2c76 <rtc_io_handler+0x36>
    2c4d:	84 d2                	test   %dl,%dl
    2c4f:	74 0f                	je     2c60 <rtc_io_handler+0x20>
    2c51:	48 83 c4 08          	add    $0x8,%rsp
    2c55:	c3                   	ret    
    2c56:	66 2e 0f 1f 84 00 00 	cs nopw 0x0(%rax,%rax,1)
    2c5d:	00 00 00 
    2c60:	31 c0                	xor    %eax,%eax
    2c62:	e8 c9 49 00 00       	call   7630 <get_time>
    2c67:	48 8b 15 5a c4 00 00 	mov    0xc45a(%rip),%rdx        # f0c8 <rtc_port_base>
    2c6e:	48 89 02             	mov    %rax,(%rdx)
    2c71:	48 83 c4 08          	add    $0x8,%rsp
    2c75:	c3                   	ret    
    2c76:	48 8d 0d db 64 00 00 	lea    0x64db(%rip),%rcx        # 9158 <__PRETTY_FUNCTION__.0>
    2c7d:	ba 17 00 00 00       	mov    $0x17,%edx
    2c82:	48 8d 35 99 64 00 00 	lea    0x6499(%rip),%rsi        # 9122 <__PRETTY_FUNCTION__.0+0x12>
    2c89:	48 8d 3d a5 64 00 00 	lea    0x64a5(%rip),%rdi        # 9135 <__PRETTY_FUNCTION__.0+0x25>
    2c90:	e8 6b f7 ff ff       	call   2400 <__assert_fail@plt>
    2c95:	66 66 2e 0f 1f 84 00 	data16 cs nopw 0x0(%rax,%rax,1)
    2c9c:	00 00 00 00 

0000000000002ca0 <init_timer>:
    2ca0:	f3 0f 1e fa          	endbr64 
    2ca4:	48 83 ec 08          	sub    $0x8,%rsp
    2ca8:	bf 08 00 00 00       	mov    $0x8,%edi
    2cad:	e8 1e 4e 00 00       	call   7ad0 <new_space>
    2cb2:	b9 08 00 00 00       	mov    $0x8,%ecx
    2cb7:	be 48 00 00 a0       	mov    $0xa0000048,%esi
    2cbc:	48 8d 3d 8d 64 00 00 	lea    0x648d(%rip),%rdi        # 9150 <__PRETTY_FUNCTION__.0+0x40>
    2cc3:	48 89 c2             	mov    %rax,%rdx
    2cc6:	4c 8d 05 73 ff ff ff 	lea    -0x8d(%rip),%r8        # 2c40 <rtc_io_handler>
    2ccd:	48 89 05 f4 c3 00 00 	mov    %rax,0xc3f4(%rip)        # f0c8 <rtc_port_base>
    2cd4:	e8 27 53 00 00       	call   8000 <add_mmio_map>
    2cd9:	48 8d 3d 40 ff ff ff 	lea    -0xc0(%rip),%rdi        # 2c20 <timer_intr>
    2ce0:	48 83 c4 08          	add    $0x8,%rsp
    2ce4:	e9 27 fc ff ff       	jmp    2910 <add_alarm_handle>
    2ce9:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000002cf0 <i8042_data_io_handler>:
    2cf0:	f3 0f 1e fa          	endbr64 
    2cf4:	48 83 ec 08          	sub    $0x8,%rsp
    2cf8:	84 d2                	test   %dl,%dl
    2cfa:	75 43                	jne    2d3f <i8042_data_io_handler+0x4f>
    2cfc:	85 ff                	test   %edi,%edi
    2cfe:	75 5e                	jne    2d5e <i8042_data_io_handler+0x6e>
    2d00:	8b 05 e6 c3 00 00    	mov    0xc3e6(%rip),%eax        # f0ec <key_f>
    2d06:	3b 05 dc c3 00 00    	cmp    0xc3dc(%rip),%eax        # f0e8 <key_r>
    2d0c:	48 8b 0d cd c3 00 00 	mov    0xc3cd(%rip),%rcx        # f0e0 <i8042_data_port_base>
    2d13:	74 23                	je     2d38 <i8042_data_io_handler+0x48>
    2d15:	48 63 f0             	movslq %eax,%rsi
    2d18:	48 8d 15 e1 c3 00 00 	lea    0xc3e1(%rip),%rdx        # f100 <key_queue>
    2d1f:	83 c0 01             	add    $0x1,%eax
    2d22:	8b 3c b2             	mov    (%rdx,%rsi,4),%edi
    2d25:	99                   	cltd   
    2d26:	c1 ea 16             	shr    $0x16,%edx
    2d29:	01 d0                	add    %edx,%eax
    2d2b:	25 ff 03 00 00       	and    $0x3ff,%eax
    2d30:	29 d0                	sub    %edx,%eax
    2d32:	89 05 b4 c3 00 00    	mov    %eax,0xc3b4(%rip)        # f0ec <key_f>
    2d38:	89 39                	mov    %edi,(%rcx)
    2d3a:	48 83 c4 08          	add    $0x8,%rsp
    2d3e:	c3                   	ret    
    2d3f:	48 8d 0d 8a 64 00 00 	lea    0x648a(%rip),%rcx        # 91d0 <__PRETTY_FUNCTION__.0>
    2d46:	ba 5b 00 00 00       	mov    $0x5b,%edx
    2d4b:	48 8d 35 15 64 00 00 	lea    0x6415(%rip),%rsi        # 9167 <__PRETTY_FUNCTION__.0+0xf>
    2d52:	48 8d 3d 24 64 00 00 	lea    0x6424(%rip),%rdi        # 917d <__PRETTY_FUNCTION__.0+0x25>
    2d59:	e8 a2 f6 ff ff       	call   2400 <__assert_fail@plt>
    2d5e:	48 8d 0d 6b 64 00 00 	lea    0x646b(%rip),%rcx        # 91d0 <__PRETTY_FUNCTION__.0>
    2d65:	ba 5c 00 00 00       	mov    $0x5c,%edx
    2d6a:	48 8d 35 f6 63 00 00 	lea    0x63f6(%rip),%rsi        # 9167 <__PRETTY_FUNCTION__.0+0xf>
    2d71:	48 8d 3d 0f 64 00 00 	lea    0x640f(%rip),%rdi        # 9187 <__PRETTY_FUNCTION__.0+0x2f>
    2d78:	e8 83 f6 ff ff       	call   2400 <__assert_fail@plt>
    2d7d:	0f 1f 00             	nopl   (%rax)

0000000000002d80 <send_key>:
    2d80:	f3 0f 1e fa          	endbr64 
    2d84:	8b 05 ae b3 00 00    	mov    0xb3ae(%rip),%eax        # e138 <nemu_state>
    2d8a:	85 c0                	test   %eax,%eax
    2d8c:	75 4d                	jne    2ddb <send_key+0x5b>
    2d8e:	40 0f b6 ff          	movzbl %dil,%edi
    2d92:	48 8d 05 67 d3 00 00 	lea    0xd367(%rip),%rax        # 10100 <keymap>
    2d99:	8b 14 b8             	mov    (%rax,%rdi,4),%edx
    2d9c:	85 d2                	test   %edx,%edx
    2d9e:	74 3b                	je     2ddb <send_key+0x5b>
    2da0:	48 63 0d 41 c3 00 00 	movslq 0xc341(%rip),%rcx        # f0e8 <key_r>
    2da7:	40 0f b6 f6          	movzbl %sil,%esi
    2dab:	c1 e6 0f             	shl    $0xf,%esi
    2dae:	48 89 c8             	mov    %rcx,%rax
    2db1:	09 d6                	or     %edx,%esi
    2db3:	48 8d 15 46 c3 00 00 	lea    0xc346(%rip),%rdx        # f100 <key_queue>
    2dba:	83 c0 01             	add    $0x1,%eax
    2dbd:	89 34 8a             	mov    %esi,(%rdx,%rcx,4)
    2dc0:	99                   	cltd   
    2dc1:	c1 ea 16             	shr    $0x16,%edx
    2dc4:	01 d0                	add    %edx,%eax
    2dc6:	25 ff 03 00 00       	and    $0x3ff,%eax
    2dcb:	29 d0                	sub    %edx,%eax
    2dcd:	3b 05 19 c3 00 00    	cmp    0xc319(%rip),%eax        # f0ec <key_f>
    2dd3:	89 05 0f c3 00 00    	mov    %eax,0xc30f(%rip)        # f0e8 <key_r>
    2dd9:	74 05                	je     2de0 <send_key+0x60>
    2ddb:	c3                   	ret    
    2ddc:	0f 1f 40 00          	nopl   0x0(%rax)
    2de0:	48 83 ec 08          	sub    $0x8,%rsp
    2de4:	48 8b 3d 15 c2 00 00 	mov    0xc215(%rip),%rdi        # f000 <stdout@GLIBC_2.2.5>
    2deb:	e8 10 f7 ff ff       	call   2500 <fflush@plt>
    2df0:	ba 1f 00 00 00       	mov    $0x1f,%edx
    2df5:	48 8b 0d 44 c2 00 00 	mov    0xc244(%rip),%rcx        # f040 <stderr@GLIBC_2.2.5>
    2dfc:	be 01 00 00 00       	mov    $0x1,%esi
    2e01:	48 8d 3d a8 63 00 00 	lea    0x63a8(%rip),%rdi        # 91b0 <__PRETTY_FUNCTION__.0+0x58>
    2e08:	e8 43 f8 ff ff       	call   2650 <fwrite@plt>
    2e0d:	48 8b 3d 54 27 01 00 	mov    0x12754(%rip),%rdi        # 15568 <log_fp>
    2e14:	e8 e7 f6 ff ff       	call   2500 <fflush@plt>
    2e19:	31 c0                	xor    %eax,%eax
    2e1b:	e8 b0 1c 00 00       	call   4ad0 <assert_fail_msg>
    2e20:	8b 05 c6 c2 00 00    	mov    0xc2c6(%rip),%eax        # f0ec <key_f>
    2e26:	39 05 bc c2 00 00    	cmp    %eax,0xc2bc(%rip)        # f0e8 <key_r>
    2e2c:	74 05                	je     2e33 <send_key+0xb3>
    2e2e:	48 83 c4 08          	add    $0x8,%rsp
    2e32:	c3                   	ret    
    2e33:	48 8d 0d ae 63 00 00 	lea    0x63ae(%rip),%rcx        # 91e8 <__PRETTY_FUNCTION__.1>
    2e3a:	ba 3c 00 00 00       	mov    $0x3c,%edx
    2e3f:	48 8d 35 21 63 00 00 	lea    0x6321(%rip),%rsi        # 9167 <__PRETTY_FUNCTION__.0+0xf>
    2e46:	48 8d 3d 46 63 00 00 	lea    0x6346(%rip),%rdi        # 9193 <__PRETTY_FUNCTION__.0+0x3b>
    2e4d:	e8 ae f5 ff ff       	call   2400 <__assert_fail@plt>
    2e52:	66 66 2e 0f 1f 84 00 	data16 cs nopw 0x0(%rax,%rax,1)
    2e59:	00 00 00 00 
    2e5d:	0f 1f 00             	nopl   (%rax)

0000000000002e60 <init_i8042>:
    2e60:	f3 0f 1e fa          	endbr64 
    2e64:	48 83 ec 08          	sub    $0x8,%rsp
    2e68:	bf 04 00 00 00       	mov    $0x4,%edi
    2e6d:	e8 5e 4c 00 00       	call   7ad0 <new_space>
    2e72:	b9 04 00 00 00       	mov    $0x4,%ecx
    2e77:	4c 8d 05 72 fe ff ff 	lea    -0x18e(%rip),%r8        # 2cf0 <i8042_data_io_handler>
    2e7e:	be 60 00 00 a0       	mov    $0xa0000060,%esi
    2e83:	c7 00 00 00 00 00    	movl   $0x0,(%rax)
    2e89:	48 89 c2             	mov    %rax,%rdx
    2e8c:	48 8d 3d 0f 63 00 00 	lea    0x630f(%rip),%rdi        # 91a2 <__PRETTY_FUNCTION__.0+0x4a>
    2e93:	48 89 05 46 c2 00 00 	mov    %rax,0xc246(%rip)        # f0e0 <i8042_data_port_base>
    2e9a:	e8 61 51 00 00       	call   8000 <add_mmio_map>
    2e9f:	66 0f 6f 05 79 63 00 	movdqa 0x6379(%rip),%xmm0        # 9220 <__PRETTY_FUNCTION__.1+0x38>
    2ea6:	00 
    2ea7:	48 8b 05 4a 63 00 00 	mov    0x634a(%rip),%rax        # 91f8 <__PRETTY_FUNCTION__.1+0x10>
    2eae:	c7 05 5c d3 00 00 0d 	movl   $0xd,0xd35c(%rip)        # 10214 <keymap+0x114>
    2eb5:	00 00 00 
    2eb8:	c7 05 d2 d3 00 00 44 	movl   $0x44,0xd3d2(%rip)        # 10294 <keymap+0x194>
    2ebf:	00 00 00 
    2ec2:	0f 11 05 03 d3 00 00 	movups %xmm0,0xd303(%rip)        # 101cc <keymap+0xcc>
    2ec9:	66 0f 6f 05 5f 63 00 	movdqa 0x635f(%rip),%xmm0        # 9230 <__PRETTY_FUNCTION__.1+0x48>
    2ed0:	00 
    2ed1:	48 89 05 34 d3 00 00 	mov    %rax,0xd334(%rip)        # 1020c <keymap+0x10c>
    2ed8:	48 8b 05 21 63 00 00 	mov    0x6321(%rip),%rax        # 9200 <__PRETTY_FUNCTION__.1+0x18>
    2edf:	0f 11 05 f6 d2 00 00 	movups %xmm0,0xd2f6(%rip)        # 101dc <keymap+0xdc>
    2ee6:	66 0f 6f 05 52 63 00 	movdqa 0x6352(%rip),%xmm0        # 9240 <__PRETTY_FUNCTION__.1+0x58>
    2eed:	00 
    2eee:	48 89 05 cb d2 00 00 	mov    %rax,0xd2cb(%rip)        # 101c0 <keymap+0xc0>
    2ef5:	48 8b 05 0c 63 00 00 	mov    0x630c(%rip),%rax        # 9208 <__PRETTY_FUNCTION__.1+0x20>
    2efc:	0f 11 05 e9 d2 00 00 	movups %xmm0,0xd2e9(%rip)        # 101ec <keymap+0xec>
    2f03:	66 0f 6f 05 45 63 00 	movdqa 0x6345(%rip),%xmm0        # 9250 <__PRETTY_FUNCTION__.1+0x68>
    2f0a:	00 
    2f0b:	48 89 05 6e d5 00 00 	mov    %rax,0xd56e(%rip)        # 10480 <keymap+0x380>
    2f12:	0f 11 05 e3 d2 00 00 	movups %xmm0,0xd2e3(%rip)        # 101fc <keymap+0xfc>
    2f19:	66 0f 6f 05 3f 63 00 	movdqa 0x633f(%rip),%xmm0        # 9260 <__PRETTY_FUNCTION__.1+0x78>
    2f20:	00 
    2f21:	c7 05 5d d5 00 00 45 	movl   $0x45,0xd55d(%rip)        # 10488 <keymap+0x388>
    2f28:	00 00 00 
    2f2b:	0f 29 05 de d1 00 00 	movaps %xmm0,0xd1de(%rip)        # 10110 <keymap+0x10>
    2f32:	66 0f 6f 05 36 63 00 	movdqa 0x6336(%rip),%xmm0        # 9270 <__PRETTY_FUNCTION__.1+0x88>
    2f39:	00 
    2f3a:	0f 29 05 df d1 00 00 	movaps %xmm0,0xd1df(%rip)        # 10120 <keymap+0x20>
    2f41:	66 0f 6f 05 37 63 00 	movdqa 0x6337(%rip),%xmm0        # 9280 <__PRETTY_FUNCTION__.1+0x98>
    2f48:	00 
    2f49:	0f 29 05 e0 d1 00 00 	movaps %xmm0,0xd1e0(%rip)        # 10130 <keymap+0x30>
    2f50:	66 0f 6f 05 38 63 00 	movdqa 0x6338(%rip),%xmm0        # 9290 <__PRETTY_FUNCTION__.1+0xa8>
    2f57:	00 
    2f58:	0f 29 05 e1 d1 00 00 	movaps %xmm0,0xd1e1(%rip)        # 10140 <keymap+0x40>
    2f5f:	66 0f 6f 05 39 63 00 	movdqa 0x6339(%rip),%xmm0        # 92a0 <__PRETTY_FUNCTION__.1+0xb8>
    2f66:	00 
    2f67:	0f 29 05 e2 d1 00 00 	movaps %xmm0,0xd1e2(%rip)        # 10150 <keymap+0x50>
    2f6e:	66 0f 6f 05 3a 63 00 	movdqa 0x633a(%rip),%xmm0        # 92b0 <__PRETTY_FUNCTION__.1+0xc8>
    2f75:	00 
    2f76:	0f 29 05 e3 d1 00 00 	movaps %xmm0,0xd1e3(%rip)        # 10160 <keymap+0x60>
    2f7d:	66 0f 6f 05 3b 63 00 	movdqa 0x633b(%rip),%xmm0        # 92c0 <__PRETTY_FUNCTION__.1+0xd8>
    2f84:	00 
    2f85:	0f 29 05 e4 d1 00 00 	movaps %xmm0,0xd1e4(%rip)        # 10170 <keymap+0x70>
    2f8c:	66 0f 6f 05 3c 63 00 	movdqa 0x633c(%rip),%xmm0        # 92d0 <__PRETTY_FUNCTION__.1+0xe8>
    2f93:	00 
    2f94:	0f 29 05 e5 d1 00 00 	movaps %xmm0,0xd1e5(%rip)        # 10180 <keymap+0x80>
    2f9b:	66 0f 6f 05 3d 63 00 	movdqa 0x633d(%rip),%xmm0        # 92e0 <__PRETTY_FUNCTION__.1+0xf8>
    2fa2:	00 
    2fa3:	48 8b 05 66 62 00 00 	mov    0x6266(%rip),%rax        # 9210 <__PRETTY_FUNCTION__.1+0x28>
    2faa:	c7 05 e4 d4 00 00 47 	movl   $0x47,0xd4e4(%rip)        # 10498 <keymap+0x398>
    2fb1:	00 00 00 
    2fb4:	0f 29 05 d5 d1 00 00 	movaps %xmm0,0xd1d5(%rip)        # 10190 <keymap+0x90>
    2fbb:	66 0f 6f 05 2d 63 00 	movdqa 0x632d(%rip),%xmm0        # 92f0 <__PRETTY_FUNCTION__.1+0x108>
    2fc2:	00 
    2fc3:	48 89 05 c6 d4 00 00 	mov    %rax,0xd4c6(%rip)        # 10490 <keymap+0x390>
    2fca:	48 8b 05 47 62 00 00 	mov    0x6247(%rip),%rax        # 9218 <__PRETTY_FUNCTION__.1+0x30>
    2fd1:	0f 29 05 c8 d1 00 00 	movaps %xmm0,0xd1c8(%rip)        # 101a0 <keymap+0xa0>
    2fd8:	66 0f 6f 05 20 63 00 	movdqa 0x6320(%rip),%xmm0        # 9300 <__PRETTY_FUNCTION__.1+0x118>
    2fdf:	00 
    2fe0:	48 89 05 5d d2 00 00 	mov    %rax,0xd25d(%rip)        # 10244 <keymap+0x144>
    2fe7:	0f 29 05 c2 d1 00 00 	movaps %xmm0,0xd1c2(%rip)        # 101b0 <keymap+0xb0>
    2fee:	66 0f 6f 05 1a 63 00 	movdqa 0x631a(%rip),%xmm0        # 9310 <__PRETTY_FUNCTION__.1+0x128>
    2ff5:	00 
    2ff6:	0f 11 05 27 d2 00 00 	movups %xmm0,0xd227(%rip)        # 10224 <keymap+0x124>
    2ffd:	66 0f 6f 05 1b 63 00 	movdqa 0x631b(%rip),%xmm0        # 9320 <__PRETTY_FUNCTION__.1+0x138>
    3004:	00 
    3005:	0f 11 05 28 d2 00 00 	movups %xmm0,0xd228(%rip)        # 10234 <keymap+0x134>
    300c:	48 83 c4 08          	add    $0x8,%rsp
    3010:	c3                   	ret    
    3011:	66 2e 0f 1f 84 00 00 	cs nopw 0x0(%rax,%rax,1)
    3018:	00 00 00 
    301b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000003020 <vga_update_screen>:
    3020:	f3 0f 1e fa          	endbr64 
    3024:	48 8b 05 e5 d4 00 00 	mov    0xd4e5(%rip),%rax        # 10510 <vgactl_port_base>
    302b:	8b 40 04             	mov    0x4(%rax),%eax
    302e:	85 c0                	test   %eax,%eax
    3030:	75 06                	jne    3038 <vga_update_screen+0x18>
    3032:	c3                   	ret    
    3033:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
    3038:	48 83 ec 08          	sub    $0x8,%rsp
    303c:	48 8b 15 d5 d4 00 00 	mov    0xd4d5(%rip),%rdx        # 10518 <vmem>
    3043:	48 8b 3d b6 d4 00 00 	mov    0xd4b6(%rip),%rdi        # 10500 <texture>
    304a:	31 f6                	xor    %esi,%esi
    304c:	b9 40 06 00 00       	mov    $0x640,%ecx
    3051:	e8 ba f3 ff ff       	call   2410 <SDL_UpdateTexture@plt>
    3056:	48 8b 3d ab d4 00 00 	mov    0xd4ab(%rip),%rdi        # 10508 <renderer>
    305d:	e8 0e f4 ff ff       	call   2470 <SDL_RenderClear@plt>
    3062:	48 8b 35 97 d4 00 00 	mov    0xd497(%rip),%rsi        # 10500 <texture>
    3069:	31 c9                	xor    %ecx,%ecx
    306b:	31 d2                	xor    %edx,%edx
    306d:	48 8b 3d 94 d4 00 00 	mov    0xd494(%rip),%rdi        # 10508 <renderer>
    3074:	e8 57 f4 ff ff       	call   24d0 <SDL_RenderCopy@plt>
    3079:	48 8b 3d 88 d4 00 00 	mov    0xd488(%rip),%rdi        # 10508 <renderer>
    3080:	e8 eb f2 ff ff       	call   2370 <SDL_RenderPresent@plt>
    3085:	48 8b 05 84 d4 00 00 	mov    0xd484(%rip),%rax        # 10510 <vgactl_port_base>
    308c:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%rax)
    3093:	48 83 c4 08          	add    $0x8,%rsp
    3097:	c3                   	ret    
    3098:	0f 1f 84 00 00 00 00 	nopl   0x0(%rax,%rax,1)
    309f:	00 

00000000000030a0 <init_vga>:
    30a0:	f3 0f 1e fa          	endbr64 
    30a4:	55                   	push   %rbp
    30a5:	bf 08 00 00 00       	mov    $0x8,%edi
    30aa:	48 81 ec a0 00 00 00 	sub    $0xa0,%rsp
    30b1:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    30b8:	00 00 
    30ba:	48 89 84 24 98 00 00 	mov    %rax,0x98(%rsp)
    30c1:	00 
    30c2:	31 c0                	xor    %eax,%eax
    30c4:	48 8d 6c 24 10       	lea    0x10(%rsp),%rbp
    30c9:	e8 02 4a 00 00       	call   7ad0 <new_space>
    30ce:	45 31 c0             	xor    %r8d,%r8d
    30d1:	b9 08 00 00 00       	mov    $0x8,%ecx
    30d6:	be 00 01 00 a0       	mov    $0xa0000100,%esi
    30db:	c7 00 2c 01 90 01    	movl   $0x190012c,(%rax)
    30e1:	48 89 c2             	mov    %rax,%rdx
    30e4:	48 8d 3d 45 62 00 00 	lea    0x6245(%rip),%rdi        # 9330 <__PRETTY_FUNCTION__.1+0x148>
    30eb:	48 89 05 1e d4 00 00 	mov    %rax,0xd41e(%rip)        # 10510 <vgactl_port_base>
    30f2:	e8 09 4f 00 00       	call   8000 <add_mmio_map>
    30f7:	bf 00 53 07 00       	mov    $0x75300,%edi
    30fc:	e8 cf 49 00 00       	call   7ad0 <new_space>
    3101:	45 31 c0             	xor    %r8d,%r8d
    3104:	b9 00 53 07 00       	mov    $0x75300,%ecx
    3109:	be 00 00 00 a1       	mov    $0xa1000000,%esi
    310e:	48 89 c2             	mov    %rax,%rdx
    3111:	48 8d 3d 1f 62 00 00 	lea    0x621f(%rip),%rdi        # 9337 <__PRETTY_FUNCTION__.1+0x14f>
    3118:	48 89 05 f9 d3 00 00 	mov    %rax,0xd3f9(%rip)        # 10518 <vmem>
    311f:	e8 dc 4e 00 00       	call   8000 <add_mmio_map>
    3124:	ba 80 00 00 00       	mov    $0x80,%edx
    3129:	48 89 ef             	mov    %rbp,%rdi
    312c:	31 c0                	xor    %eax,%eax
    312e:	4c 8d 05 07 62 00 00 	lea    0x6207(%rip),%r8        # 933c <__PRETTY_FUNCTION__.1+0x154>
    3135:	48 8d 0d 0d 62 00 00 	lea    0x620d(%rip),%rcx        # 9349 <__PRETTY_FUNCTION__.1+0x161>
    313c:	be 01 00 00 00       	mov    $0x1,%esi
    3141:	48 c7 44 24 08 00 00 	movq   $0x0,0x8(%rsp)
    3148:	00 00 
    314a:	e8 91 f2 ff ff       	call   23e0 <__sprintf_chk@plt>
    314f:	bf 20 00 00 00       	mov    $0x20,%edi
    3154:	e8 d7 f2 ff ff       	call   2430 <SDL_Init@plt>
    3159:	48 8d 4c 24 08       	lea    0x8(%rsp),%rcx
    315e:	31 d2                	xor    %edx,%edx
    3160:	4c 8d 05 a1 d3 00 00 	lea    0xd3a1(%rip),%r8        # 10508 <renderer>
    3167:	be 58 02 00 00       	mov    $0x258,%esi
    316c:	bf 20 03 00 00       	mov    $0x320,%edi
    3171:	e8 1a f2 ff ff       	call   2390 <SDL_CreateWindowAndRenderer@plt>
    3176:	48 8b 7c 24 08       	mov    0x8(%rsp),%rdi
    317b:	48 89 ee             	mov    %rbp,%rsi
    317e:	e8 9d f4 ff ff       	call   2620 <SDL_SetWindowTitle@plt>
    3183:	48 8b 3d 7e d3 00 00 	mov    0xd37e(%rip),%rdi        # 10508 <renderer>
    318a:	41 b8 2c 01 00 00    	mov    $0x12c,%r8d
    3190:	31 d2                	xor    %edx,%edx
    3192:	b9 90 01 00 00       	mov    $0x190,%ecx
    3197:	be 04 20 36 16       	mov    $0x16362004,%esi
    319c:	e8 8f f4 ff ff       	call   2630 <SDL_CreateTexture@plt>
    31a1:	48 8b 3d 70 d3 00 00 	mov    0xd370(%rip),%rdi        # 10518 <vmem>
    31a8:	48 89 05 51 d3 00 00 	mov    %rax,0xd351(%rip)        # 10500 <texture>
    31af:	48 8b 84 24 98 00 00 	mov    0x98(%rsp),%rax
    31b6:	00 
    31b7:	64 48 2b 04 25 28 00 	sub    %fs:0x28,%rax
    31be:	00 00 
    31c0:	75 14                	jne    31d6 <init_vga+0x136>
    31c2:	48 81 c4 a0 00 00 00 	add    $0xa0,%rsp
    31c9:	ba 00 53 07 00       	mov    $0x75300,%edx
    31ce:	31 f6                	xor    %esi,%esi
    31d0:	5d                   	pop    %rbp
    31d1:	e9 ea f1 ff ff       	jmp    23c0 <memset@plt>
    31d6:	e8 e5 f2 ff ff       	call   24c0 <__stack_chk_fail@plt>
    31db:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000031e0 <audio_io_handler>:
    31e0:	f3 0f 1e fa          	endbr64 
    31e4:	c3                   	ret    
    31e5:	66 66 2e 0f 1f 84 00 	data16 cs nopw 0x0(%rax,%rax,1)
    31ec:	00 00 00 00 

00000000000031f0 <init_audio>:
    31f0:	f3 0f 1e fa          	endbr64 
    31f4:	48 83 ec 08          	sub    $0x8,%rsp
    31f8:	bf 18 00 00 00       	mov    $0x18,%edi
    31fd:	e8 ce 48 00 00       	call   7ad0 <new_space>
    3202:	b9 18 00 00 00       	mov    $0x18,%ecx
    3207:	4c 8d 05 d2 ff ff ff 	lea    -0x2e(%rip),%r8        # 31e0 <audio_io_handler>
    320e:	be 00 02 00 a0       	mov    $0xa0000200,%esi
    3213:	48 89 c2             	mov    %rax,%rdx
    3216:	48 8d 3d 34 61 00 00 	lea    0x6134(%rip),%rdi        # 9351 <__PRETTY_FUNCTION__.1+0x169>
    321d:	e8 de 4d 00 00       	call   8000 <add_mmio_map>
    3222:	bf 00 00 01 00       	mov    $0x10000,%edi
    3227:	e8 a4 48 00 00       	call   7ad0 <new_space>
    322c:	45 31 c0             	xor    %r8d,%r8d
    322f:	48 83 c4 08          	add    $0x8,%rsp
    3233:	b9 00 00 01 00       	mov    $0x10000,%ecx
    3238:	48 89 c2             	mov    %rax,%rdx
    323b:	be 00 00 20 a1       	mov    $0xa1200000,%esi
    3240:	48 8d 3d 10 61 00 00 	lea    0x6110(%rip),%rdi        # 9357 <__PRETTY_FUNCTION__.1+0x16f>
    3247:	e9 b4 4d 00 00       	jmp    8000 <add_mmio_map>
    324c:	0f 1f 40 00          	nopl   0x0(%rax)

0000000000003250 <init_disk>:
    3250:	f3 0f 1e fa          	endbr64 
    3254:	c3                   	ret    
    3255:	66 2e 0f 1f 84 00 00 	cs nopw 0x0(%rax,%rax,1)
    325c:	00 00 00 
    325f:	90                   	nop

0000000000003260 <decode_operand.constprop.0.isra.0>:
    3260:	89 f8                	mov    %edi,%eax
    3262:	49 89 ca             	mov    %rcx,%r10
    3265:	53                   	push   %rbx
    3266:	48 89 d7             	mov    %rdx,%rdi
    3269:	41 89 c3             	mov    %eax,%r11d
    326c:	8b 54 24 18          	mov    0x18(%rsp),%edx
    3270:	41 c1 eb 05          	shr    $0x5,%r11d
    3274:	44 89 d9             	mov    %r11d,%ecx
    3277:	83 e1 1f             	and    $0x1f,%ecx
    327a:	89 0e                	mov    %ecx,(%rsi)
    327c:	89 c1                	mov    %eax,%ecx
    327e:	c1 e9 0a             	shr    $0xa,%ecx
    3281:	89 cb                	mov    %ecx,%ebx
    3283:	83 e3 1f             	and    $0x1f,%ebx
    3286:	89 1f                	mov    %ebx,(%rdi)
    3288:	89 c3                	mov    %eax,%ebx
    328a:	83 e3 1f             	and    $0x1f,%ebx
    328d:	41 89 1a             	mov    %ebx,(%r10)
    3290:	83 fa 06             	cmp    $0x6,%edx
    3293:	77 39                	ja     32ce <decode_operand.constprop.0.isra.0+0x6e>
    3295:	4c 8d 15 c8 60 00 00 	lea    0x60c8(%rip),%r10        # 9364 <__PRETTY_FUNCTION__.1+0x17c>
    329c:	49 63 14 92          	movslq (%r10,%rdx,4),%rdx
    32a0:	4c 01 d2             	add    %r10,%rdx
    32a3:	3e ff e2             	notrack jmp *%rdx
    32a6:	66 2e 0f 1f 84 00 00 	cs nopw 0x0(%rax,%rax,1)
    32ad:	00 00 00 
    32b0:	48 0f bf c9          	movswq %cx,%rcx
    32b4:	c1 e1 02             	shl    $0x2,%ecx
    32b7:	48 8b 44 24 10       	mov    0x10(%rsp),%rax
    32bc:	89 08                	mov    %ecx,(%rax)
    32be:	48 63 16             	movslq (%rsi),%rdx
    32c1:	48 8d 05 b8 d2 00 00 	lea    0xd2b8(%rip),%rax        # 10580 <cpu>
    32c8:	8b 04 90             	mov    (%rax,%rdx,4),%eax
    32cb:	41 89 00             	mov    %eax,(%r8)
    32ce:	5b                   	pop    %rbx
    32cf:	c3                   	ret    
    32d0:	48 63 16             	movslq (%rsi),%rdx
    32d3:	48 8d 05 a6 d2 00 00 	lea    0xd2a6(%rip),%rax        # 10580 <cpu>
    32da:	5b                   	pop    %rbx
    32db:	8b 04 90             	mov    (%rax,%rdx,4),%eax
    32de:	41 89 00             	mov    %eax,(%r8)
    32e1:	8b 07                	mov    (%rdi),%eax
    32e3:	41 89 01             	mov    %eax,(%r9)
    32e6:	c3                   	ret    
    32e7:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
    32ee:	00 00 
    32f0:	c1 e1 04             	shl    $0x4,%ecx
    32f3:	66 c1 f9 04          	sar    $0x4,%cx
    32f7:	48 0f bf c9          	movswq %cx,%rcx
    32fb:	eb ba                	jmp    32b7 <decode_operand.constprop.0.isra.0+0x57>
    32fd:	0f 1f 00             	nopl   (%rax)
    3300:	81 e1 ff 0f 00 00    	and    $0xfff,%ecx
    3306:	eb af                	jmp    32b7 <decode_operand.constprop.0.isra.0+0x57>
    3308:	0f 1f 84 00 00 00 00 	nopl   0x0(%rax,%rax,1)
    330f:	00 
    3310:	48 8b 44 24 10       	mov    0x10(%rsp),%rax
    3315:	41 c1 e3 0c          	shl    $0xc,%r11d
    3319:	44 89 18             	mov    %r11d,(%rax)
    331c:	48 63 16             	movslq (%rsi),%rdx
    331f:	48 8d 05 5a d2 00 00 	lea    0xd25a(%rip),%rax        # 10580 <cpu>
    3326:	5b                   	pop    %rbx
    3327:	8b 04 90             	mov    (%rax,%rdx,4),%eax
    332a:	41 89 00             	mov    %eax,(%r8)
    332d:	c3                   	ret    
    332e:	66 90                	xchg   %ax,%ax
    3330:	48 63 16             	movslq (%rsi),%rdx
    3333:	48 8d 05 46 d2 00 00 	lea    0xd246(%rip),%rax        # 10580 <cpu>
    333a:	5b                   	pop    %rbx
    333b:	8b 14 90             	mov    (%rax,%rdx,4),%edx
    333e:	41 89 10             	mov    %edx,(%r8)
    3341:	48 63 17             	movslq (%rdi),%rdx
    3344:	8b 04 90             	mov    (%rax,%rdx,4),%eax
    3347:	41 89 01             	mov    %eax,(%r9)
    334a:	c3                   	ret    
    334b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
    3350:	c1 e1 02             	shl    $0x2,%ecx
    3353:	c1 e0 12             	shl    $0x12,%eax
    3356:	48 8b 7c 24 10       	mov    0x10(%rsp),%rdi
    335b:	81 e1 fc ff 03 00    	and    $0x3fffc,%ecx
    3361:	09 c8                	or     %ecx,%eax
    3363:	c1 e0 04             	shl    $0x4,%eax
    3366:	c1 f8 04             	sar    $0x4,%eax
    3369:	89 07                	mov    %eax,(%rdi)
    336b:	5b                   	pop    %rbx
    336c:	c3                   	ret    
    336d:	0f 1f 00             	nopl   (%rax)

0000000000003370 <decode_exec>:
    3370:	55                   	push   %rbp
    3371:	53                   	push   %rbx
    3372:	48 89 fb             	mov    %rdi,%rbx
    3375:	48 83 ec 28          	sub    $0x28,%rsp
    3379:	8b 57 0c             	mov    0xc(%rdi),%edx
    337c:	8b 4f 04             	mov    0x4(%rdi),%ecx
    337f:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    3386:	00 00 
    3388:	48 89 44 24 18       	mov    %rax,0x18(%rsp)
    338d:	31 c0                	xor    %eax,%eax
    338f:	8b 2f                	mov    (%rdi),%ebp
    3391:	c7 04 24 00 00 00 00 	movl   $0x0,(%rsp)
    3398:	48 89 d0             	mov    %rdx,%rax
    339b:	89 4f 08             	mov    %ecx,0x8(%rdi)
    339e:	48 89 d7             	mov    %rdx,%rdi
    33a1:	48 c1 e8 1a          	shr    $0x1a,%rax
    33a5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%rsp)
    33ac:	00 
    33ad:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%rsp)
    33b4:	00 
    33b5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%rsp)
    33bc:	00 
    33bd:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%rsp)
    33c4:	00 
    33c5:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%rsp)
    33cc:	00 
    33cd:	48 83 f8 14          	cmp    $0x14,%rax
    33d1:	0f 84 99 02 00 00    	je     3670 <decode_exec+0x300>
    33d7:	48 83 f8 15          	cmp    $0x15,%rax
    33db:	0f 84 3f 02 00 00    	je     3620 <decode_exec+0x2b0>
    33e1:	48 81 fa 20 00 00 4c 	cmp    $0x4c000020,%rdx
    33e8:	0f 84 02 03 00 00    	je     36f0 <decode_exec+0x380>
    33ee:	48 83 f8 13          	cmp    $0x13,%rax
    33f2:	0f 84 08 03 00 00    	je     3700 <decode_exec+0x390>
    33f8:	48 83 f8 16          	cmp    $0x16,%rax
    33fc:	0f 84 8e 02 00 00    	je     3690 <decode_exec+0x320>
    3402:	48 83 f8 17          	cmp    $0x17,%rax
    3406:	0f 84 b4 02 00 00    	je     36c0 <decode_exec+0x350>
    340c:	48 83 f8 18          	cmp    $0x18,%rax
    3410:	0f 84 42 03 00 00    	je     3758 <decode_exec+0x3e8>
    3416:	48 83 f8 19          	cmp    $0x19,%rax
    341a:	0f 84 10 03 00 00    	je     3730 <decode_exec+0x3c0>
    3420:	48 83 f8 1a          	cmp    $0x1a,%rax
    3424:	0f 84 56 03 00 00    	je     3780 <decode_exec+0x410>
    342a:	48 83 f8 1b          	cmp    $0x1b,%rax
    342e:	0f 84 74 03 00 00    	je     37a8 <decode_exec+0x438>
    3434:	48 89 d0             	mov    %rdx,%rax
    3437:	48 c1 e8 19          	shr    $0x19,%rax
    343b:	48 83 f8 0a          	cmp    $0xa,%rax
    343f:	0f 84 8b 03 00 00    	je     37d0 <decode_exec+0x460>
    3445:	48 83 f8 0e          	cmp    $0xe,%rax
    3449:	0f 84 9c 03 00 00    	je     37eb <decode_exec+0x47b>
    344f:	48 89 d0             	mov    %rdx,%rax
    3452:	48 c1 e8 16          	shr    $0x16,%rax
    3456:	48 83 f8 08          	cmp    $0x8,%rax
    345a:	0f 84 ab 03 00 00    	je     380b <decode_exec+0x49b>
    3460:	48 83 f8 09          	cmp    $0x9,%rax
    3464:	0f 84 d4 03 00 00    	je     383e <decode_exec+0x4ce>
    346a:	48 83 f8 0a          	cmp    $0xa,%rax
    346e:	0f 84 ff 03 00 00    	je     3873 <decode_exec+0x503>
    3474:	48 83 f8 0d          	cmp    $0xd,%rax
    3478:	0f 84 22 04 00 00    	je     38a0 <decode_exec+0x530>
    347e:	48 83 f8 0e          	cmp    $0xe,%rax
    3482:	0f 84 5b 04 00 00    	je     38e3 <decode_exec+0x573>
    3488:	48 83 f8 0f          	cmp    $0xf,%rax
    348c:	0f 84 94 04 00 00    	je     3926 <decode_exec+0x5b6>
    3492:	48 3d a0 00 00 00    	cmp    $0xa0,%rax
    3498:	0f 84 1f 05 00 00    	je     39bd <decode_exec+0x64d>
    349e:	48 3d a1 00 00 00    	cmp    $0xa1,%rax
    34a4:	0f 84 c4 04 00 00    	je     396e <decode_exec+0x5fe>
    34aa:	48 3d a2 00 00 00    	cmp    $0xa2,%rax
    34b0:	0f 84 a3 05 00 00    	je     3a59 <decode_exec+0x6e9>
    34b6:	48 3d a4 00 00 00    	cmp    $0xa4,%rax
    34bc:	0f 84 4b 05 00 00    	je     3a0d <decode_exec+0x69d>
    34c2:	48 3d a5 00 00 00    	cmp    $0xa5,%rax
    34c8:	0f 84 45 06 00 00    	je     3b13 <decode_exec+0x7a3>
    34ce:	48 3d a6 00 00 00    	cmp    $0xa6,%rax
    34d4:	0f 84 ed 05 00 00    	je     3ac7 <decode_exec+0x757>
    34da:	48 3d a8 00 00 00    	cmp    $0xa8,%rax
    34e0:	0f 84 f1 0b 00 00    	je     40d7 <decode_exec+0xd67>
    34e6:	48 3d a9 00 00 00    	cmp    $0xa9,%rax
    34ec:	0f 84 94 0b 00 00    	je     4086 <decode_exec+0xd16>
    34f2:	48 c1 ea 0f          	shr    $0xf,%rdx
    34f6:	48 83 fa 20          	cmp    $0x20,%rdx
    34fa:	0f 84 43 0b 00 00    	je     4043 <decode_exec+0xcd3>
    3500:	48 83 fa 22          	cmp    $0x22,%rdx
    3504:	0f 84 f6 0a 00 00    	je     4000 <decode_exec+0xc90>
    350a:	48 83 fa 24          	cmp    $0x24,%rdx
    350e:	0f 84 a4 0a 00 00    	je     3fb8 <decode_exec+0xc48>
    3514:	48 83 fa 25          	cmp    $0x25,%rdx
    3518:	0f 84 52 0a 00 00    	je     3f70 <decode_exec+0xc00>
    351e:	48 83 fa 28          	cmp    $0x28,%rdx
    3522:	0f 84 03 0a 00 00    	je     3f2b <decode_exec+0xbbb>
    3528:	48 83 fa 29          	cmp    $0x29,%rdx
    352c:	0f 84 b6 09 00 00    	je     3ee8 <decode_exec+0xb78>
    3532:	48 83 fa 2a          	cmp    $0x2a,%rdx
    3536:	0f 84 69 09 00 00    	je     3ea5 <decode_exec+0xb35>
    353c:	48 83 fa 2b          	cmp    $0x2b,%rdx
    3540:	0f 84 1c 09 00 00    	je     3e62 <decode_exec+0xaf2>
    3546:	48 83 fa 2e          	cmp    $0x2e,%rdx
    354a:	0f 84 fe 08 00 00    	je     3e4e <decode_exec+0xade>
    3550:	48 83 fa 2f          	cmp    $0x2f,%rdx
    3554:	0f 84 e0 08 00 00    	je     3e3a <decode_exec+0xaca>
    355a:	48 83 fa 30          	cmp    $0x30,%rdx
    355e:	0f 84 c2 08 00 00    	je     3e26 <decode_exec+0xab6>
    3564:	48 83 fa 38          	cmp    $0x38,%rdx
    3568:	0f 84 74 08 00 00    	je     3de2 <decode_exec+0xa72>
    356e:	48 83 fa 39          	cmp    $0x39,%rdx
    3572:	0f 84 1d 08 00 00    	je     3d95 <decode_exec+0xa25>
    3578:	48 83 fa 3a          	cmp    $0x3a,%rdx
    357c:	0f 84 c8 07 00 00    	je     3d4a <decode_exec+0x9da>
    3582:	48 83 fa 40          	cmp    $0x40,%rdx
    3586:	0f 84 7a 07 00 00    	je     3d06 <decode_exec+0x996>
    358c:	48 83 fa 41          	cmp    $0x41,%rdx
    3590:	0f 84 2c 07 00 00    	je     3cc2 <decode_exec+0x952>
    3596:	48 83 fa 42          	cmp    $0x42,%rdx
    359a:	0f 84 dd 06 00 00    	je     3c7d <decode_exec+0x90d>
    35a0:	48 83 fa 43          	cmp    $0x43,%rdx
    35a4:	0f 84 8e 06 00 00    	je     3c38 <decode_exec+0x8c8>
    35aa:	48 81 fa 81 00 00 00 	cmp    $0x81,%rdx
    35b1:	0f 84 3c 06 00 00    	je     3bf3 <decode_exec+0x883>
    35b7:	48 81 fa 89 00 00 00 	cmp    $0x89,%rdx
    35be:	0f 84 eb 05 00 00    	je     3baf <decode_exec+0x83f>
    35c4:	48 81 fa 91 00 00 00 	cmp    $0x91,%rdx
    35cb:	0f 84 9a 05 00 00    	je     3b6b <decode_exec+0x7fb>
    35d1:	48 83 fa 54          	cmp    $0x54,%rdx
    35d5:	0f 85 84 05 00 00    	jne    3b5f <decode_exec+0x7ef>
    35db:	89 f8                	mov    %edi,%eax
    35dd:	c1 e8 05             	shr    $0x5,%eax
    35e0:	83 e0 1f             	and    $0x1f,%eax
    35e3:	89 04 24             	mov    %eax,(%rsp)
    35e6:	89 f8                	mov    %edi,%eax
    35e8:	83 e7 1f             	and    $0x1f,%edi
    35eb:	c1 e8 0a             	shr    $0xa,%eax
    35ee:	89 7c 24 08          	mov    %edi,0x8(%rsp)
    35f2:	89 ef                	mov    %ebp,%edi
    35f4:	83 e0 1f             	and    $0x1f,%eax
    35f7:	89 44 24 04          	mov    %eax,0x4(%rsp)
    35fb:	e8 e0 27 00 00       	call   5de0 <scan_bp>
    3600:	83 e8 01             	sub    $0x1,%eax
    3603:	0f 84 a1 04 00 00    	je     3aaa <decode_exec+0x73a>
    3609:	8b 15 81 cf 00 00    	mov    0xcf81(%rip),%edx        # 10590 <cpu+0x10>
    360f:	8b 33                	mov    (%rbx),%esi
    3611:	bf 02 00 00 00       	mov    $0x2,%edi
    3616:	e8 c5 4f 00 00       	call   85e0 <set_nemu_state>
    361b:	89 6b 08             	mov    %ebp,0x8(%rbx)
    361e:	eb 21                	jmp    3641 <decode_exec+0x2d1>
    3620:	c1 ea 08             	shr    $0x8,%edx
    3623:	89 f8                	mov    %edi,%eax
    3625:	89 0d 59 cf 00 00    	mov    %ecx,0xcf59(%rip)        # 10584 <cpu+0x4>
    362b:	81 e2 fc ff 03 00    	and    $0x3fffc,%edx
    3631:	c1 e0 12             	shl    $0x12,%eax
    3634:	09 d0                	or     %edx,%eax
    3636:	c1 e0 04             	shl    $0x4,%eax
    3639:	c1 f8 04             	sar    $0x4,%eax
    363c:	01 e8                	add    %ebp,%eax
    363e:	89 43 08             	mov    %eax,0x8(%rbx)
    3641:	f3 0f 1e fa          	endbr64 
    3645:	c7 05 31 cf 00 00 00 	movl   $0x0,0xcf31(%rip)        # 10580 <cpu>
    364c:	00 00 00 
    364f:	48 8b 44 24 18       	mov    0x18(%rsp),%rax
    3654:	64 48 2b 04 25 28 00 	sub    %fs:0x28,%rax
    365b:	00 00 
    365d:	0f 85 06 03 00 00    	jne    3969 <decode_exec+0x5f9>
    3663:	48 83 c4 28          	add    $0x28,%rsp
    3667:	31 c0                	xor    %eax,%eax
    3669:	5b                   	pop    %rbx
    366a:	5d                   	pop    %rbp
    366b:	c3                   	ret    
    366c:	0f 1f 40 00          	nopl   0x0(%rax)
    3670:	c1 ea 08             	shr    $0x8,%edx
    3673:	89 f8                	mov    %edi,%eax
    3675:	81 e2 fc ff 03 00    	and    $0x3fffc,%edx
    367b:	c1 e0 12             	shl    $0x12,%eax
    367e:	09 d0                	or     %edx,%eax
    3680:	c1 e0 04             	shl    $0x4,%eax
    3683:	c1 f8 04             	sar    $0x4,%eax
    3686:	01 e8                	add    %ebp,%eax
    3688:	89 43 08             	mov    %eax,0x8(%rbx)
    368b:	eb b4                	jmp    3641 <decode_exec+0x2d1>
    368d:	0f 1f 00             	nopl   (%rax)
    3690:	89 d6                	mov    %edx,%esi
    3692:	c1 ea 05             	shr    $0x5,%edx
    3695:	48 8d 0d e4 ce 00 00 	lea    0xcee4(%rip),%rcx        # 10580 <cpu>
    369c:	b8 04 00 00 00       	mov    $0x4,%eax
    36a1:	83 e2 1f             	and    $0x1f,%edx
    36a4:	83 e6 1f             	and    $0x1f,%esi
    36a7:	8b 14 91             	mov    (%rcx,%rdx,4),%edx
    36aa:	39 14 b1             	cmp    %edx,(%rcx,%rsi,4)
    36ad:	74 30                	je     36df <decode_exec+0x36f>
    36af:	01 e8                	add    %ebp,%eax
    36b1:	89 43 08             	mov    %eax,0x8(%rbx)
    36b4:	eb 8b                	jmp    3641 <decode_exec+0x2d1>
    36b6:	66 2e 0f 1f 84 00 00 	cs nopw 0x0(%rax,%rax,1)
    36bd:	00 00 00 
    36c0:	89 d6                	mov    %edx,%esi
    36c2:	c1 ea 05             	shr    $0x5,%edx
    36c5:	48 8d 0d b4 ce 00 00 	lea    0xceb4(%rip),%rcx        # 10580 <cpu>
    36cc:	b8 04 00 00 00       	mov    $0x4,%eax
    36d1:	83 e2 1f             	and    $0x1f,%edx
    36d4:	83 e6 1f             	and    $0x1f,%esi
    36d7:	8b 14 91             	mov    (%rcx,%rdx,4),%edx
    36da:	39 14 b1             	cmp    %edx,(%rcx,%rsi,4)
    36dd:	74 d0                	je     36af <decode_exec+0x33f>
    36df:	89 f8                	mov    %edi,%eax
    36e1:	c1 e8 0a             	shr    $0xa,%eax
    36e4:	48 0f bf c0          	movswq %ax,%rax
    36e8:	c1 e0 02             	shl    $0x2,%eax
    36eb:	eb c2                	jmp    36af <decode_exec+0x33f>
    36ed:	0f 1f 00             	nopl   (%rax)
    36f0:	8b 05 8e ce 00 00    	mov    0xce8e(%rip),%eax        # 10584 <cpu+0x4>
    36f6:	89 43 08             	mov    %eax,0x8(%rbx)
    36f9:	e9 43 ff ff ff       	jmp    3641 <decode_exec+0x2d1>
    36fe:	66 90                	xchg   %ax,%ax
    3700:	c1 ea 05             	shr    $0x5,%edx
    3703:	48 8d 35 76 ce 00 00 	lea    0xce76(%rip),%rsi        # 10580 <cpu>
    370a:	89 f8                	mov    %edi,%eax
    370c:	83 e7 1f             	and    $0x1f,%edi
    370f:	83 e2 1f             	and    $0x1f,%edx
    3712:	c1 e8 0a             	shr    $0xa,%eax
    3715:	8b 14 96             	mov    (%rsi,%rdx,4),%edx
    3718:	48 0f bf c0          	movswq %ax,%rax
    371c:	8d 04 82             	lea    (%rdx,%rax,4),%eax
    371f:	89 43 08             	mov    %eax,0x8(%rbx)
    3722:	89 0c be             	mov    %ecx,(%rsi,%rdi,4)
    3725:	e9 17 ff ff ff       	jmp    3641 <decode_exec+0x2d1>
    372a:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
    3730:	89 d6                	mov    %edx,%esi
    3732:	c1 ea 05             	shr    $0x5,%edx
    3735:	48 8d 0d 44 ce 00 00 	lea    0xce44(%rip),%rcx        # 10580 <cpu>
    373c:	b8 04 00 00 00       	mov    $0x4,%eax
    3741:	83 e2 1f             	and    $0x1f,%edx
    3744:	83 e6 1f             	and    $0x1f,%esi
    3747:	8b 14 91             	mov    (%rcx,%rdx,4),%edx
    374a:	39 14 b1             	cmp    %edx,(%rcx,%rsi,4)
    374d:	0f 8f 5c ff ff ff    	jg     36af <decode_exec+0x33f>
    3753:	eb 8a                	jmp    36df <decode_exec+0x36f>
    3755:	0f 1f 00             	nopl   (%rax)
    3758:	89 d6                	mov    %edx,%esi
    375a:	c1 ea 05             	shr    $0x5,%edx
    375d:	48 8d 0d 1c ce 00 00 	lea    0xce1c(%rip),%rcx        # 10580 <cpu>
    3764:	b8 04 00 00 00       	mov    $0x4,%eax
    3769:	83 e2 1f             	and    $0x1f,%edx
    376c:	83 e6 1f             	and    $0x1f,%esi
    376f:	8b 14 91             	mov    (%rcx,%rdx,4),%edx
    3772:	39 14 b1             	cmp    %edx,(%rcx,%rsi,4)
    3775:	0f 8e 34 ff ff ff    	jle    36af <decode_exec+0x33f>
    377b:	e9 5f ff ff ff       	jmp    36df <decode_exec+0x36f>
    3780:	89 d6                	mov    %edx,%esi
    3782:	c1 ea 05             	shr    $0x5,%edx
    3785:	48 8d 0d f4 cd 00 00 	lea    0xcdf4(%rip),%rcx        # 10580 <cpu>
    378c:	b8 04 00 00 00       	mov    $0x4,%eax
    3791:	83 e2 1f             	and    $0x1f,%edx
    3794:	83 e6 1f             	and    $0x1f,%esi
    3797:	8b 14 91             	mov    (%rcx,%rdx,4),%edx
    379a:	39 14 b1             	cmp    %edx,(%rcx,%rsi,4)
    379d:	0f 86 0c ff ff ff    	jbe    36af <decode_exec+0x33f>
    37a3:	e9 37 ff ff ff       	jmp    36df <decode_exec+0x36f>
    37a8:	89 d6                	mov    %edx,%esi
    37aa:	c1 ea 05             	shr    $0x5,%edx
    37ad:	48 8d 0d cc cd 00 00 	lea    0xcdcc(%rip),%rcx        # 10580 <cpu>
    37b4:	b8 04 00 00 00       	mov    $0x4,%eax
    37b9:	83 e2 1f             	and    $0x1f,%edx
    37bc:	83 e6 1f             	and    $0x1f,%esi
    37bf:	8b 14 91             	mov    (%rcx,%rdx,4),%edx
    37c2:	39 14 b1             	cmp    %edx,(%rcx,%rsi,4)
    37c5:	0f 87 e4 fe ff ff    	ja     36af <decode_exec+0x33f>
    37cb:	e9 0f ff ff ff       	jmp    36df <decode_exec+0x36f>
    37d0:	c1 e7 07             	shl    $0x7,%edi
    37d3:	83 e2 1f             	and    $0x1f,%edx
    37d6:	48 8d 05 a3 cd 00 00 	lea    0xcda3(%rip),%rax        # 10580 <cpu>
    37dd:	81 e7 00 f0 ff ff    	and    $0xfffff000,%edi
    37e3:	89 3c 90             	mov    %edi,(%rax,%rdx,4)
    37e6:	e9 56 fe ff ff       	jmp    3641 <decode_exec+0x2d1>
    37eb:	c1 e7 07             	shl    $0x7,%edi
    37ee:	89 d1                	mov    %edx,%ecx
    37f0:	48 8d 15 89 cd 00 00 	lea    0xcd89(%rip),%rdx        # 10580 <cpu>
    37f7:	81 e7 00 f0 ff ff    	and    $0xfffff000,%edi
    37fd:	83 e1 1f             	and    $0x1f,%ecx
    3800:	8d 04 2f             	lea    (%rdi,%rbp,1),%eax
    3803:	89 04 8a             	mov    %eax,(%rdx,%rcx,4)
    3806:	e9 36 fe ff ff       	jmp    3641 <decode_exec+0x2d1>
    380b:	89 f8                	mov    %edi,%eax
    380d:	89 d6                	mov    %edx,%esi
    380f:	c1 ea 05             	shr    $0x5,%edx
    3812:	48 8d 0d 67 cd 00 00 	lea    0xcd67(%rip),%rcx        # 10580 <cpu>
    3819:	c1 e8 0a             	shr    $0xa,%eax
    381c:	83 e2 1f             	and    $0x1f,%edx
    381f:	83 e6 1f             	and    $0x1f,%esi
    3822:	c1 e0 04             	shl    $0x4,%eax
    3825:	66 c1 f8 04          	sar    $0x4,%ax
    3829:	48 0f bf c0          	movswq %ax,%rax
    382d:	39 04 91             	cmp    %eax,(%rcx,%rdx,4)
    3830:	0f 9c c0             	setl   %al
    3833:	0f b6 c0             	movzbl %al,%eax
    3836:	89 04 b1             	mov    %eax,(%rcx,%rsi,4)
    3839:	e9 03 fe ff ff       	jmp    3641 <decode_exec+0x2d1>
    383e:	89 d0                	mov    %edx,%eax
    3840:	c1 ef 05             	shr    $0x5,%edi
    3843:	89 d6                	mov    %edx,%esi
    3845:	48 8d 0d 34 cd 00 00 	lea    0xcd34(%rip),%rcx        # 10580 <cpu>
    384c:	c1 e8 0a             	shr    $0xa,%eax
    384f:	89 fa                	mov    %edi,%edx
    3851:	83 e6 1f             	and    $0x1f,%esi
    3854:	c1 e0 04             	shl    $0x4,%eax
    3857:	83 e2 1f             	and    $0x1f,%edx
    385a:	66 c1 f8 04          	sar    $0x4,%ax
    385e:	48 0f bf c0          	movswq %ax,%rax
    3862:	39 04 91             	cmp    %eax,(%rcx,%rdx,4)
    3865:	0f 92 c0             	setb   %al
    3868:	0f b6 c0             	movzbl %al,%eax
    386b:	89 04 b1             	mov    %eax,(%rcx,%rsi,4)
    386e:	e9 ce fd ff ff       	jmp    3641 <decode_exec+0x2d1>
    3873:	89 f8                	mov    %edi,%eax
    3875:	89 d6                	mov    %edx,%esi
    3877:	c1 ea 05             	shr    $0x5,%edx
    387a:	48 8d 0d ff cc 00 00 	lea    0xccff(%rip),%rcx        # 10580 <cpu>
    3881:	c1 e8 0a             	shr    $0xa,%eax
    3884:	83 e2 1f             	and    $0x1f,%edx
    3887:	83 e6 1f             	and    $0x1f,%esi
    388a:	c1 e0 04             	shl    $0x4,%eax
    388d:	66 c1 f8 04          	sar    $0x4,%ax
    3891:	48 0f bf c0          	movswq %ax,%rax
    3895:	03 04 91             	add    (%rcx,%rdx,4),%eax
    3898:	89 04 b1             	mov    %eax,(%rcx,%rsi,4)
    389b:	e9 a1 fd ff ff       	jmp    3641 <decode_exec+0x2d1>
    38a0:	48 8d 4c 24 08       	lea    0x8(%rsp),%rcx
    38a5:	48 8d 54 24 04       	lea    0x4(%rsp),%rdx
    38aa:	48 89 e6             	mov    %rsp,%rsi
    38ad:	6a 01                	push   $0x1
    38af:	48 8d 44 24 1c       	lea    0x1c(%rsp),%rax
    38b4:	50                   	push   %rax
    38b5:	4c 8d 4c 24 20       	lea    0x20(%rsp),%r9
    38ba:	4c 8d 44 24 1c       	lea    0x1c(%rsp),%r8
    38bf:	e8 9c f9 ff ff       	call   3260 <decode_operand.constprop.0.isra.0>
    38c4:	48 63 4c 24 18       	movslq 0x18(%rsp),%rcx
    38c9:	8b 44 24 24          	mov    0x24(%rsp),%eax
    38cd:	48 8d 15 ac cc 00 00 	lea    0xccac(%rip),%rdx        # 10580 <cpu>
    38d4:	23 44 24 1c          	and    0x1c(%rsp),%eax
    38d8:	48 89 f4             	mov    %rsi,%rsp
    38db:	89 04 8a             	mov    %eax,(%rdx,%rcx,4)
    38de:	e9 5e fd ff ff       	jmp    3641 <decode_exec+0x2d1>
    38e3:	48 8d 4c 24 08       	lea    0x8(%rsp),%rcx
    38e8:	48 8d 54 24 04       	lea    0x4(%rsp),%rdx
    38ed:	48 89 e6             	mov    %rsp,%rsi
    38f0:	6a 01                	push   $0x1
    38f2:	48 8d 44 24 1c       	lea    0x1c(%rsp),%rax
    38f7:	50                   	push   %rax
    38f8:	4c 8d 4c 24 20       	lea    0x20(%rsp),%r9
    38fd:	4c 8d 44 24 1c       	lea    0x1c(%rsp),%r8
    3902:	e8 59 f9 ff ff       	call   3260 <decode_operand.constprop.0.isra.0>
    3907:	48 63 4c 24 18       	movslq 0x18(%rsp),%rcx
    390c:	8b 44 24 24          	mov    0x24(%rsp),%eax
    3910:	48 8d 15 69 cc 00 00 	lea    0xcc69(%rip),%rdx        # 10580 <cpu>
    3917:	0b 44 24 1c          	or     0x1c(%rsp),%eax
    391b:	48 89 f4             	mov    %rsi,%rsp
    391e:	89 04 8a             	mov    %eax,(%rdx,%rcx,4)
    3921:	e9 1b fd ff ff       	jmp    3641 <decode_exec+0x2d1>
    3926:	48 8d 4c 24 08       	lea    0x8(%rsp),%rcx
    392b:	48 8d 54 24 04       	lea    0x4(%rsp),%rdx
    3930:	48 89 e6             	mov    %rsp,%rsi
    3933:	6a 01                	push   $0x1
    3935:	48 8d 44 24 1c       	lea    0x1c(%rsp),%rax
    393a:	50                   	push   %rax
    393b:	4c 8d 4c 24 20       	lea    0x20(%rsp),%r9
    3940:	4c 8d 44 24 1c       	lea    0x1c(%rsp),%r8
    3945:	e8 16 f9 ff ff       	call   3260 <decode_operand.constprop.0.isra.0>
    394a:	48 63 4c 24 18       	movslq 0x18(%rsp),%rcx
    394f:	8b 44 24 24          	mov    0x24(%rsp),%eax
    3953:	48 8d 15 26 cc 00 00 	lea    0xcc26(%rip),%rdx        # 10580 <cpu>
    395a:	33 44 24 1c          	xor    0x1c(%rsp),%eax
    395e:	48 89 f4             	mov    %rsi,%rsp
    3961:	89 04 8a             	mov    %eax,(%rdx,%rcx,4)
    3964:	e9 d8 fc ff ff       	jmp    3641 <decode_exec+0x2d1>
    3969:	e8 52 eb ff ff       	call   24c0 <__stack_chk_fail@plt>
    396e:	48 8d 4c 24 08       	lea    0x8(%rsp),%rcx
    3973:	48 8d 54 24 04       	lea    0x4(%rsp),%rdx
    3978:	48 89 e6             	mov    %rsp,%rsi
    397b:	6a 00                	push   $0x0
    397d:	48 8d 44 24 1c       	lea    0x1c(%rsp),%rax
    3982:	50                   	push   %rax
    3983:	4c 8d 4c 24 20       	lea    0x20(%rsp),%r9
    3988:	4c 8d 44 24 1c       	lea    0x1c(%rsp),%r8
    398d:	e8 ce f8 ff ff       	call   3260 <decode_operand.constprop.0.isra.0>
    3992:	8b 7c 24 24          	mov    0x24(%rsp),%edi
    3996:	be 02 00 00 00       	mov    $0x2,%esi
    399b:	03 7c 24 1c          	add    0x1c(%rsp),%edi
    399f:	e8 bc 3e 00 00       	call   7860 <vaddr_read>
    39a4:	48 63 4c 24 18       	movslq 0x18(%rsp),%rcx
    39a9:	48 8d 15 d0 cb 00 00 	lea    0xcbd0(%rip),%rdx        # 10580 <cpu>
    39b0:	98                   	cwtl   
    39b1:	89 04 8a             	mov    %eax,(%rdx,%rcx,4)
    39b4:	41 59                	pop    %r9
    39b6:	41 5a                	pop    %r10
    39b8:	e9 84 fc ff ff       	jmp    3641 <decode_exec+0x2d1>
    39bd:	48 8d 4c 24 08       	lea    0x8(%rsp),%rcx
    39c2:	48 8d 54 24 04       	lea    0x4(%rsp),%rdx
    39c7:	48 89 e6             	mov    %rsp,%rsi
    39ca:	6a 00                	push   $0x0
    39cc:	48 8d 44 24 1c       	lea    0x1c(%rsp),%rax
    39d1:	50                   	push   %rax
    39d2:	4c 8d 4c 24 20       	lea    0x20(%rsp),%r9
    39d7:	4c 8d 44 24 1c       	lea    0x1c(%rsp),%r8
    39dc:	e8 7f f8 ff ff       	call   3260 <decode_operand.constprop.0.isra.0>
    39e1:	8b 7c 24 24          	mov    0x24(%rsp),%edi
    39e5:	be 01 00 00 00       	mov    $0x1,%esi
    39ea:	03 7c 24 1c          	add    0x1c(%rsp),%edi
    39ee:	e8 6d 3e 00 00       	call   7860 <vaddr_read>
    39f3:	48 63 4c 24 18       	movslq 0x18(%rsp),%rcx
    39f8:	48 8d 15 81 cb 00 00 	lea    0xcb81(%rip),%rdx        # 10580 <cpu>
    39ff:	0f be c0             	movsbl %al,%eax
    3a02:	89 04 8a             	mov    %eax,(%rdx,%rcx,4)
    3a05:	41 5b                	pop    %r11
    3a07:	5b                   	pop    %rbx
    3a08:	e9 34 fc ff ff       	jmp    3641 <decode_exec+0x2d1>
    3a0d:	48 8d 4c 24 08       	lea    0x8(%rsp),%rcx
    3a12:	48 8d 54 24 04       	lea    0x4(%rsp),%rdx
    3a17:	48 89 e6             	mov    %rsp,%rsi
    3a1a:	6a 00                	push   $0x0
    3a1c:	48 8d 44 24 1c       	lea    0x1c(%rsp),%rax
    3a21:	50                   	push   %rax
    3a22:	4c 8d 4c 24 20       	lea    0x20(%rsp),%r9
    3a27:	4c 8d 44 24 1c       	lea    0x1c(%rsp),%r8
    3a2c:	e8 2f f8 ff ff       	call   3260 <decode_operand.constprop.0.isra.0>
    3a31:	48 63 54 24 18       	movslq 0x18(%rsp),%rdx
    3a36:	8b 7c 24 24          	mov    0x24(%rsp),%edi
    3a3a:	48 8d 05 3f cb 00 00 	lea    0xcb3f(%rip),%rax        # 10580 <cpu>
    3a41:	03 7c 24 1c          	add    0x1c(%rsp),%edi
    3a45:	be 01 00 00 00       	mov    $0x1,%esi
    3a4a:	8b 14 90             	mov    (%rax,%rdx,4),%edx
    3a4d:	e8 2e 3e 00 00       	call   7880 <vaddr_write>
    3a52:	59                   	pop    %rcx
    3a53:	5e                   	pop    %rsi
    3a54:	e9 e8 fb ff ff       	jmp    3641 <decode_exec+0x2d1>
    3a59:	48 8d 4c 24 08       	lea    0x8(%rsp),%rcx
    3a5e:	48 8d 54 24 04       	lea    0x4(%rsp),%rdx
    3a63:	48 89 e6             	mov    %rsp,%rsi
    3a66:	6a 00                	push   $0x0
    3a68:	48 8d 44 24 1c       	lea    0x1c(%rsp),%rax
    3a6d:	50                   	push   %rax
    3a6e:	4c 8d 44 24 1c       	lea    0x1c(%rsp),%r8
    3a73:	4c 8d 4c 24 20       	lea    0x20(%rsp),%r9
    3a78:	e8 e3 f7 ff ff       	call   3260 <decode_operand.constprop.0.isra.0>
    3a7d:	8b 7c 24 24          	mov    0x24(%rsp),%edi
    3a81:	be 04 00 00 00       	mov    $0x4,%esi
    3a86:	03 7c 24 1c          	add    0x1c(%rsp),%edi
    3a8a:	48 63 5c 24 18       	movslq 0x18(%rsp),%rbx
    3a8f:	e8 cc 3d 00 00       	call   7860 <vaddr_read>
    3a94:	41 89 c0             	mov    %eax,%r8d
    3a97:	48 8d 05 e2 ca 00 00 	lea    0xcae2(%rip),%rax        # 10580 <cpu>
    3a9e:	44 89 04 98          	mov    %r8d,(%rax,%rbx,4)
    3aa2:	5f                   	pop    %rdi
    3aa3:	41 58                	pop    %r8
    3aa5:	e9 97 fb ff ff       	jmp    3641 <decode_exec+0x2d1>
    3aaa:	8b 33                	mov    (%rbx),%esi
    3aac:	31 d2                	xor    %edx,%edx
    3aae:	bf 01 00 00 00       	mov    $0x1,%edi
    3ab3:	e8 28 4b 00 00       	call   85e0 <set_nemu_state>
    3ab8:	c7 05 5e ca 00 00 01 	movl   $0x1,0xca5e(%rip)        # 10520 <break_flag>
    3abf:	00 00 00 
    3ac2:	e9 54 fb ff ff       	jmp    361b <decode_exec+0x2ab>
    3ac7:	48 8d 4c 24 08       	lea    0x8(%rsp),%rcx
    3acc:	48 8d 54 24 04       	lea    0x4(%rsp),%rdx
    3ad1:	48 89 e6             	mov    %rsp,%rsi
    3ad4:	6a 00                	push   $0x0
    3ad6:	48 8d 44 24 1c       	lea    0x1c(%rsp),%rax
    3adb:	50                   	push   %rax
    3adc:	4c 8d 4c 24 20       	lea    0x20(%rsp),%r9
    3ae1:	4c 8d 44 24 1c       	lea    0x1c(%rsp),%r8
    3ae6:	e8 75 f7 ff ff       	call   3260 <decode_operand.constprop.0.isra.0>
    3aeb:	48 63 54 24 18       	movslq 0x18(%rsp),%rdx
    3af0:	8b 7c 24 24          	mov    0x24(%rsp),%edi
    3af4:	48 8d 05 85 ca 00 00 	lea    0xca85(%rip),%rax        # 10580 <cpu>
    3afb:	03 7c 24 1c          	add    0x1c(%rsp),%edi
    3aff:	be 04 00 00 00       	mov    $0x4,%esi
    3b04:	8b 14 90             	mov    (%rax,%rdx,4),%edx
    3b07:	e8 74 3d 00 00       	call   7880 <vaddr_write>
    3b0c:	5d                   	pop    %rbp
    3b0d:	58                   	pop    %rax
    3b0e:	e9 2e fb ff ff       	jmp    3641 <decode_exec+0x2d1>
    3b13:	48 8d 4c 24 08       	lea    0x8(%rsp),%rcx
    3b18:	48 8d 54 24 04       	lea    0x4(%rsp),%rdx
    3b1d:	48 89 e6             	mov    %rsp,%rsi
    3b20:	6a 00                	push   $0x0
    3b22:	48 8d 44 24 1c       	lea    0x1c(%rsp),%rax
    3b27:	50                   	push   %rax
    3b28:	4c 8d 4c 24 20       	lea    0x20(%rsp),%r9
    3b2d:	4c 8d 44 24 1c       	lea    0x1c(%rsp),%r8
    3b32:	e8 29 f7 ff ff       	call   3260 <decode_operand.constprop.0.isra.0>
    3b37:	48 63 54 24 18       	movslq 0x18(%rsp),%rdx
    3b3c:	8b 7c 24 24          	mov    0x24(%rsp),%edi
    3b40:	48 8d 05 39 ca 00 00 	lea    0xca39(%rip),%rax        # 10580 <cpu>
    3b47:	03 7c 24 1c          	add    0x1c(%rsp),%edi
    3b4b:	be 02 00 00 00       	mov    $0x2,%esi
    3b50:	8b 14 90             	mov    (%rax,%rdx,4),%edx
    3b53:	e8 28 3d 00 00       	call   7880 <vaddr_write>
    3b58:	58                   	pop    %rax
    3b59:	5a                   	pop    %rdx
    3b5a:	e9 e2 fa ff ff       	jmp    3641 <decode_exec+0x2d1>
    3b5f:	89 ef                	mov    %ebp,%edi
    3b61:	e8 9a 4a 00 00       	call   8600 <invalid_inst>
    3b66:	e9 d6 fa ff ff       	jmp    3641 <decode_exec+0x2d1>
    3b6b:	48 8d 4c 24 08       	lea    0x8(%rsp),%rcx
    3b70:	48 8d 54 24 04       	lea    0x4(%rsp),%rdx
    3b75:	48 89 e6             	mov    %rsp,%rsi
    3b78:	6a 06                	push   $0x6
    3b7a:	48 8d 44 24 1c       	lea    0x1c(%rsp),%rax
    3b7f:	50                   	push   %rax
    3b80:	4c 8d 4c 24 20       	lea    0x20(%rsp),%r9
    3b85:	4c 8d 44 24 1c       	lea    0x1c(%rsp),%r8
    3b8a:	e8 d1 f6 ff ff       	call   3260 <decode_operand.constprop.0.isra.0>
    3b8f:	8b 4c 24 20          	mov    0x20(%rsp),%ecx
    3b93:	8b 44 24 1c          	mov    0x1c(%rsp),%eax
    3b97:	48 8d 15 e2 c9 00 00 	lea    0xc9e2(%rip),%rdx        # 10580 <cpu>
    3b9e:	48 63 74 24 18       	movslq 0x18(%rsp),%rsi
    3ba3:	d3 f8                	sar    %cl,%eax
    3ba5:	89 04 b2             	mov    %eax,(%rdx,%rsi,4)
    3ba8:	58                   	pop    %rax
    3ba9:	5a                   	pop    %rdx
    3baa:	e9 92 fa ff ff       	jmp    3641 <decode_exec+0x2d1>
    3baf:	48 8d 4c 24 08       	lea    0x8(%rsp),%rcx
    3bb4:	48 8d 54 24 04       	lea    0x4(%rsp),%rdx
    3bb9:	48 89 e6             	mov    %rsp,%rsi
    3bbc:	6a 06                	push   $0x6
    3bbe:	48 8d 44 24 1c       	lea    0x1c(%rsp),%rax
    3bc3:	50                   	push   %rax
    3bc4:	4c 8d 4c 24 20       	lea    0x20(%rsp),%r9
    3bc9:	4c 8d 44 24 1c       	lea    0x1c(%rsp),%r8
    3bce:	e8 8d f6 ff ff       	call   3260 <decode_operand.constprop.0.isra.0>
    3bd3:	8b 4c 24 20          	mov    0x20(%rsp),%ecx
    3bd7:	8b 44 24 1c          	mov    0x1c(%rsp),%eax
    3bdb:	48 8d 15 9e c9 00 00 	lea    0xc99e(%rip),%rdx        # 10580 <cpu>
    3be2:	48 63 74 24 18       	movslq 0x18(%rsp),%rsi
    3be7:	d3 e8                	shr    %cl,%eax
    3be9:	89 04 b2             	mov    %eax,(%rdx,%rsi,4)
    3bec:	59                   	pop    %rcx
    3bed:	5e                   	pop    %rsi
    3bee:	e9 4e fa ff ff       	jmp    3641 <decode_exec+0x2d1>
    3bf3:	48 8d 4c 24 08       	lea    0x8(%rsp),%rcx
    3bf8:	48 8d 54 24 04       	lea    0x4(%rsp),%rdx
    3bfd:	48 89 e6             	mov    %rsp,%rsi
    3c00:	6a 06                	push   $0x6
    3c02:	48 8d 44 24 1c       	lea    0x1c(%rsp),%rax
    3c07:	50                   	push   %rax
    3c08:	4c 8d 4c 24 20       	lea    0x20(%rsp),%r9
    3c0d:	4c 8d 44 24 1c       	lea    0x1c(%rsp),%r8
    3c12:	e8 49 f6 ff ff       	call   3260 <decode_operand.constprop.0.isra.0>
    3c17:	8b 4c 24 20          	mov    0x20(%rsp),%ecx
    3c1b:	8b 44 24 1c          	mov    0x1c(%rsp),%eax
    3c1f:	48 8d 15 5a c9 00 00 	lea    0xc95a(%rip),%rdx        # 10580 <cpu>
    3c26:	48 63 74 24 18       	movslq 0x18(%rsp),%rsi
    3c2b:	d3 e0                	shl    %cl,%eax
    3c2d:	89 04 b2             	mov    %eax,(%rdx,%rsi,4)
    3c30:	5f                   	pop    %rdi
    3c31:	41 58                	pop    %r8
    3c33:	e9 09 fa ff ff       	jmp    3641 <decode_exec+0x2d1>
    3c38:	48 8d 4c 24 08       	lea    0x8(%rsp),%rcx
    3c3d:	48 8d 54 24 04       	lea    0x4(%rsp),%rdx
    3c42:	48 89 e6             	mov    %rsp,%rsi
    3c45:	6a 03                	push   $0x3
    3c47:	48 8d 44 24 1c       	lea    0x1c(%rsp),%rax
    3c4c:	50                   	push   %rax
    3c4d:	4c 8d 4c 24 20       	lea    0x20(%rsp),%r9
    3c52:	4c 8d 44 24 1c       	lea    0x1c(%rsp),%r8
    3c57:	e8 04 f6 ff ff       	call   3260 <decode_operand.constprop.0.isra.0>
    3c5c:	8b 44 24 1c          	mov    0x1c(%rsp),%eax
    3c60:	31 d2                	xor    %edx,%edx
    3c62:	48 63 4c 24 18       	movslq 0x18(%rsp),%rcx
    3c67:	f7 74 24 20          	divl   0x20(%rsp)
    3c6b:	48 8d 05 0e c9 00 00 	lea    0xc90e(%rip),%rax        # 10580 <cpu>
    3c72:	48 89 f4             	mov    %rsi,%rsp
    3c75:	89 14 88             	mov    %edx,(%rax,%rcx,4)
    3c78:	e9 c4 f9 ff ff       	jmp    3641 <decode_exec+0x2d1>
    3c7d:	48 8d 4c 24 08       	lea    0x8(%rsp),%rcx
    3c82:	48 8d 54 24 04       	lea    0x4(%rsp),%rdx
    3c87:	48 89 e6             	mov    %rsp,%rsi
    3c8a:	6a 03                	push   $0x3
    3c8c:	48 8d 44 24 1c       	lea    0x1c(%rsp),%rax
    3c91:	50                   	push   %rax
    3c92:	4c 8d 4c 24 20       	lea    0x20(%rsp),%r9
    3c97:	4c 8d 44 24 1c       	lea    0x1c(%rsp),%r8
    3c9c:	e8 bf f5 ff ff       	call   3260 <decode_operand.constprop.0.isra.0>
    3ca1:	8b 44 24 1c          	mov    0x1c(%rsp),%eax
    3ca5:	31 d2                	xor    %edx,%edx
    3ca7:	48 63 4c 24 18       	movslq 0x18(%rsp),%rcx
    3cac:	f7 74 24 20          	divl   0x20(%rsp)
    3cb0:	48 8d 15 c9 c8 00 00 	lea    0xc8c9(%rip),%rdx        # 10580 <cpu>
    3cb7:	48 89 f4             	mov    %rsi,%rsp
    3cba:	89 04 8a             	mov    %eax,(%rdx,%rcx,4)
    3cbd:	e9 7f f9 ff ff       	jmp    3641 <decode_exec+0x2d1>
    3cc2:	48 8d 4c 24 08       	lea    0x8(%rsp),%rcx
    3cc7:	48 8d 54 24 04       	lea    0x4(%rsp),%rdx
    3ccc:	48 89 e6             	mov    %rsp,%rsi
    3ccf:	6a 03                	push   $0x3
    3cd1:	48 8d 44 24 1c       	lea    0x1c(%rsp),%rax
    3cd6:	50                   	push   %rax
    3cd7:	4c 8d 4c 24 20       	lea    0x20(%rsp),%r9
    3cdc:	4c 8d 44 24 1c       	lea    0x1c(%rsp),%r8
    3ce1:	e8 7a f5 ff ff       	call   3260 <decode_operand.constprop.0.isra.0>
    3ce6:	8b 44 24 1c          	mov    0x1c(%rsp),%eax
    3cea:	48 63 4c 24 18       	movslq 0x18(%rsp),%rcx
    3cef:	99                   	cltd   
    3cf0:	f7 7c 24 20          	idivl  0x20(%rsp)
    3cf4:	48 8d 05 85 c8 00 00 	lea    0xc885(%rip),%rax        # 10580 <cpu>
    3cfb:	48 89 f4             	mov    %rsi,%rsp
    3cfe:	89 14 88             	mov    %edx,(%rax,%rcx,4)
    3d01:	e9 3b f9 ff ff       	jmp    3641 <decode_exec+0x2d1>
    3d06:	48 8d 4c 24 08       	lea    0x8(%rsp),%rcx
    3d0b:	48 8d 54 24 04       	lea    0x4(%rsp),%rdx
    3d10:	48 89 e6             	mov    %rsp,%rsi
    3d13:	6a 03                	push   $0x3
    3d15:	48 8d 44 24 1c       	lea    0x1c(%rsp),%rax
    3d1a:	50                   	push   %rax
    3d1b:	4c 8d 4c 24 20       	lea    0x20(%rsp),%r9
    3d20:	4c 8d 44 24 1c       	lea    0x1c(%rsp),%r8
    3d25:	e8 36 f5 ff ff       	call   3260 <decode_operand.constprop.0.isra.0>
    3d2a:	8b 44 24 1c          	mov    0x1c(%rsp),%eax
    3d2e:	48 63 4c 24 18       	movslq 0x18(%rsp),%rcx
    3d33:	99                   	cltd   
    3d34:	f7 7c 24 20          	idivl  0x20(%rsp)
    3d38:	48 8d 15 41 c8 00 00 	lea    0xc841(%rip),%rdx        # 10580 <cpu>
    3d3f:	48 89 f4             	mov    %rsi,%rsp
    3d42:	89 04 8a             	mov    %eax,(%rdx,%rcx,4)
    3d45:	e9 f7 f8 ff ff       	jmp    3641 <decode_exec+0x2d1>
    3d4a:	48 8d 4c 24 08       	lea    0x8(%rsp),%rcx
    3d4f:	48 8d 54 24 04       	lea    0x4(%rsp),%rdx
    3d54:	48 89 e6             	mov    %rsp,%rsi
    3d57:	6a 03                	push   $0x3
    3d59:	48 8d 44 24 1c       	lea    0x1c(%rsp),%rax
    3d5e:	50                   	push   %rax
    3d5f:	4c 8d 4c 24 20       	lea    0x20(%rsp),%r9
    3d64:	4c 8d 44 24 1c       	lea    0x1c(%rsp),%r8
    3d69:	e8 f2 f4 ff ff       	call   3260 <decode_operand.constprop.0.isra.0>
    3d6e:	8b 54 24 20          	mov    0x20(%rsp),%edx
    3d72:	8b 44 24 1c          	mov    0x1c(%rsp),%eax
    3d76:	48 63 4c 24 18       	movslq 0x18(%rsp),%rcx
    3d7b:	48 89 f4             	mov    %rsi,%rsp
    3d7e:	48 0f af c2          	imul   %rdx,%rax
    3d82:	48 8d 15 f7 c7 00 00 	lea    0xc7f7(%rip),%rdx        # 10580 <cpu>
    3d89:	48 c1 e8 20          	shr    $0x20,%rax
    3d8d:	89 04 8a             	mov    %eax,(%rdx,%rcx,4)
    3d90:	e9 ac f8 ff ff       	jmp    3641 <decode_exec+0x2d1>
    3d95:	48 8d 4c 24 08       	lea    0x8(%rsp),%rcx
    3d9a:	48 8d 54 24 04       	lea    0x4(%rsp),%rdx
    3d9f:	48 89 e6             	mov    %rsp,%rsi
    3da2:	6a 03                	push   $0x3
    3da4:	48 8d 44 24 1c       	lea    0x1c(%rsp),%rax
    3da9:	50                   	push   %rax
    3daa:	4c 8d 4c 24 20       	lea    0x20(%rsp),%r9
    3daf:	4c 8d 44 24 1c       	lea    0x1c(%rsp),%r8
    3db4:	e8 a7 f4 ff ff       	call   3260 <decode_operand.constprop.0.isra.0>
    3db9:	48 63 54 24 20       	movslq 0x20(%rsp),%rdx
    3dbe:	48 63 44 24 1c       	movslq 0x1c(%rsp),%rax
    3dc3:	48 63 4c 24 18       	movslq 0x18(%rsp),%rcx
    3dc8:	48 89 f4             	mov    %rsi,%rsp
    3dcb:	48 0f af c2          	imul   %rdx,%rax
    3dcf:	48 8d 15 aa c7 00 00 	lea    0xc7aa(%rip),%rdx        # 10580 <cpu>
    3dd6:	48 c1 f8 20          	sar    $0x20,%rax
    3dda:	89 04 8a             	mov    %eax,(%rdx,%rcx,4)
    3ddd:	e9 5f f8 ff ff       	jmp    3641 <decode_exec+0x2d1>
    3de2:	48 8d 4c 24 08       	lea    0x8(%rsp),%rcx
    3de7:	48 8d 54 24 04       	lea    0x4(%rsp),%rdx
    3dec:	48 89 e6             	mov    %rsp,%rsi
    3def:	6a 03                	push   $0x3
    3df1:	48 8d 44 24 1c       	lea    0x1c(%rsp),%rax
    3df6:	50                   	push   %rax
    3df7:	4c 8d 4c 24 20       	lea    0x20(%rsp),%r9
    3dfc:	4c 8d 44 24 1c       	lea    0x1c(%rsp),%r8
    3e01:	e8 5a f4 ff ff       	call   3260 <decode_operand.constprop.0.isra.0>
    3e06:	8b 44 24 1c          	mov    0x1c(%rsp),%eax
    3e0a:	0f af 44 24 20       	imul   0x20(%rsp),%eax
    3e0f:	48 8d 15 6a c7 00 00 	lea    0xc76a(%rip),%rdx        # 10580 <cpu>
    3e16:	48 63 4c 24 18       	movslq 0x18(%rsp),%rcx
    3e1b:	48 89 f4             	mov    %rsi,%rsp
    3e1e:	89 04 8a             	mov    %eax,(%rdx,%rcx,4)
    3e21:	e9 1b f8 ff ff       	jmp    3641 <decode_exec+0x2d1>
    3e26:	48 8d 4c 24 08       	lea    0x8(%rsp),%rcx
    3e2b:	48 8d 54 24 04       	lea    0x4(%rsp),%rdx
    3e30:	48 89 e6             	mov    %rsp,%rsi
    3e33:	6a 03                	push   $0x3
    3e35:	e9 40 fd ff ff       	jmp    3b7a <decode_exec+0x80a>
    3e3a:	48 8d 4c 24 08       	lea    0x8(%rsp),%rcx
    3e3f:	48 8d 54 24 04       	lea    0x4(%rsp),%rdx
    3e44:	48 89 e6             	mov    %rsp,%rsi
    3e47:	6a 03                	push   $0x3
    3e49:	e9 70 fd ff ff       	jmp    3bbe <decode_exec+0x84e>
    3e4e:	48 8d 4c 24 08       	lea    0x8(%rsp),%rcx
    3e53:	48 8d 54 24 04       	lea    0x4(%rsp),%rdx
    3e58:	48 89 e6             	mov    %rsp,%rsi
    3e5b:	6a 03                	push   $0x3
    3e5d:	e9 a0 fd ff ff       	jmp    3c02 <decode_exec+0x892>
    3e62:	48 8d 4c 24 08       	lea    0x8(%rsp),%rcx
    3e67:	48 8d 54 24 04       	lea    0x4(%rsp),%rdx
    3e6c:	48 89 e6             	mov    %rsp,%rsi
    3e6f:	6a 03                	push   $0x3
    3e71:	48 8d 44 24 1c       	lea    0x1c(%rsp),%rax
    3e76:	50                   	push   %rax
    3e77:	4c 8d 4c 24 20       	lea    0x20(%rsp),%r9
    3e7c:	4c 8d 44 24 1c       	lea    0x1c(%rsp),%r8
    3e81:	e8 da f3 ff ff       	call   3260 <decode_operand.constprop.0.isra.0>
    3e86:	48 63 4c 24 18       	movslq 0x18(%rsp),%rcx
    3e8b:	8b 44 24 1c          	mov    0x1c(%rsp),%eax
    3e8f:	48 8d 15 ea c6 00 00 	lea    0xc6ea(%rip),%rdx        # 10580 <cpu>
    3e96:	33 44 24 20          	xor    0x20(%rsp),%eax
    3e9a:	48 89 f4             	mov    %rsi,%rsp
    3e9d:	89 04 8a             	mov    %eax,(%rdx,%rcx,4)
    3ea0:	e9 9c f7 ff ff       	jmp    3641 <decode_exec+0x2d1>
    3ea5:	48 8d 4c 24 08       	lea    0x8(%rsp),%rcx
    3eaa:	48 8d 54 24 04       	lea    0x4(%rsp),%rdx
    3eaf:	48 89 e6             	mov    %rsp,%rsi
    3eb2:	6a 03                	push   $0x3
    3eb4:	48 8d 44 24 1c       	lea    0x1c(%rsp),%rax
    3eb9:	50                   	push   %rax
    3eba:	4c 8d 4c 24 20       	lea    0x20(%rsp),%r9
    3ebf:	4c 8d 44 24 1c       	lea    0x1c(%rsp),%r8
    3ec4:	e8 97 f3 ff ff       	call   3260 <decode_operand.constprop.0.isra.0>
    3ec9:	48 63 4c 24 18       	movslq 0x18(%rsp),%rcx
    3ece:	8b 44 24 1c          	mov    0x1c(%rsp),%eax
    3ed2:	48 8d 15 a7 c6 00 00 	lea    0xc6a7(%rip),%rdx        # 10580 <cpu>
    3ed9:	0b 44 24 20          	or     0x20(%rsp),%eax
    3edd:	48 89 f4             	mov    %rsi,%rsp
    3ee0:	89 04 8a             	mov    %eax,(%rdx,%rcx,4)
    3ee3:	e9 59 f7 ff ff       	jmp    3641 <decode_exec+0x2d1>
    3ee8:	48 8d 4c 24 08       	lea    0x8(%rsp),%rcx
    3eed:	48 8d 54 24 04       	lea    0x4(%rsp),%rdx
    3ef2:	48 89 e6             	mov    %rsp,%rsi
    3ef5:	6a 03                	push   $0x3
    3ef7:	48 8d 44 24 1c       	lea    0x1c(%rsp),%rax
    3efc:	50                   	push   %rax
    3efd:	4c 8d 4c 24 20       	lea    0x20(%rsp),%r9
    3f02:	4c 8d 44 24 1c       	lea    0x1c(%rsp),%r8
    3f07:	e8 54 f3 ff ff       	call   3260 <decode_operand.constprop.0.isra.0>
    3f0c:	48 63 4c 24 18       	movslq 0x18(%rsp),%rcx
    3f11:	8b 44 24 1c          	mov    0x1c(%rsp),%eax
    3f15:	48 8d 15 64 c6 00 00 	lea    0xc664(%rip),%rdx        # 10580 <cpu>
    3f1c:	23 44 24 20          	and    0x20(%rsp),%eax
    3f20:	48 89 f4             	mov    %rsi,%rsp
    3f23:	89 04 8a             	mov    %eax,(%rdx,%rcx,4)
    3f26:	e9 16 f7 ff ff       	jmp    3641 <decode_exec+0x2d1>
    3f2b:	48 8d 4c 24 08       	lea    0x8(%rsp),%rcx
    3f30:	48 8d 54 24 04       	lea    0x4(%rsp),%rdx
    3f35:	48 89 e6             	mov    %rsp,%rsi
    3f38:	6a 03                	push   $0x3
    3f3a:	48 8d 44 24 1c       	lea    0x1c(%rsp),%rax
    3f3f:	50                   	push   %rax
    3f40:	4c 8d 4c 24 20       	lea    0x20(%rsp),%r9
    3f45:	4c 8d 44 24 1c       	lea    0x1c(%rsp),%r8
    3f4a:	e8 11 f3 ff ff       	call   3260 <decode_operand.constprop.0.isra.0>
    3f4f:	48 63 4c 24 18       	movslq 0x18(%rsp),%rcx
    3f54:	8b 44 24 1c          	mov    0x1c(%rsp),%eax
    3f58:	48 8d 15 21 c6 00 00 	lea    0xc621(%rip),%rdx        # 10580 <cpu>
    3f5f:	0b 44 24 20          	or     0x20(%rsp),%eax
    3f63:	48 89 f4             	mov    %rsi,%rsp
    3f66:	f7 d0                	not    %eax
    3f68:	89 04 8a             	mov    %eax,(%rdx,%rcx,4)
    3f6b:	e9 d1 f6 ff ff       	jmp    3641 <decode_exec+0x2d1>
    3f70:	48 8d 4c 24 08       	lea    0x8(%rsp),%rcx
    3f75:	48 8d 54 24 04       	lea    0x4(%rsp),%rdx
    3f7a:	48 89 e6             	mov    %rsp,%rsi
    3f7d:	6a 03                	push   $0x3
    3f7f:	48 8d 44 24 1c       	lea    0x1c(%rsp),%rax
    3f84:	50                   	push   %rax
    3f85:	4c 8d 4c 24 20       	lea    0x20(%rsp),%r9
    3f8a:	4c 8d 44 24 1c       	lea    0x1c(%rsp),%r8
    3f8f:	e8 cc f2 ff ff       	call   3260 <decode_operand.constprop.0.isra.0>
    3f94:	48 63 54 24 18       	movslq 0x18(%rsp),%rdx
    3f99:	48 89 f4             	mov    %rsi,%rsp
    3f9c:	31 c9                	xor    %ecx,%ecx
    3f9e:	8b 44 24 10          	mov    0x10(%rsp),%eax
    3fa2:	39 44 24 0c          	cmp    %eax,0xc(%rsp)
    3fa6:	48 8d 05 d3 c5 00 00 	lea    0xc5d3(%rip),%rax        # 10580 <cpu>
    3fad:	0f 92 c1             	setb   %cl
    3fb0:	89 0c 90             	mov    %ecx,(%rax,%rdx,4)
    3fb3:	e9 89 f6 ff ff       	jmp    3641 <decode_exec+0x2d1>
    3fb8:	48 8d 4c 24 08       	lea    0x8(%rsp),%rcx
    3fbd:	48 8d 54 24 04       	lea    0x4(%rsp),%rdx
    3fc2:	48 89 e6             	mov    %rsp,%rsi
    3fc5:	6a 03                	push   $0x3
    3fc7:	48 8d 44 24 1c       	lea    0x1c(%rsp),%rax
    3fcc:	50                   	push   %rax
    3fcd:	4c 8d 4c 24 20       	lea    0x20(%rsp),%r9
    3fd2:	4c 8d 44 24 1c       	lea    0x1c(%rsp),%r8
    3fd7:	e8 84 f2 ff ff       	call   3260 <decode_operand.constprop.0.isra.0>
    3fdc:	48 63 54 24 18       	movslq 0x18(%rsp),%rdx
    3fe1:	48 89 f4             	mov    %rsi,%rsp
    3fe4:	31 c9                	xor    %ecx,%ecx
    3fe6:	8b 44 24 10          	mov    0x10(%rsp),%eax
    3fea:	39 44 24 0c          	cmp    %eax,0xc(%rsp)
    3fee:	48 8d 05 8b c5 00 00 	lea    0xc58b(%rip),%rax        # 10580 <cpu>
    3ff5:	0f 9c c1             	setl   %cl
    3ff8:	89 0c 90             	mov    %ecx,(%rax,%rdx,4)
    3ffb:	e9 41 f6 ff ff       	jmp    3641 <decode_exec+0x2d1>
    4000:	48 8d 4c 24 08       	lea    0x8(%rsp),%rcx
    4005:	48 8d 54 24 04       	lea    0x4(%rsp),%rdx
    400a:	48 89 e6             	mov    %rsp,%rsi
    400d:	6a 03                	push   $0x3
    400f:	48 8d 44 24 1c       	lea    0x1c(%rsp),%rax
    4014:	50                   	push   %rax
    4015:	4c 8d 4c 24 20       	lea    0x20(%rsp),%r9
    401a:	4c 8d 44 24 1c       	lea    0x1c(%rsp),%r8
    401f:	e8 3c f2 ff ff       	call   3260 <decode_operand.constprop.0.isra.0>
    4024:	48 63 4c 24 18       	movslq 0x18(%rsp),%rcx
    4029:	8b 44 24 1c          	mov    0x1c(%rsp),%eax
    402d:	48 8d 15 4c c5 00 00 	lea    0xc54c(%rip),%rdx        # 10580 <cpu>
    4034:	2b 44 24 20          	sub    0x20(%rsp),%eax
    4038:	48 89 f4             	mov    %rsi,%rsp
    403b:	89 04 8a             	mov    %eax,(%rdx,%rcx,4)
    403e:	e9 fe f5 ff ff       	jmp    3641 <decode_exec+0x2d1>
    4043:	48 8d 4c 24 08       	lea    0x8(%rsp),%rcx
    4048:	48 8d 54 24 04       	lea    0x4(%rsp),%rdx
    404d:	48 89 e6             	mov    %rsp,%rsi
    4050:	6a 03                	push   $0x3
    4052:	48 8d 44 24 1c       	lea    0x1c(%rsp),%rax
    4057:	50                   	push   %rax
    4058:	4c 8d 4c 24 20       	lea    0x20(%rsp),%r9
    405d:	4c 8d 44 24 1c       	lea    0x1c(%rsp),%r8
    4062:	e8 f9 f1 ff ff       	call   3260 <decode_operand.constprop.0.isra.0>
    4067:	48 63 4c 24 18       	movslq 0x18(%rsp),%rcx
    406c:	8b 44 24 20          	mov    0x20(%rsp),%eax
    4070:	48 8d 15 09 c5 00 00 	lea    0xc509(%rip),%rdx        # 10580 <cpu>
    4077:	03 44 24 1c          	add    0x1c(%rsp),%eax
    407b:	48 89 f4             	mov    %rsi,%rsp
    407e:	89 04 8a             	mov    %eax,(%rdx,%rcx,4)
    4081:	e9 bb f5 ff ff       	jmp    3641 <decode_exec+0x2d1>
    4086:	48 8d 4c 24 08       	lea    0x8(%rsp),%rcx
    408b:	48 8d 54 24 04       	lea    0x4(%rsp),%rdx
    4090:	48 89 e6             	mov    %rsp,%rsi
    4093:	6a 00                	push   $0x0
    4095:	48 8d 44 24 1c       	lea    0x1c(%rsp),%rax
    409a:	50                   	push   %rax
    409b:	4c 8d 4c 24 20       	lea    0x20(%rsp),%r9
    40a0:	4c 8d 44 24 1c       	lea    0x1c(%rsp),%r8
    40a5:	e8 b6 f1 ff ff       	call   3260 <decode_operand.constprop.0.isra.0>
    40aa:	8b 7c 24 24          	mov    0x24(%rsp),%edi
    40ae:	be 02 00 00 00       	mov    $0x2,%esi
    40b3:	03 7c 24 1c          	add    0x1c(%rsp),%edi
    40b7:	e8 a4 37 00 00       	call   7860 <vaddr_read>
    40bc:	48 63 4c 24 18       	movslq 0x18(%rsp),%rcx
    40c1:	48 8d 15 b8 c4 00 00 	lea    0xc4b8(%rip),%rdx        # 10580 <cpu>
    40c8:	0f b7 c0             	movzwl %ax,%eax
    40cb:	89 04 8a             	mov    %eax,(%rdx,%rcx,4)
    40ce:	41 59                	pop    %r9
    40d0:	41 5a                	pop    %r10
    40d2:	e9 6a f5 ff ff       	jmp    3641 <decode_exec+0x2d1>
    40d7:	48 8d 4c 24 08       	lea    0x8(%rsp),%rcx
    40dc:	48 8d 54 24 04       	lea    0x4(%rsp),%rdx
    40e1:	48 89 e6             	mov    %rsp,%rsi
    40e4:	6a 00                	push   $0x0
    40e6:	48 8d 44 24 1c       	lea    0x1c(%rsp),%rax
    40eb:	50                   	push   %rax
    40ec:	4c 8d 4c 24 20       	lea    0x20(%rsp),%r9
    40f1:	4c 8d 44 24 1c       	lea    0x1c(%rsp),%r8
    40f6:	e8 65 f1 ff ff       	call   3260 <decode_operand.constprop.0.isra.0>
    40fb:	8b 7c 24 24          	mov    0x24(%rsp),%edi
    40ff:	be 01 00 00 00       	mov    $0x1,%esi
    4104:	03 7c 24 1c          	add    0x1c(%rsp),%edi
    4108:	e8 53 37 00 00       	call   7860 <vaddr_read>
    410d:	48 63 4c 24 18       	movslq 0x18(%rsp),%rcx
    4112:	48 8d 15 67 c4 00 00 	lea    0xc467(%rip),%rdx        # 10580 <cpu>
    4119:	0f b6 c0             	movzbl %al,%eax
    411c:	89 04 8a             	mov    %eax,(%rdx,%rcx,4)
    411f:	41 5b                	pop    %r11
    4121:	5b                   	pop    %rbx
    4122:	e9 1a f5 ff ff       	jmp    3641 <decode_exec+0x2d1>
    4127:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
    412e:	00 00 

0000000000004130 <isa_exec_once>:
    4130:	f3 0f 1e fa          	endbr64 
    4134:	8b 05 e6 c3 00 00    	mov    0xc3e6(%rip),%eax        # 10520 <break_flag>
    413a:	55                   	push   %rbp
    413b:	48 89 fd             	mov    %rdi,%rbp
    413e:	8b 7f 04             	mov    0x4(%rdi),%edi
    4141:	85 c0                	test   %eax,%eax
    4143:	74 2b                	je     4170 <isa_exec_once+0x40>
    4145:	8b 05 d5 c4 00 00    	mov    0xc4d5(%rip),%eax        # 10620 <replaced_inst>
    414b:	83 c7 04             	add    $0x4,%edi
    414e:	c7 05 c8 c3 00 00 00 	movl   $0x0,0xc3c8(%rip)        # 10520 <break_flag>
    4155:	00 00 00 
    4158:	89 7d 04             	mov    %edi,0x4(%rbp)
    415b:	48 89 ef             	mov    %rbp,%rdi
    415e:	89 45 0c             	mov    %eax,0xc(%rbp)
    4161:	5d                   	pop    %rbp
    4162:	e9 09 f2 ff ff       	jmp    3370 <decode_exec>
    4167:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
    416e:	00 00 
    4170:	be 04 00 00 00       	mov    $0x4,%esi
    4175:	e8 c6 36 00 00       	call   7840 <vaddr_ifetch>
    417a:	83 45 04 04          	addl   $0x4,0x4(%rbp)
    417e:	48 89 ef             	mov    %rbp,%rdi
    4181:	89 45 0c             	mov    %eax,0xc(%rbp)
    4184:	5d                   	pop    %rbp
    4185:	e9 e6 f1 ff ff       	jmp    3370 <decode_exec>
    418a:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

0000000000004190 <isa_difftest_checkregs>:
    4190:	f3 0f 1e fa          	endbr64 
    4194:	b8 01 00 00 00       	mov    $0x1,%eax
    4199:	c3                   	ret    
    419a:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

00000000000041a0 <isa_difftest_attach>:
    41a0:	f3 0f 1e fa          	endbr64 
    41a4:	c3                   	ret    
    41a5:	66 2e 0f 1f 84 00 00 	cs nopw 0x0(%rax,%rax,1)
    41ac:	00 00 00 
    41af:	90                   	nop

00000000000041b0 <isa_mmu_translate>:
    41b0:	f3 0f 1e fa          	endbr64 
    41b4:	b8 01 00 00 00       	mov    $0x1,%eax
    41b9:	c3                   	ret    
    41ba:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

00000000000041c0 <isa_raise_intr>:
    41c0:	f3 0f 1e fa          	endbr64 
    41c4:	31 c0                	xor    %eax,%eax
    41c6:	c3                   	ret    
    41c7:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
    41ce:	00 00 

00000000000041d0 <isa_query_intr>:
    41d0:	f3 0f 1e fa          	endbr64 
    41d4:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    41d9:	c3                   	ret    
    41da:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

00000000000041e0 <isa_reg_display>:
    41e0:	f3 0f 1e fa          	endbr64 
    41e4:	41 55                	push   %r13
    41e6:	4c 8d 2d 93 c3 00 00 	lea    0xc393(%rip),%r13        # 10580 <cpu>
    41ed:	41 54                	push   %r12
    41ef:	4c 8d 25 2a 9e 00 00 	lea    0x9e2a(%rip),%r12        # e020 <regs>
    41f6:	55                   	push   %rbp
    41f7:	48 8d 2d 82 51 00 00 	lea    0x5182(%rip),%rbp        # 9380 <__PRETTY_FUNCTION__.1+0x198>
    41fe:	53                   	push   %rbx
    41ff:	31 db                	xor    %ebx,%ebx
    4201:	48 83 ec 08          	sub    $0x8,%rsp
    4205:	0f 1f 00             	nopl   (%rax)
    4208:	49 8b 0c dc          	mov    (%r12,%rbx,8),%rcx
    420c:	45 8b 44 9d 00       	mov    0x0(%r13,%rbx,4),%r8d
    4211:	89 da                	mov    %ebx,%edx
    4213:	48 89 ee             	mov    %rbp,%rsi
    4216:	bf 01 00 00 00       	mov    $0x1,%edi
    421b:	31 c0                	xor    %eax,%eax
    421d:	48 83 c3 01          	add    $0x1,%rbx
    4221:	e8 2a e1 ff ff       	call   2350 <__printf_chk@plt>
    4226:	48 83 fb 20          	cmp    $0x20,%rbx
    422a:	75 dc                	jne    4208 <isa_reg_display+0x28>
    422c:	48 83 c4 08          	add    $0x8,%rsp
    4230:	5b                   	pop    %rbx
    4231:	5d                   	pop    %rbp
    4232:	41 5c                	pop    %r12
    4234:	41 5d                	pop    %r13
    4236:	c3                   	ret    
    4237:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
    423e:	00 00 

0000000000004240 <isa_reg_str2val>:
    4240:	f3 0f 1e fa          	endbr64 
    4244:	41 56                	push   %r14
    4246:	41 55                	push   %r13
    4248:	49 89 f5             	mov    %rsi,%r13
    424b:	48 8d 35 3f 51 00 00 	lea    0x513f(%rip),%rsi        # 9391 <__PRETTY_FUNCTION__.1+0x1a9>
    4252:	41 54                	push   %r12
    4254:	55                   	push   %rbp
    4255:	48 89 fd             	mov    %rdi,%rbp
    4258:	53                   	push   %rbx
    4259:	48 83 ec 20          	sub    $0x20,%rsp
    425d:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    4264:	00 00 
    4266:	48 89 44 24 18       	mov    %rax,0x18(%rsp)
    426b:	31 c0                	xor    %eax,%eax
    426d:	e8 1e e3 ff ff       	call   2590 <strcmp@plt>
    4272:	85 c0                	test   %eax,%eax
    4274:	0f 84 ae 00 00 00    	je     4328 <isa_reg_str2val+0xe8>
    427a:	80 7d 00 24          	cmpb   $0x24,0x0(%rbp)
    427e:	0f 84 7c 00 00 00    	je     4300 <isa_reg_str2val+0xc0>
    4284:	4c 8d 64 24 0e       	lea    0xe(%rsp),%r12
    4289:	48 89 ef             	mov    %rbp,%rdi
    428c:	31 c0                	xor    %eax,%eax
    428e:	bb 01 00 00 00       	mov    $0x1,%ebx
    4293:	4c 89 e2             	mov    %r12,%rdx
    4296:	48 8d 35 f8 50 00 00 	lea    0x50f8(%rip),%rsi        # 9395 <__PRETTY_FUNCTION__.1+0x1ad>
    429d:	4c 8d 35 7c 9d 00 00 	lea    0x9d7c(%rip),%r14        # e020 <regs>
    42a4:	e8 e7 e1 ff ff       	call   2490 <__isoc99_sscanf@plt>
    42a9:	eb 0f                	jmp    42ba <isa_reg_str2val+0x7a>
    42ab:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
    42b0:	48 83 c3 01          	add    $0x1,%rbx
    42b4:	48 83 fb 20          	cmp    $0x20,%rbx
    42b8:	74 7e                	je     4338 <isa_reg_str2val+0xf8>
    42ba:	49 8b 34 de          	mov    (%r14,%rbx,8),%rsi
    42be:	4c 89 e7             	mov    %r12,%rdi
    42c1:	48 63 eb             	movslq %ebx,%rbp
    42c4:	e8 c7 e2 ff ff       	call   2590 <strcmp@plt>
    42c9:	85 c0                	test   %eax,%eax
    42cb:	75 e3                	jne    42b0 <isa_reg_str2val+0x70>
    42cd:	48 8d 05 ac c2 00 00 	lea    0xc2ac(%rip),%rax        # 10580 <cpu>
    42d4:	41 c6 45 00 01       	movb   $0x1,0x0(%r13)
    42d9:	8b 04 a8             	mov    (%rax,%rbp,4),%eax
    42dc:	48 8b 54 24 18       	mov    0x18(%rsp),%rdx
    42e1:	64 48 2b 14 25 28 00 	sub    %fs:0x28,%rdx
    42e8:	00 00 
    42ea:	75 55                	jne    4341 <isa_reg_str2val+0x101>
    42ec:	48 83 c4 20          	add    $0x20,%rsp
    42f0:	5b                   	pop    %rbx
    42f1:	5d                   	pop    %rbp
    42f2:	41 5c                	pop    %r12
    42f4:	41 5d                	pop    %r13
    42f6:	41 5e                	pop    %r14
    42f8:	c3                   	ret    
    42f9:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    4300:	80 7d 01 30          	cmpb   $0x30,0x1(%rbp)
    4304:	0f 85 7a ff ff ff    	jne    4284 <isa_reg_str2val+0x44>
    430a:	80 7d 02 00          	cmpb   $0x0,0x2(%rbp)
    430e:	0f 85 70 ff ff ff    	jne    4284 <isa_reg_str2val+0x44>
    4314:	41 c6 45 00 01       	movb   $0x1,0x0(%r13)
    4319:	8b 05 61 c2 00 00    	mov    0xc261(%rip),%eax        # 10580 <cpu>
    431f:	eb bb                	jmp    42dc <isa_reg_str2val+0x9c>
    4321:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    4328:	41 c6 45 00 01       	movb   $0x1,0x0(%r13)
    432d:	8b 05 cd c2 00 00    	mov    0xc2cd(%rip),%eax        # 10600 <cpu+0x80>
    4333:	eb a7                	jmp    42dc <isa_reg_str2val+0x9c>
    4335:	0f 1f 00             	nopl   (%rax)
    4338:	41 c6 45 00 00       	movb   $0x0,0x0(%r13)
    433d:	31 c0                	xor    %eax,%eax
    433f:	eb 9b                	jmp    42dc <isa_reg_str2val+0x9c>
    4341:	e8 7a e1 ff ff       	call   24c0 <__stack_chk_fail@plt>
    4346:	66 2e 0f 1f 84 00 00 	cs nopw 0x0(%rax,%rax,1)
    434d:	00 00 00 

0000000000004350 <init_isa>:
    4350:	f3 0f 1e fa          	endbr64 
    4354:	48 83 ec 08          	sub    $0x8,%rsp
    4358:	bf 00 00 00 1c       	mov    $0x1c000000,%edi
    435d:	e8 3e 35 00 00       	call   78a0 <guest_to_host>
    4362:	66 0f 6f 05 a6 50 00 	movdqa 0x50a6(%rip),%xmm0        # 9410 <__PRETTY_FUNCTION__.1+0x228>
    4369:	00 
    436a:	c7 40 10 ef be ad de 	movl   $0xdeadbeef,0x10(%rax)
    4371:	0f 11 00             	movups %xmm0,(%rax)
    4374:	48 8b 05 85 50 00 00 	mov    0x5085(%rip),%rax        # 9400 <__PRETTY_FUNCTION__.1+0x218>
    437b:	66 0f 6f 05 7d 50 00 	movdqa 0x507d(%rip),%xmm0        # 9400 <__PRETTY_FUNCTION__.1+0x218>
    4382:	00 
    4383:	c7 05 f3 c1 00 00 00 	movl   $0x0,0xc1f3(%rip)        # 10580 <cpu>
    438a:	00 00 00 
    438d:	48 89 05 60 c2 00 00 	mov    %rax,0xc260(%rip)        # 105f4 <cpu+0x74>
    4394:	48 8b 05 85 50 00 00 	mov    0x5085(%rip),%rax        # 9420 <__PRETTY_FUNCTION__.1+0x238>
    439b:	0f 11 05 e2 c1 00 00 	movups %xmm0,0xc1e2(%rip)        # 10584 <cpu+0x4>
    43a2:	48 89 05 53 c2 00 00 	mov    %rax,0xc253(%rip)        # 105fc <cpu+0x7c>
    43a9:	0f 11 05 e4 c1 00 00 	movups %xmm0,0xc1e4(%rip)        # 10594 <cpu+0x14>
    43b0:	0f 11 05 ed c1 00 00 	movups %xmm0,0xc1ed(%rip)        # 105a4 <cpu+0x24>
    43b7:	0f 11 05 f6 c1 00 00 	movups %xmm0,0xc1f6(%rip)        # 105b4 <cpu+0x34>
    43be:	0f 11 05 ff c1 00 00 	movups %xmm0,0xc1ff(%rip)        # 105c4 <cpu+0x44>
    43c5:	0f 11 05 08 c2 00 00 	movups %xmm0,0xc208(%rip)        # 105d4 <cpu+0x54>
    43cc:	0f 11 05 11 c2 00 00 	movups %xmm0,0xc211(%rip)        # 105e4 <cpu+0x64>
    43d3:	48 83 c4 08          	add    $0x8,%rsp
    43d7:	c3                   	ret    
    43d8:	0f 1f 84 00 00 00 00 	nopl   0x0(%rax,%rax,1)
    43df:	00 

00000000000043e0 <init_difftest>:
    43e0:	f3 0f 1e fa          	endbr64 
    43e4:	c3                   	ret    
    43e5:	66 2e 0f 1f 84 00 00 	cs nopw 0x0(%rax,%rax,1)
    43ec:	00 00 00 
    43ef:	90                   	nop

00000000000043f0 <difftest_memcpy>:
    43f0:	f3 0f 1e fa          	endbr64 
    43f4:	41 57                	push   %r15
    43f6:	41 56                	push   %r14
    43f8:	41 55                	push   %r13
    43fa:	41 54                	push   %r12
    43fc:	49 89 d4             	mov    %rdx,%r12
    43ff:	55                   	push   %rbp
    4400:	89 fd                	mov    %edi,%ebp
    4402:	53                   	push   %rbx
    4403:	48 89 f3             	mov    %rsi,%rbx
    4406:	48 83 ec 08          	sub    $0x8,%rsp
    440a:	84 c9                	test   %cl,%cl
    440c:	0f 84 7e 00 00 00    	je     4490 <difftest_memcpy+0xa0>
    4412:	49 89 f5             	mov    %rsi,%r13
    4415:	48 83 fa 03          	cmp    $0x3,%rdx
    4419:	76 37                	jbe    4452 <difftest_memcpy+0x62>
    441b:	4c 8d 72 fc          	lea    -0x4(%rdx),%r14
    441f:	41 89 ff             	mov    %edi,%r15d
    4422:	49 c1 ee 02          	shr    $0x2,%r14
    4426:	41 29 f7             	sub    %esi,%r15d
    4429:	4e 8d 6c b6 04       	lea    0x4(%rsi,%r14,4),%r13
    442e:	66 90                	xchg   %ax,%ax
    4430:	8b 13                	mov    (%rbx),%edx
    4432:	41 8d 3c 1f          	lea    (%r15,%rbx,1),%edi
    4436:	be 04 00 00 00       	mov    $0x4,%esi
    443b:	48 83 c3 04          	add    $0x4,%rbx
    443f:	e8 2c 36 00 00       	call   7a70 <paddr_write>
    4444:	4c 39 eb             	cmp    %r13,%rbx
    4447:	75 e7                	jne    4430 <difftest_memcpy+0x40>
    4449:	41 83 e4 03          	and    $0x3,%r12d
    444d:	42 8d 6c b5 04       	lea    0x4(%rbp,%r14,4),%ebp
    4452:	49 83 fc 01          	cmp    $0x1,%r12
    4456:	76 1c                	jbe    4474 <difftest_memcpy+0x84>
    4458:	41 0f b7 55 00       	movzwl 0x0(%r13),%edx
    445d:	89 ef                	mov    %ebp,%edi
    445f:	be 02 00 00 00       	mov    $0x2,%esi
    4464:	49 83 ec 02          	sub    $0x2,%r12
    4468:	83 c5 02             	add    $0x2,%ebp
    446b:	49 83 c5 02          	add    $0x2,%r13
    446f:	e8 fc 35 00 00       	call   7a70 <paddr_write>
    4474:	4d 85 e4             	test   %r12,%r12
    4477:	0f 85 9b 00 00 00    	jne    4518 <difftest_memcpy+0x128>
    447d:	48 83 c4 08          	add    $0x8,%rsp
    4481:	5b                   	pop    %rbx
    4482:	5d                   	pop    %rbp
    4483:	41 5c                	pop    %r12
    4485:	41 5d                	pop    %r13
    4487:	41 5e                	pop    %r14
    4489:	41 5f                	pop    %r15
    448b:	c3                   	ret    
    448c:	0f 1f 40 00          	nopl   0x0(%rax)
    4490:	48 83 fa 03          	cmp    $0x3,%rdx
    4494:	0f 86 a6 00 00 00    	jbe    4540 <difftest_memcpy+0x150>
    449a:	4c 8d 72 fc          	lea    -0x4(%rdx),%r14
    449e:	41 89 ff             	mov    %edi,%r15d
    44a1:	49 c1 ee 02          	shr    $0x2,%r14
    44a5:	41 29 f7             	sub    %esi,%r15d
    44a8:	4e 8d 6c b6 04       	lea    0x4(%rsi,%r14,4),%r13
    44ad:	0f 1f 00             	nopl   (%rax)
    44b0:	41 8d 3c 1f          	lea    (%r15,%rbx,1),%edi
    44b4:	be 04 00 00 00       	mov    $0x4,%esi
    44b9:	48 83 c3 04          	add    $0x4,%rbx
    44bd:	e8 ee 34 00 00       	call   79b0 <paddr_read>
    44c2:	89 43 fc             	mov    %eax,-0x4(%rbx)
    44c5:	49 39 dd             	cmp    %rbx,%r13
    44c8:	75 e6                	jne    44b0 <difftest_memcpy+0xc0>
    44ca:	41 83 e4 03          	and    $0x3,%r12d
    44ce:	42 8d 6c b5 04       	lea    0x4(%rbp,%r14,4),%ebp
    44d3:	49 83 fc 01          	cmp    $0x1,%r12
    44d7:	76 1c                	jbe    44f5 <difftest_memcpy+0x105>
    44d9:	89 ef                	mov    %ebp,%edi
    44db:	be 02 00 00 00       	mov    $0x2,%esi
    44e0:	49 83 ec 02          	sub    $0x2,%r12
    44e4:	83 c5 02             	add    $0x2,%ebp
    44e7:	e8 c4 34 00 00       	call   79b0 <paddr_read>
    44ec:	49 83 c5 02          	add    $0x2,%r13
    44f0:	66 41 89 45 fe       	mov    %ax,-0x2(%r13)
    44f5:	4d 85 e4             	test   %r12,%r12
    44f8:	74 83                	je     447d <difftest_memcpy+0x8d>
    44fa:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
    4500:	be 01 00 00 00       	mov    $0x1,%esi
    4505:	89 ef                	mov    %ebp,%edi
    4507:	e8 a4 34 00 00       	call   79b0 <paddr_read>
    450c:	41 88 45 00          	mov    %al,0x0(%r13)
    4510:	eb ee                	jmp    4500 <difftest_memcpy+0x110>
    4512:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
    4518:	41 0f b6 55 00       	movzbl 0x0(%r13),%edx
    451d:	48 83 c4 08          	add    $0x8,%rsp
    4521:	89 ef                	mov    %ebp,%edi
    4523:	be 01 00 00 00       	mov    $0x1,%esi
    4528:	5b                   	pop    %rbx
    4529:	5d                   	pop    %rbp
    452a:	41 5c                	pop    %r12
    452c:	41 5d                	pop    %r13
    452e:	41 5e                	pop    %r14
    4530:	41 5f                	pop    %r15
    4532:	e9 39 35 00 00       	jmp    7a70 <paddr_write>
    4537:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
    453e:	00 00 
    4540:	49 89 f5             	mov    %rsi,%r13
    4543:	eb 8e                	jmp    44d3 <difftest_memcpy+0xe3>
    4545:	66 66 2e 0f 1f 84 00 	data16 cs nopw 0x0(%rax,%rax,1)
    454c:	00 00 00 00 

0000000000004550 <difftest_regcpy>:
    4550:	f3 0f 1e fa          	endbr64 
    4554:	48 8b 17             	mov    (%rdi),%rdx
    4557:	40 84 f6             	test   %sil,%sil
    455a:	0f 85 80 00 00 00    	jne    45e0 <difftest_regcpy+0x90>
    4560:	48 8d 0d 1d c0 00 00 	lea    0xc01d(%rip),%rcx        # 10584 <cpu+0x4>
    4567:	48 89 d0             	mov    %rdx,%rax
    456a:	48 29 c8             	sub    %rcx,%rax
    456d:	48 83 f8 08          	cmp    $0x8,%rax
    4571:	0f 86 0d 01 00 00    	jbe    4684 <difftest_regcpy+0x134>
    4577:	f3 0f 6f 05 01 c0 00 	movdqu 0xc001(%rip),%xmm0        # 10580 <cpu>
    457e:	00 
    457f:	0f 11 02             	movups %xmm0,(%rdx)
    4582:	f3 0f 6f 0d 06 c0 00 	movdqu 0xc006(%rip),%xmm1        # 10590 <cpu+0x10>
    4589:	00 
    458a:	0f 11 4a 10          	movups %xmm1,0x10(%rdx)
    458e:	f3 0f 6f 15 0a c0 00 	movdqu 0xc00a(%rip),%xmm2        # 105a0 <cpu+0x20>
    4595:	00 
    4596:	0f 11 52 20          	movups %xmm2,0x20(%rdx)
    459a:	f3 0f 6f 1d 0e c0 00 	movdqu 0xc00e(%rip),%xmm3        # 105b0 <cpu+0x30>
    45a1:	00 
    45a2:	0f 11 5a 30          	movups %xmm3,0x30(%rdx)
    45a6:	f3 0f 6f 25 12 c0 00 	movdqu 0xc012(%rip),%xmm4        # 105c0 <cpu+0x40>
    45ad:	00 
    45ae:	0f 11 62 40          	movups %xmm4,0x40(%rdx)
    45b2:	f3 0f 6f 2d 16 c0 00 	movdqu 0xc016(%rip),%xmm5        # 105d0 <cpu+0x50>
    45b9:	00 
    45ba:	0f 11 6a 50          	movups %xmm5,0x50(%rdx)
    45be:	f3 0f 6f 35 1a c0 00 	movdqu 0xc01a(%rip),%xmm6        # 105e0 <cpu+0x60>
    45c5:	00 
    45c6:	0f 11 72 60          	movups %xmm6,0x60(%rdx)
    45ca:	f3 0f 6f 3d 1e c0 00 	movdqu 0xc01e(%rip),%xmm7        # 105f0 <cpu+0x70>
    45d1:	00 
    45d2:	0f 11 7a 70          	movups %xmm7,0x70(%rdx)
    45d6:	8b 05 24 c0 00 00    	mov    0xc024(%rip),%eax        # 10600 <cpu+0x80>
    45dc:	89 47 08             	mov    %eax,0x8(%rdi)
    45df:	c3                   	ret    
    45e0:	48 8d 0d 99 bf 00 00 	lea    0xbf99(%rip),%rcx        # 10580 <cpu>
    45e7:	48 8d 72 04          	lea    0x4(%rdx),%rsi
    45eb:	48 89 c8             	mov    %rcx,%rax
    45ee:	48 29 f0             	sub    %rsi,%rax
    45f1:	48 83 f8 08          	cmp    $0x8,%rax
    45f5:	76 69                	jbe    4660 <difftest_regcpy+0x110>
    45f7:	f3 0f 6f 02          	movdqu (%rdx),%xmm0
    45fb:	f3 0f 6f 4a 10       	movdqu 0x10(%rdx),%xmm1
    4600:	f3 0f 6f 52 20       	movdqu 0x20(%rdx),%xmm2
    4605:	f3 0f 6f 5a 30       	movdqu 0x30(%rdx),%xmm3
    460a:	f3 0f 6f 62 40       	movdqu 0x40(%rdx),%xmm4
    460f:	f3 0f 6f 6a 50       	movdqu 0x50(%rdx),%xmm5
    4614:	0f 11 05 65 bf 00 00 	movups %xmm0,0xbf65(%rip)        # 10580 <cpu>
    461b:	f3 0f 6f 72 60       	movdqu 0x60(%rdx),%xmm6
    4620:	f3 0f 6f 7a 70       	movdqu 0x70(%rdx),%xmm7
    4625:	0f 11 0d 64 bf 00 00 	movups %xmm1,0xbf64(%rip)        # 10590 <cpu+0x10>
    462c:	0f 11 15 6d bf 00 00 	movups %xmm2,0xbf6d(%rip)        # 105a0 <cpu+0x20>
    4633:	0f 11 1d 76 bf 00 00 	movups %xmm3,0xbf76(%rip)        # 105b0 <cpu+0x30>
    463a:	0f 11 25 7f bf 00 00 	movups %xmm4,0xbf7f(%rip)        # 105c0 <cpu+0x40>
    4641:	0f 11 2d 88 bf 00 00 	movups %xmm5,0xbf88(%rip)        # 105d0 <cpu+0x50>
    4648:	0f 11 35 91 bf 00 00 	movups %xmm6,0xbf91(%rip)        # 105e0 <cpu+0x60>
    464f:	0f 11 3d 9a bf 00 00 	movups %xmm7,0xbf9a(%rip)        # 105f0 <cpu+0x70>
    4656:	8b 47 08             	mov    0x8(%rdi),%eax
    4659:	89 05 a1 bf 00 00    	mov    %eax,0xbfa1(%rip)        # 10600 <cpu+0x80>
    465f:	c3                   	ret    
    4660:	31 c0                	xor    %eax,%eax
    4662:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
    4668:	8b 34 02             	mov    (%rdx,%rax,1),%esi
    466b:	89 34 01             	mov    %esi,(%rcx,%rax,1)
    466e:	48 83 c0 04          	add    $0x4,%rax
    4672:	48 3d 80 00 00 00    	cmp    $0x80,%rax
    4678:	75 ee                	jne    4668 <difftest_regcpy+0x118>
    467a:	8b 47 08             	mov    0x8(%rdi),%eax
    467d:	89 05 7d bf 00 00    	mov    %eax,0xbf7d(%rip)        # 10600 <cpu+0x80>
    4683:	c3                   	ret    
    4684:	31 c0                	xor    %eax,%eax
    4686:	48 8d 0d f3 be 00 00 	lea    0xbef3(%rip),%rcx        # 10580 <cpu>
    468d:	0f 1f 00             	nopl   (%rax)
    4690:	8b 34 01             	mov    (%rcx,%rax,1),%esi
    4693:	89 34 02             	mov    %esi,(%rdx,%rax,1)
    4696:	48 83 c0 04          	add    $0x4,%rax
    469a:	48 3d 80 00 00 00    	cmp    $0x80,%rax
    46a0:	75 ee                	jne    4690 <difftest_regcpy+0x140>
    46a2:	8b 05 58 bf 00 00    	mov    0xbf58(%rip),%eax        # 10600 <cpu+0x80>
    46a8:	89 47 08             	mov    %eax,0x8(%rdi)
    46ab:	c3                   	ret    
    46ac:	0f 1f 40 00          	nopl   0x0(%rax)

00000000000046b0 <difftest_regcmp>:
    46b0:	f3 0f 1e fa          	endbr64 
    46b4:	41 57                	push   %r15
    46b6:	b8 01 00 00 00       	mov    $0x1,%eax
    46bb:	49 89 ff             	mov    %rdi,%r15
    46be:	41 56                	push   %r14
    46c0:	41 55                	push   %r13
    46c2:	41 54                	push   %r12
    46c4:	55                   	push   %rbp
    46c5:	53                   	push   %rbx
    46c6:	48 83 ec 18          	sub    $0x18,%rsp
    46ca:	8b 0d 30 bf 00 00    	mov    0xbf30(%rip),%ecx        # 10600 <cpu+0x80>
    46d0:	39 4f 08             	cmp    %ecx,0x8(%rdi)
    46d3:	74 61                	je     4736 <difftest_regcmp+0x86>
    46d5:	48 8d 35 4c 4d 00 00 	lea    0x4d4c(%rip),%rsi        # 9428 <__PRETTY_FUNCTION__.1+0x240>
    46dc:	bf 01 00 00 00       	mov    $0x1,%edi
    46e1:	31 c0                	xor    %eax,%eax
    46e3:	e8 68 dc ff ff       	call   2350 <__printf_chk@plt>
    46e8:	48 8d 2d 4a 4d 00 00 	lea    0x4d4a(%rip),%rbp        # 9439 <__PRETTY_FUNCTION__.1+0x251>
    46ef:	8b 15 0b bf 00 00    	mov    0xbf0b(%rip),%edx        # 10600 <cpu+0x80>
    46f5:	31 c0                	xor    %eax,%eax
    46f7:	48 89 ee             	mov    %rbp,%rsi
    46fa:	bf 01 00 00 00       	mov    $0x1,%edi
    46ff:	e8 4c dc ff ff       	call   2350 <__printf_chk@plt>
    4704:	48 8d 35 3e 4d 00 00 	lea    0x4d3e(%rip),%rsi        # 9449 <__PRETTY_FUNCTION__.1+0x261>
    470b:	bf 01 00 00 00       	mov    $0x1,%edi
    4710:	31 c0                	xor    %eax,%eax
    4712:	e8 39 dc ff ff       	call   2350 <__printf_chk@plt>
    4717:	41 8b 57 08          	mov    0x8(%r15),%edx
    471b:	48 89 ee             	mov    %rbp,%rsi
    471e:	31 c0                	xor    %eax,%eax
    4720:	bf 01 00 00 00       	mov    $0x1,%edi
    4725:	e8 26 dc ff ff       	call   2350 <__printf_chk@plt>
    472a:	bf 0a 00 00 00       	mov    $0xa,%edi
    472f:	e8 4c de ff ff       	call   2580 <putchar@plt>
    4734:	31 c0                	xor    %eax,%eax
    4736:	31 db                	xor    %ebx,%ebx
    4738:	4c 8d 25 41 be 00 00 	lea    0xbe41(%rip),%r12        # 10580 <cpu>
    473f:	4c 8d 35 0a 4d 00 00 	lea    0x4d0a(%rip),%r14        # 9450 <__PRETTY_FUNCTION__.1+0x268>
    4746:	4c 8d 2d 06 4d 00 00 	lea    0x4d06(%rip),%r13        # 9453 <__PRETTY_FUNCTION__.1+0x26b>
    474d:	48 8d 2d e5 4c 00 00 	lea    0x4ce5(%rip),%rbp        # 9439 <__PRETTY_FUNCTION__.1+0x251>
    4754:	0f 1f 40 00          	nopl   0x0(%rax)
    4758:	49 8b 0f             	mov    (%r15),%rcx
    475b:	41 8b 3c 9c          	mov    (%r12,%rbx,4),%edi
    475f:	89 5c 24 0c          	mov    %ebx,0xc(%rsp)
    4763:	39 3c 99             	cmp    %edi,(%rcx,%rbx,4)
    4766:	74 7c                	je     47e4 <difftest_regcmp+0x134>
    4768:	4c 89 f6             	mov    %r14,%rsi
    476b:	bf 01 00 00 00       	mov    $0x1,%edi
    4770:	31 c0                	xor    %eax,%eax
    4772:	e8 d9 db ff ff       	call   2350 <__printf_chk@plt>
    4777:	8b 54 24 0c          	mov    0xc(%rsp),%edx
    477b:	4c 89 ee             	mov    %r13,%rsi
    477e:	31 c0                	xor    %eax,%eax
    4780:	bf 01 00 00 00       	mov    $0x1,%edi
    4785:	e8 c6 db ff ff       	call   2350 <__printf_chk@plt>
    478a:	48 8d 35 99 4c 00 00 	lea    0x4c99(%rip),%rsi        # 942a <__PRETTY_FUNCTION__.1+0x242>
    4791:	bf 01 00 00 00       	mov    $0x1,%edi
    4796:	31 c0                	xor    %eax,%eax
    4798:	e8 b3 db ff ff       	call   2350 <__printf_chk@plt>
    479d:	41 8b 14 9c          	mov    (%r12,%rbx,4),%edx
    47a1:	48 89 ee             	mov    %rbp,%rsi
    47a4:	31 c0                	xor    %eax,%eax
    47a6:	bf 01 00 00 00       	mov    $0x1,%edi
    47ab:	e8 a0 db ff ff       	call   2350 <__printf_chk@plt>
    47b0:	48 8d 35 92 4c 00 00 	lea    0x4c92(%rip),%rsi        # 9449 <__PRETTY_FUNCTION__.1+0x261>
    47b7:	bf 01 00 00 00       	mov    $0x1,%edi
    47bc:	31 c0                	xor    %eax,%eax
    47be:	e8 8d db ff ff       	call   2350 <__printf_chk@plt>
    47c3:	49 8b 07             	mov    (%r15),%rax
    47c6:	48 89 ee             	mov    %rbp,%rsi
    47c9:	bf 01 00 00 00       	mov    $0x1,%edi
    47ce:	8b 14 98             	mov    (%rax,%rbx,4),%edx
    47d1:	31 c0                	xor    %eax,%eax
    47d3:	e8 78 db ff ff       	call   2350 <__printf_chk@plt>
    47d8:	bf 0a 00 00 00       	mov    $0xa,%edi
    47dd:	e8 9e dd ff ff       	call   2580 <putchar@plt>
    47e2:	31 c0                	xor    %eax,%eax
    47e4:	48 83 c3 01          	add    $0x1,%rbx
    47e8:	48 83 fb 20          	cmp    $0x20,%rbx
    47ec:	0f 85 66 ff ff ff    	jne    4758 <difftest_regcmp+0xa8>
    47f2:	48 83 c4 18          	add    $0x18,%rsp
    47f6:	5b                   	pop    %rbx
    47f7:	5d                   	pop    %rbp
    47f8:	41 5c                	pop    %r12
    47fa:	41 5d                	pop    %r13
    47fc:	41 5e                	pop    %r14
    47fe:	41 5f                	pop    %r15
    4800:	c3                   	ret    
    4801:	66 66 2e 0f 1f 84 00 	data16 cs nopw 0x0(%rax,%rax,1)
    4808:	00 00 00 00 
    480c:	0f 1f 40 00          	nopl   0x0(%rax)

0000000000004810 <difftest_exec>:
    4810:	f3 0f 1e fa          	endbr64 
    4814:	e9 d7 02 00 00       	jmp    4af0 <cpu_exec>
    4819:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000004820 <difftest_raise_intr>:
    4820:	f3 0f 1e fa          	endbr64 
    4824:	50                   	push   %rax
    4825:	58                   	pop    %rax
    4826:	48 8d 0d 53 4c 00 00 	lea    0x4c53(%rip),%rcx        # 9480 <__PRETTY_FUNCTION__.0>
    482d:	ba 85 00 00 00       	mov    $0x85,%edx
    4832:	48 8d 35 28 4c 00 00 	lea    0x4c28(%rip),%rsi        # 9461 <__PRETTY_FUNCTION__.1+0x279>
    4839:	48 8d 3d f0 47 00 00 	lea    0x47f0(%rip),%rdi        # 9030 <_IO_stdin_used+0x30>
    4840:	48 83 ec 08          	sub    $0x8,%rsp
    4844:	e8 b7 db ff ff       	call   2400 <__assert_fail@plt>
    4849:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000004850 <difftest_init>:
    4850:	f3 0f 1e fa          	endbr64 
    4854:	48 83 ec 08          	sub    $0x8,%rsp
    4858:	31 c0                	xor    %eax,%eax
    485a:	e8 c1 2f 00 00       	call   7820 <init_rand>
    485f:	31 c0                	xor    %eax,%eax
    4861:	e8 ea fa ff ff       	call   4350 <init_isa>
    4866:	31 c0                	xor    %eax,%eax
    4868:	e8 73 30 00 00       	call   78e0 <init_mem>
    486d:	31 d2                	xor    %edx,%edx
    486f:	be 00 00 00 1c       	mov    $0x1c000000,%esi
    4874:	31 ff                	xor    %edi,%edi
    4876:	48 83 c4 08          	add    $0x8,%rsp
    487a:	e9 61 3d 00 00       	jmp    85e0 <set_nemu_state>
    487f:	90                   	nop

0000000000004880 <statistic>:
    4880:	41 55                	push   %r13
    4882:	48 8d 35 c7 54 00 00 	lea    0x54c7(%rip),%rsi        # 9d50 <__PRETTY_FUNCTION__.0+0x200>
    4889:	bf 01 00 00 00       	mov    $0x1,%edi
    488e:	4c 8d 2d 5b 4c 00 00 	lea    0x4c5b(%rip),%r13        # 94f0 <__PRETTY_FUNCTION__.0+0x70>
    4895:	41 54                	push   %r12
    4897:	4c 8d 25 f6 4b 00 00 	lea    0x4bf6(%rip),%r12        # 9494 <__PRETTY_FUNCTION__.0+0x14>
    489e:	48 83 ec 08          	sub    $0x8,%rsp
    48a2:	e8 79 db ff ff       	call   2420 <setlocale@plt>
    48a7:	31 c0                	xor    %eax,%eax
    48a9:	b9 7a 00 00 00       	mov    $0x7a,%ecx
    48ae:	4c 89 e2             	mov    %r12,%rdx
    48b1:	4c 8b 0d 50 bd 00 00 	mov    0xbd50(%rip),%r9        # 10608 <g_timer>
    48b8:	4c 8d 05 d9 4d 00 00 	lea    0x4dd9(%rip),%r8        # 9698 <__func__.1>
    48bf:	4c 89 ee             	mov    %r13,%rsi
    48c2:	bf 01 00 00 00       	mov    $0x1,%edi
    48c7:	e8 84 da ff ff       	call   2350 <__printf_chk@plt>
    48cc:	31 c0                	xor    %eax,%eax
    48ce:	e8 3d 2f 00 00       	call   7810 <log_enable>
    48d3:	84 c0                	test   %al,%al
    48d5:	0f 85 55 01 00 00    	jne    4a30 <statistic+0x1b0>
    48db:	31 c0                	xor    %eax,%eax
    48dd:	b9 7b 00 00 00       	mov    $0x7b,%ecx
    48e2:	4c 89 e2             	mov    %r12,%rdx
    48e5:	bf 01 00 00 00       	mov    $0x1,%edi
    48ea:	4c 8b 0d 6f bc 00 00 	mov    0xbc6f(%rip),%r9        # 10560 <g_nr_guest_inst>
    48f1:	4c 8d 2d 30 4c 00 00 	lea    0x4c30(%rip),%r13        # 9528 <__PRETTY_FUNCTION__.0+0xa8>
    48f8:	4c 8d 05 99 4d 00 00 	lea    0x4d99(%rip),%r8        # 9698 <__func__.1>
    48ff:	4c 89 ee             	mov    %r13,%rsi
    4902:	e8 49 da ff ff       	call   2350 <__printf_chk@plt>
    4907:	31 c0                	xor    %eax,%eax
    4909:	e8 02 2f 00 00       	call   7810 <log_enable>
    490e:	84 c0                	test   %al,%al
    4910:	0f 85 d2 00 00 00    	jne    49e8 <statistic+0x168>
    4916:	48 8b 0d eb bc 00 00 	mov    0xbceb(%rip),%rcx        # 10608 <g_timer>
    491d:	48 85 c9             	test   %rcx,%rcx
    4920:	74 56                	je     4978 <statistic+0xf8>
    4922:	31 d2                	xor    %edx,%edx
    4924:	4c 8d 2d 35 4c 00 00 	lea    0x4c35(%rip),%r13        # 9560 <__PRETTY_FUNCTION__.0+0xe0>
    492b:	4c 8d 05 66 4d 00 00 	lea    0x4d66(%rip),%r8        # 9698 <__func__.1>
    4932:	bf 01 00 00 00       	mov    $0x1,%edi
    4937:	48 69 05 1e bc 00 00 	imul   $0xf4240,0xbc1e(%rip),%rax        # 10560 <g_nr_guest_inst>
    493e:	40 42 0f 00 
    4942:	4c 89 ee             	mov    %r13,%rsi
    4945:	48 f7 f1             	div    %rcx
    4948:	b9 7c 00 00 00       	mov    $0x7c,%ecx
    494d:	4c 89 e2             	mov    %r12,%rdx
    4950:	49 89 c1             	mov    %rax,%r9
    4953:	31 c0                	xor    %eax,%eax
    4955:	e8 f6 d9 ff ff       	call   2350 <__printf_chk@plt>
    495a:	31 c0                	xor    %eax,%eax
    495c:	e8 af 2e 00 00       	call   7810 <log_enable>
    4961:	84 c0                	test   %al,%al
    4963:	0f 85 0f 01 00 00    	jne    4a78 <statistic+0x1f8>
    4969:	48 83 c4 08          	add    $0x8,%rsp
    496d:	41 5c                	pop    %r12
    496f:	41 5d                	pop    %r13
    4971:	c3                   	ret    
    4972:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
    4978:	31 c0                	xor    %eax,%eax
    497a:	b9 7d 00 00 00       	mov    $0x7d,%ecx
    497f:	4c 89 e2             	mov    %r12,%rdx
    4982:	bf 01 00 00 00       	mov    $0x1,%edi
    4987:	4c 8d 2d 12 4c 00 00 	lea    0x4c12(%rip),%r13        # 95a0 <__PRETTY_FUNCTION__.0+0x120>
    498e:	4c 8d 05 03 4d 00 00 	lea    0x4d03(%rip),%r8        # 9698 <__func__.1>
    4995:	4c 89 ee             	mov    %r13,%rsi
    4998:	e8 b3 d9 ff ff       	call   2350 <__printf_chk@plt>
    499d:	31 c0                	xor    %eax,%eax
    499f:	e8 6c 2e 00 00       	call   7810 <log_enable>
    49a4:	84 c0                	test   %al,%al
    49a6:	74 c1                	je     4969 <statistic+0xe9>
    49a8:	48 8b 3d b9 0b 01 00 	mov    0x10bb9(%rip),%rdi        # 15568 <log_fp>
    49af:	4c 89 e1             	mov    %r12,%rcx
    49b2:	4c 89 ea             	mov    %r13,%rdx
    49b5:	31 c0                	xor    %eax,%eax
    49b7:	4c 8d 0d da 4c 00 00 	lea    0x4cda(%rip),%r9        # 9698 <__func__.1>
    49be:	41 b8 7d 00 00 00    	mov    $0x7d,%r8d
    49c4:	be 01 00 00 00       	mov    $0x1,%esi
    49c9:	e8 32 dc ff ff       	call   2600 <__fprintf_chk@plt>
    49ce:	48 8b 3d 93 0b 01 00 	mov    0x10b93(%rip),%rdi        # 15568 <log_fp>
    49d5:	48 83 c4 08          	add    $0x8,%rsp
    49d9:	41 5c                	pop    %r12
    49db:	41 5d                	pop    %r13
    49dd:	e9 1e db ff ff       	jmp    2500 <fflush@plt>
    49e2:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
    49e8:	48 83 ec 08          	sub    $0x8,%rsp
    49ec:	ff 35 6e bb 00 00    	push   0xbb6e(%rip)        # 10560 <g_nr_guest_inst>
    49f2:	4c 89 ea             	mov    %r13,%rdx
    49f5:	4c 89 e1             	mov    %r12,%rcx
    49f8:	48 8b 3d 69 0b 01 00 	mov    0x10b69(%rip),%rdi        # 15568 <log_fp>
    49ff:	4c 8d 0d 92 4c 00 00 	lea    0x4c92(%rip),%r9        # 9698 <__func__.1>
    4a06:	41 b8 7b 00 00 00    	mov    $0x7b,%r8d
    4a0c:	31 c0                	xor    %eax,%eax
    4a0e:	be 01 00 00 00       	mov    $0x1,%esi
    4a13:	e8 e8 db ff ff       	call   2600 <__fprintf_chk@plt>
    4a18:	48 8b 3d 49 0b 01 00 	mov    0x10b49(%rip),%rdi        # 15568 <log_fp>
    4a1f:	e8 dc da ff ff       	call   2500 <fflush@plt>
    4a24:	58                   	pop    %rax
    4a25:	5a                   	pop    %rdx
    4a26:	e9 eb fe ff ff       	jmp    4916 <statistic+0x96>
    4a2b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
    4a30:	48 83 ec 08          	sub    $0x8,%rsp
    4a34:	ff 35 ce bb 00 00    	push   0xbbce(%rip)        # 10608 <g_timer>
    4a3a:	4c 89 e1             	mov    %r12,%rcx
    4a3d:	4c 89 ea             	mov    %r13,%rdx
    4a40:	48 8b 3d 21 0b 01 00 	mov    0x10b21(%rip),%rdi        # 15568 <log_fp>
    4a47:	be 01 00 00 00       	mov    $0x1,%esi
    4a4c:	41 b8 7a 00 00 00    	mov    $0x7a,%r8d
    4a52:	31 c0                	xor    %eax,%eax
    4a54:	4c 8d 0d 3d 4c 00 00 	lea    0x4c3d(%rip),%r9        # 9698 <__func__.1>
    4a5b:	e8 a0 db ff ff       	call   2600 <__fprintf_chk@plt>
    4a60:	48 8b 3d 01 0b 01 00 	mov    0x10b01(%rip),%rdi        # 15568 <log_fp>
    4a67:	e8 94 da ff ff       	call   2500 <fflush@plt>
    4a6c:	59                   	pop    %rcx
    4a6d:	5e                   	pop    %rsi
    4a6e:	e9 68 fe ff ff       	jmp    48db <statistic+0x5b>
    4a73:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
    4a78:	31 d2                	xor    %edx,%edx
    4a7a:	48 83 ec 08          	sub    $0x8,%rsp
    4a7e:	48 8b 3d e3 0a 01 00 	mov    0x10ae3(%rip),%rdi        # 15568 <log_fp>
    4a85:	4c 89 e1             	mov    %r12,%rcx
    4a88:	48 69 05 cd ba 00 00 	imul   $0xf4240,0xbacd(%rip),%rax        # 10560 <g_nr_guest_inst>
    4a8f:	40 42 0f 00 
    4a93:	41 b8 7c 00 00 00    	mov    $0x7c,%r8d
    4a99:	be 01 00 00 00       	mov    $0x1,%esi
    4a9e:	4c 8d 0d f3 4b 00 00 	lea    0x4bf3(%rip),%r9        # 9698 <__func__.1>
    4aa5:	48 f7 35 5c bb 00 00 	divq   0xbb5c(%rip)        # 10608 <g_timer>
    4aac:	4c 89 ea             	mov    %r13,%rdx
    4aaf:	50                   	push   %rax
    4ab0:	31 c0                	xor    %eax,%eax
    4ab2:	e8 49 db ff ff       	call   2600 <__fprintf_chk@plt>
    4ab7:	48 8b 3d aa 0a 01 00 	mov    0x10aaa(%rip),%rdi        # 15568 <log_fp>
    4abe:	48 83 c4 18          	add    $0x18,%rsp
    4ac2:	41 5c                	pop    %r12
    4ac4:	41 5d                	pop    %r13
    4ac6:	e9 35 da ff ff       	jmp    2500 <fflush@plt>
    4acb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000004ad0 <assert_fail_msg>:
    4ad0:	f3 0f 1e fa          	endbr64 
    4ad4:	48 83 ec 08          	sub    $0x8,%rsp
    4ad8:	31 c0                	xor    %eax,%eax
    4ada:	e8 01 f7 ff ff       	call   41e0 <isa_reg_display>
    4adf:	31 c0                	xor    %eax,%eax
    4ae1:	48 83 c4 08          	add    $0x8,%rsp
    4ae5:	e9 96 fd ff ff       	jmp    4880 <statistic>
    4aea:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

0000000000004af0 <cpu_exec>:
    4af0:	f3 0f 1e fa          	endbr64 
    4af4:	41 55                	push   %r13
    4af6:	41 54                	push   %r12
    4af8:	55                   	push   %rbp
    4af9:	53                   	push   %rbx
    4afa:	48 81 ec a8 00 00 00 	sub    $0xa8,%rsp
    4b01:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    4b08:	00 00 
    4b0a:	48 89 84 24 98 00 00 	mov    %rax,0x98(%rsp)
    4b11:	00 
    4b12:	8b 05 20 96 00 00    	mov    0x9620(%rip),%eax        # e138 <nemu_state>
    4b18:	83 e8 02             	sub    $0x2,%eax
    4b1b:	83 f8 01             	cmp    $0x1,%eax
    4b1e:	0f 86 0c 01 00 00    	jbe    4c30 <cpu_exec+0x140>
    4b24:	c7 05 0a 96 00 00 00 	movl   $0x0,0x960a(%rip)        # e138 <nemu_state>
    4b2b:	00 00 00 
    4b2e:	31 c0                	xor    %eax,%eax
    4b30:	48 89 fb             	mov    %rdi,%rbx
    4b33:	e8 f8 2a 00 00       	call   7630 <get_time>
    4b38:	49 89 c5             	mov    %rax,%r13
    4b3b:	48 85 db             	test   %rbx,%rbx
    4b3e:	74 52                	je     4b92 <cpu_exec+0xa2>
    4b40:	49 89 e4             	mov    %rsp,%r12
    4b43:	48 8d 2d ee 95 00 00 	lea    0x95ee(%rip),%rbp        # e138 <nemu_state>
    4b4a:	eb 11                	jmp    4b5d <cpu_exec+0x6d>
    4b4c:	0f 1f 40 00          	nopl   0x0(%rax)
    4b50:	31 c0                	xor    %eax,%eax
    4b52:	e8 19 dc ff ff       	call   2770 <device_update>
    4b57:	48 83 eb 01          	sub    $0x1,%rbx
    4b5b:	74 35                	je     4b92 <cpu_exec+0xa2>
    4b5d:	66 0f 6e 0d 9b ba 00 	movd   0xba9b(%rip),%xmm1        # 10600 <cpu+0x80>
    4b64:	00 
    4b65:	4c 89 e7             	mov    %r12,%rdi
    4b68:	66 0f 70 c1 e0       	pshufd $0xe0,%xmm1,%xmm0
    4b6d:	66 0f d6 04 24       	movq   %xmm0,(%rsp)
    4b72:	e8 b9 f5 ff ff       	call   4130 <isa_exec_once>
    4b77:	8b 44 24 08          	mov    0x8(%rsp),%eax
    4b7b:	44 8b 4d 00          	mov    0x0(%rbp),%r9d
    4b7f:	48 83 05 d9 b9 00 00 	addq   $0x1,0xb9d9(%rip)        # 10560 <g_nr_guest_inst>
    4b86:	01 
    4b87:	89 05 73 ba 00 00    	mov    %eax,0xba73(%rip)        # 10600 <cpu+0x80>
    4b8d:	45 85 c9             	test   %r9d,%r9d
    4b90:	74 be                	je     4b50 <cpu_exec+0x60>
    4b92:	31 c0                	xor    %eax,%eax
    4b94:	e8 97 2a 00 00       	call   7630 <get_time>
    4b99:	49 89 c0             	mov    %rax,%r8
    4b9c:	48 8b 05 65 ba 00 00 	mov    0xba65(%rip),%rax        # 10608 <g_timer>
    4ba3:	4c 29 e8             	sub    %r13,%rax
    4ba6:	4c 01 c0             	add    %r8,%rax
    4ba9:	48 89 05 58 ba 00 00 	mov    %rax,0xba58(%rip)        # 10608 <g_timer>
    4bb0:	8b 05 82 95 00 00    	mov    0x9582(%rip),%eax        # e138 <nemu_state>
    4bb6:	83 f8 03             	cmp    $0x3,%eax
    4bb9:	7f 45                	jg     4c00 <cpu_exec+0x110>
    4bbb:	83 f8 01             	cmp    $0x1,%eax
    4bbe:	0f 8f 9c 00 00 00    	jg     4c60 <cpu_exec+0x170>
    4bc4:	85 c0                	test   %eax,%eax
    4bc6:	75 0a                	jne    4bd2 <cpu_exec+0xe2>
    4bc8:	c7 05 66 95 00 00 01 	movl   $0x1,0x9566(%rip)        # e138 <nemu_state>
    4bcf:	00 00 00 
    4bd2:	48 8b 84 24 98 00 00 	mov    0x98(%rsp),%rax
    4bd9:	00 
    4bda:	64 48 2b 04 25 28 00 	sub    %fs:0x28,%rax
    4be1:	00 00 
    4be3:	0f 85 52 01 00 00    	jne    4d3b <cpu_exec+0x24b>
    4be9:	48 81 c4 a8 00 00 00 	add    $0xa8,%rsp
    4bf0:	5b                   	pop    %rbx
    4bf1:	5d                   	pop    %rbp
    4bf2:	41 5c                	pop    %r12
    4bf4:	41 5d                	pop    %r13
    4bf6:	c3                   	ret    
    4bf7:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
    4bfe:	00 00 
    4c00:	83 f8 04             	cmp    $0x4,%eax
    4c03:	75 cd                	jne    4bd2 <cpu_exec+0xe2>
    4c05:	48 8b 84 24 98 00 00 	mov    0x98(%rsp),%rax
    4c0c:	00 
    4c0d:	64 48 2b 04 25 28 00 	sub    %fs:0x28,%rax
    4c14:	00 00 
    4c16:	0f 85 1f 01 00 00    	jne    4d3b <cpu_exec+0x24b>
    4c1c:	48 81 c4 a8 00 00 00 	add    $0xa8,%rsp
    4c23:	31 c0                	xor    %eax,%eax
    4c25:	5b                   	pop    %rbx
    4c26:	5d                   	pop    %rbp
    4c27:	41 5c                	pop    %r12
    4c29:	41 5d                	pop    %r13
    4c2b:	e9 50 fc ff ff       	jmp    4880 <statistic>
    4c30:	48 8b 84 24 98 00 00 	mov    0x98(%rsp),%rax
    4c37:	00 
    4c38:	64 48 2b 04 25 28 00 	sub    %fs:0x28,%rax
    4c3f:	00 00 
    4c41:	0f 85 f4 00 00 00    	jne    4d3b <cpu_exec+0x24b>
    4c47:	48 81 c4 a8 00 00 00 	add    $0xa8,%rsp
    4c4e:	48 8d 3d b3 49 00 00 	lea    0x49b3(%rip),%rdi        # 9608 <__PRETTY_FUNCTION__.0+0x188>
    4c55:	5b                   	pop    %rbx
    4c56:	5d                   	pop    %rbp
    4c57:	41 5c                	pop    %r12
    4c59:	41 5d                	pop    %r13
    4c5b:	e9 70 d9 ff ff       	jmp    25d0 <puts@plt>
    4c60:	8b 15 d6 94 00 00    	mov    0x94d6(%rip),%edx        # e13c <nemu_state+0x4>
    4c66:	4c 8d 0d 52 48 00 00 	lea    0x4852(%rip),%r9        # 94bf <__PRETTY_FUNCTION__.0+0x3f>
    4c6d:	83 f8 03             	cmp    $0x3,%eax
    4c70:	74 1c                	je     4c8e <cpu_exec+0x19e>
    4c72:	44 8b 05 c7 94 00 00 	mov    0x94c7(%rip),%r8d        # e140 <nemu_state+0x8>
    4c79:	4c 8d 0d 50 48 00 00 	lea    0x4850(%rip),%r9        # 94d0 <__PRETTY_FUNCTION__.0+0x50>
    4c80:	48 8d 05 20 48 00 00 	lea    0x4820(%rip),%rax        # 94a7 <__PRETTY_FUNCTION__.0+0x27>
    4c87:	45 85 c0             	test   %r8d,%r8d
    4c8a:	4c 0f 45 c8          	cmovne %rax,%r9
    4c8e:	48 83 ec 08          	sub    $0x8,%rsp
    4c92:	4c 8d 2d fb 47 00 00 	lea    0x47fb(%rip),%r13        # 9494 <__PRETTY_FUNCTION__.0+0x14>
    4c99:	31 c0                	xor    %eax,%eax
    4c9b:	52                   	push   %rdx
    4c9c:	bf 01 00 00 00       	mov    $0x1,%edi
    4ca1:	4c 89 ea             	mov    %r13,%rdx
    4ca4:	4c 8d 25 ad 49 00 00 	lea    0x49ad(%rip),%r12        # 9658 <__PRETTY_FUNCTION__.0+0x1d8>
    4cab:	4c 89 e6             	mov    %r12,%rsi
    4cae:	4c 8d 05 d3 49 00 00 	lea    0x49d3(%rip),%r8        # 9688 <__func__.0>
    4cb5:	b9 9a 00 00 00       	mov    $0x9a,%ecx
    4cba:	e8 91 d6 ff ff       	call   2350 <__printf_chk@plt>
    4cbf:	31 c0                	xor    %eax,%eax
    4cc1:	e8 4a 2b 00 00       	call   7810 <log_enable>
    4cc6:	5e                   	pop    %rsi
    4cc7:	5f                   	pop    %rdi
    4cc8:	84 c0                	test   %al,%al
    4cca:	0f 84 35 ff ff ff    	je     4c05 <cpu_exec+0x115>
    4cd0:	83 3d 61 94 00 00 03 	cmpl   $0x3,0x9461(%rip)        # e138 <nemu_state>
    4cd7:	8b 15 5f 94 00 00    	mov    0x945f(%rip),%edx        # e13c <nemu_state+0x4>
    4cdd:	48 8d 05 db 47 00 00 	lea    0x47db(%rip),%rax        # 94bf <__PRETTY_FUNCTION__.0+0x3f>
    4ce4:	74 1a                	je     4d00 <cpu_exec+0x210>
    4ce6:	8b 0d 54 94 00 00    	mov    0x9454(%rip),%ecx        # e140 <nemu_state+0x8>
    4cec:	48 8d 05 dd 47 00 00 	lea    0x47dd(%rip),%rax        # 94d0 <__PRETTY_FUNCTION__.0+0x50>
    4cf3:	85 c9                	test   %ecx,%ecx
    4cf5:	48 8d 0d ab 47 00 00 	lea    0x47ab(%rip),%rcx        # 94a7 <__PRETTY_FUNCTION__.0+0x27>
    4cfc:	48 0f 45 c1          	cmovne %rcx,%rax
    4d00:	52                   	push   %rdx
    4d01:	48 8b 3d 60 08 01 00 	mov    0x10860(%rip),%rdi        # 15568 <log_fp>
    4d08:	4c 89 e2             	mov    %r12,%rdx
    4d0b:	4c 89 e9             	mov    %r13,%rcx
    4d0e:	50                   	push   %rax
    4d0f:	4c 8d 0d 72 49 00 00 	lea    0x4972(%rip),%r9        # 9688 <__func__.0>
    4d16:	41 b8 9a 00 00 00    	mov    $0x9a,%r8d
    4d1c:	31 c0                	xor    %eax,%eax
    4d1e:	be 01 00 00 00       	mov    $0x1,%esi
    4d23:	e8 d8 d8 ff ff       	call   2600 <__fprintf_chk@plt>
    4d28:	48 8b 3d 39 08 01 00 	mov    0x10839(%rip),%rdi        # 15568 <log_fp>
    4d2f:	e8 cc d7 ff ff       	call   2500 <fflush@plt>
    4d34:	58                   	pop    %rax
    4d35:	5a                   	pop    %rdx
    4d36:	e9 ca fe ff ff       	jmp    4c05 <cpu_exec+0x115>
    4d3b:	e8 80 d7 ff ff       	call   24c0 <__stack_chk_fail@plt>

0000000000004d40 <cmd_q>:
    4d40:	f3 0f 1e fa          	endbr64 
    4d44:	c7 05 ea 93 00 00 04 	movl   $0x4,0x93ea(%rip)        # e138 <nemu_state>
    4d4b:	00 00 00 
    4d4e:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    4d53:	c3                   	ret    
    4d54:	66 66 2e 0f 1f 84 00 	data16 cs nopw 0x0(%rax,%rax,1)
    4d5b:	00 00 00 00 
    4d5f:	90                   	nop

0000000000004d60 <cmd_xd>:
    4d60:	f3 0f 1e fa          	endbr64 
    4d64:	48 83 ec 08          	sub    $0x8,%rsp
    4d68:	31 c0                	xor    %eax,%eax
    4d6a:	e8 51 34 00 00       	call   81c0 <display_mmio_map>
    4d6f:	31 c0                	xor    %eax,%eax
    4d71:	48 83 c4 08          	add    $0x8,%rsp
    4d75:	c3                   	ret    
    4d76:	66 2e 0f 1f 84 00 00 	cs nopw 0x0(%rax,%rax,1)
    4d7d:	00 00 00 

0000000000004d80 <cmd_rst>:
    4d80:	f3 0f 1e fa          	endbr64 
    4d84:	48 83 ec 08          	sub    $0x8,%rsp
    4d88:	31 c0                	xor    %eax,%eax
    4d8a:	e8 51 28 00 00       	call   75e0 <reset_monitor>
    4d8f:	31 c0                	xor    %eax,%eax
    4d91:	48 83 c4 08          	add    $0x8,%rsp
    4d95:	c3                   	ret    
    4d96:	66 2e 0f 1f 84 00 00 	cs nopw 0x0(%rax,%rax,1)
    4d9d:	00 00 00 

0000000000004da0 <cmd_c>:
    4da0:	f3 0f 1e fa          	endbr64 
    4da4:	48 83 ec 08          	sub    $0x8,%rsp
    4da8:	48 c7 c7 ff ff ff ff 	mov    $0xffffffffffffffff,%rdi
    4daf:	e8 3c fd ff ff       	call   4af0 <cpu_exec>
    4db4:	31 c0                	xor    %eax,%eax
    4db6:	48 83 c4 08          	add    $0x8,%rsp
    4dba:	c3                   	ret    
    4dbb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000004dc0 <cmd_d>:
    4dc0:	f3 0f 1e fa          	endbr64 
    4dc4:	55                   	push   %rbp
    4dc5:	48 8d 35 d6 48 00 00 	lea    0x48d6(%rip),%rsi        # 96a2 <__func__.1+0xa>
    4dcc:	53                   	push   %rbx
    4dcd:	48 83 ec 28          	sub    $0x28,%rsp
    4dd1:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    4dd8:	00 00 
    4dda:	48 89 44 24 18       	mov    %rax,0x18(%rsp)
    4ddf:	31 c0                	xor    %eax,%eax
    4de1:	48 8d 6c 24 10       	lea    0x10(%rsp),%rbp
    4de6:	48 8d 4c 24 0c       	lea    0xc(%rsp),%rcx
    4deb:	48 89 ea             	mov    %rbp,%rdx
    4dee:	e8 9d d6 ff ff       	call   2490 <__isoc99_sscanf@plt>
    4df3:	85 c0                	test   %eax,%eax
    4df5:	0f 84 8d 00 00 00    	je     4e88 <cmd_d+0xc8>
    4dfb:	83 f8 01             	cmp    $0x1,%eax
    4dfe:	74 30                	je     4e30 <cmd_d+0x70>
    4e00:	83 f8 02             	cmp    $0x2,%eax
    4e03:	0f 84 97 00 00 00    	je     4ea0 <cmd_d+0xe0>
    4e09:	48 8b 44 24 18       	mov    0x18(%rsp),%rax
    4e0e:	64 48 2b 04 25 28 00 	sub    %fs:0x28,%rax
    4e15:	00 00 
    4e17:	0f 85 34 01 00 00    	jne    4f51 <cmd_d+0x191>
    4e1d:	48 83 c4 28          	add    $0x28,%rsp
    4e21:	31 c0                	xor    %eax,%eax
    4e23:	5b                   	pop    %rbx
    4e24:	5d                   	pop    %rbp
    4e25:	c3                   	ret    
    4e26:	66 2e 0f 1f 84 00 00 	cs nopw 0x0(%rax,%rax,1)
    4e2d:	00 00 00 
    4e30:	66 83 7c 24 10 77    	cmpw   $0x77,0x10(%rsp)
    4e36:	0f 84 a4 00 00 00    	je     4ee0 <cmd_d+0x120>
    4e3c:	66 83 7c 24 10 62    	cmpw   $0x62,0x10(%rsp)
    4e42:	75 c5                	jne    4e09 <cmd_d+0x49>
    4e44:	48 8d 3d 8a 48 00 00 	lea    0x488a(%rip),%rdi        # 96d5 <__func__.1+0x3d>
    4e4b:	e8 80 d7 ff ff       	call   25d0 <puts@plt>
    4e50:	31 c0                	xor    %eax,%eax
    4e52:	48 89 ee             	mov    %rbp,%rsi
    4e55:	48 8d 3d 3a 45 00 00 	lea    0x453a(%rip),%rdi        # 9396 <__PRETTY_FUNCTION__.1+0x1ae>
    4e5c:	e8 7f d6 ff ff       	call   24e0 <__isoc99_scanf@plt>
    4e61:	66 83 7c 24 10 79    	cmpw   $0x79,0x10(%rsp)
    4e67:	75 a0                	jne    4e09 <cmd_d+0x49>
    4e69:	31 db                	xor    %ebx,%ebx
    4e6b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
    4e70:	89 df                	mov    %ebx,%edi
    4e72:	83 c3 01             	add    $0x1,%ebx
    4e75:	e8 e6 0d 00 00       	call   5c60 <free_bp>
    4e7a:	83 fb 10             	cmp    $0x10,%ebx
    4e7d:	75 f1                	jne    4e70 <cmd_d+0xb0>
    4e7f:	eb 88                	jmp    4e09 <cmd_d+0x49>
    4e81:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    4e88:	48 8d 3d 19 48 00 00 	lea    0x4819(%rip),%rdi        # 96a8 <__func__.1+0x10>
    4e8f:	e8 3c d7 ff ff       	call   25d0 <puts@plt>
    4e94:	e9 70 ff ff ff       	jmp    4e09 <cmd_d+0x49>
    4e99:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    4ea0:	66 83 7c 24 10 77    	cmpw   $0x77,0x10(%rsp)
    4ea6:	0f 84 7c 00 00 00    	je     4f28 <cmd_d+0x168>
    4eac:	66 83 7c 24 10 62    	cmpw   $0x62,0x10(%rsp)
    4eb2:	0f 85 51 ff ff ff    	jne    4e09 <cmd_d+0x49>
    4eb8:	8b 7c 24 0c          	mov    0xc(%rsp),%edi
    4ebc:	e8 9f 0d 00 00       	call   5c60 <free_bp>
    4ec1:	84 c0                	test   %al,%al
    4ec3:	0f 85 40 ff ff ff    	jne    4e09 <cmd_d+0x49>
    4ec9:	48 8d 35 3b 48 00 00 	lea    0x483b(%rip),%rsi        # 970b <__func__.1+0x73>
    4ed0:	bf 01 00 00 00       	mov    $0x1,%edi
    4ed5:	e8 76 d4 ff ff       	call   2350 <__printf_chk@plt>
    4eda:	e9 2a ff ff ff       	jmp    4e09 <cmd_d+0x49>
    4edf:	90                   	nop
    4ee0:	48 8d 3d d1 47 00 00 	lea    0x47d1(%rip),%rdi        # 96b8 <__func__.1+0x20>
    4ee7:	e8 e4 d6 ff ff       	call   25d0 <puts@plt>
    4eec:	31 c0                	xor    %eax,%eax
    4eee:	48 89 ee             	mov    %rbp,%rsi
    4ef1:	48 8d 3d 9e 44 00 00 	lea    0x449e(%rip),%rdi        # 9396 <__PRETTY_FUNCTION__.1+0x1ae>
    4ef8:	e8 e3 d5 ff ff       	call   24e0 <__isoc99_scanf@plt>
    4efd:	66 83 7c 24 10 79    	cmpw   $0x79,0x10(%rsp)
    4f03:	0f 85 00 ff ff ff    	jne    4e09 <cmd_d+0x49>
    4f09:	31 db                	xor    %ebx,%ebx
    4f0b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
    4f10:	89 df                	mov    %ebx,%edi
    4f12:	83 c3 01             	add    $0x1,%ebx
    4f15:	e8 36 1c 00 00       	call   6b50 <free_wp>
    4f1a:	83 fb 10             	cmp    $0x10,%ebx
    4f1d:	75 f1                	jne    4f10 <cmd_d+0x150>
    4f1f:	e9 e5 fe ff ff       	jmp    4e09 <cmd_d+0x49>
    4f24:	0f 1f 40 00          	nopl   0x0(%rax)
    4f28:	8b 7c 24 0c          	mov    0xc(%rsp),%edi
    4f2c:	e8 1f 1c 00 00       	call   6b50 <free_wp>
    4f31:	84 c0                	test   %al,%al
    4f33:	0f 85 d0 fe ff ff    	jne    4e09 <cmd_d+0x49>
    4f39:	48 8d 35 b2 47 00 00 	lea    0x47b2(%rip),%rsi        # 96f2 <__func__.1+0x5a>
    4f40:	bf 01 00 00 00       	mov    $0x1,%edi
    4f45:	31 c0                	xor    %eax,%eax
    4f47:	e8 04 d4 ff ff       	call   2350 <__printf_chk@plt>
    4f4c:	e9 b8 fe ff ff       	jmp    4e09 <cmd_d+0x49>
    4f51:	e8 6a d5 ff ff       	call   24c0 <__stack_chk_fail@plt>
    4f56:	66 2e 0f 1f 84 00 00 	cs nopw 0x0(%rax,%rax,1)
    4f5d:	00 00 00 

0000000000004f60 <cmd_p>:
    4f60:	f3 0f 1e fa          	endbr64 
    4f64:	41 54                	push   %r12
    4f66:	49 89 fc             	mov    %rdi,%r12
    4f69:	bf 80 00 00 00       	mov    $0x80,%edi
    4f6e:	55                   	push   %rbp
    4f6f:	48 83 ec 18          	sub    $0x18,%rsp
    4f73:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    4f7a:	00 00 
    4f7c:	48 89 44 24 08       	mov    %rax,0x8(%rsp)
    4f81:	31 c0                	xor    %eax,%eax
    4f83:	e8 e8 d5 ff ff       	call   2570 <malloc@plt>
    4f88:	48 89 c5             	mov    %rax,%rbp
    4f8b:	4d 85 e4             	test   %r12,%r12
    4f8e:	74 70                	je     5000 <cmd_p+0xa0>
    4f90:	48 89 c2             	mov    %rax,%rdx
    4f93:	48 8d 35 9a 47 00 00 	lea    0x479a(%rip),%rsi        # 9734 <__func__.1+0x9c>
    4f9a:	4c 89 e7             	mov    %r12,%rdi
    4f9d:	31 c0                	xor    %eax,%eax
    4f9f:	e8 ec d4 ff ff       	call   2490 <__isoc99_sscanf@plt>
    4fa4:	48 8d 74 24 07       	lea    0x7(%rsp),%rsi
    4fa9:	48 89 ef             	mov    %rbp,%rdi
    4fac:	c6 44 24 07 01       	movb   $0x1,0x7(%rsp)
    4fb1:	e8 2a 16 00 00       	call   65e0 <expr>
    4fb6:	80 7c 24 07 00       	cmpb   $0x0,0x7(%rsp)
    4fbb:	89 c1                	mov    %eax,%ecx
    4fbd:	74 16                	je     4fd5 <cmd_p+0x75>
    4fbf:	48 89 ea             	mov    %rbp,%rdx
    4fc2:	48 8d 35 5b 47 00 00 	lea    0x475b(%rip),%rsi        # 9724 <__func__.1+0x8c>
    4fc9:	bf 01 00 00 00       	mov    $0x1,%edi
    4fce:	31 c0                	xor    %eax,%eax
    4fd0:	e8 7b d3 ff ff       	call   2350 <__printf_chk@plt>
    4fd5:	48 89 ef             	mov    %rbp,%rdi
    4fd8:	e8 43 d5 ff ff       	call   2520 <free@plt>
    4fdd:	48 8b 44 24 08       	mov    0x8(%rsp),%rax
    4fe2:	64 48 2b 04 25 28 00 	sub    %fs:0x28,%rax
    4fe9:	00 00 
    4feb:	75 29                	jne    5016 <cmd_p+0xb6>
    4fed:	48 83 c4 18          	add    $0x18,%rsp
    4ff1:	31 c0                	xor    %eax,%eax
    4ff3:	5d                   	pop    %rbp
    4ff4:	41 5c                	pop    %r12
    4ff6:	c3                   	ret    
    4ff7:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
    4ffe:	00 00 
    5000:	48 8d 3d a1 46 00 00 	lea    0x46a1(%rip),%rdi        # 96a8 <__func__.1+0x10>
    5007:	e8 c4 d5 ff ff       	call   25d0 <puts@plt>
    500c:	48 89 ef             	mov    %rbp,%rdi
    500f:	e8 0c d5 ff ff       	call   2520 <free@plt>
    5014:	eb c7                	jmp    4fdd <cmd_p+0x7d>
    5016:	e8 a5 d4 ff ff       	call   24c0 <__stack_chk_fail@plt>
    501b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000005020 <cmd_x>:
    5020:	f3 0f 1e fa          	endbr64 
    5024:	41 56                	push   %r14
    5026:	41 55                	push   %r13
    5028:	41 54                	push   %r12
    502a:	49 89 fc             	mov    %rdi,%r12
    502d:	bf 80 00 00 00       	mov    $0x80,%edi
    5032:	55                   	push   %rbp
    5033:	53                   	push   %rbx
    5034:	48 83 ec 10          	sub    $0x10,%rsp
    5038:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    503f:	00 00 
    5041:	48 89 44 24 08       	mov    %rax,0x8(%rsp)
    5046:	31 c0                	xor    %eax,%eax
    5048:	e8 23 d5 ff ff       	call   2570 <malloc@plt>
    504d:	48 8d 54 24 04       	lea    0x4(%rsp),%rdx
    5052:	4c 89 e7             	mov    %r12,%rdi
    5055:	48 8d 35 d5 46 00 00 	lea    0x46d5(%rip),%rsi        # 9731 <__func__.1+0x99>
    505c:	48 89 c5             	mov    %rax,%rbp
    505f:	48 89 c1             	mov    %rax,%rcx
    5062:	31 c0                	xor    %eax,%eax
    5064:	c6 44 24 03 01       	movb   $0x1,0x3(%rsp)
    5069:	e8 22 d4 ff ff       	call   2490 <__isoc99_sscanf@plt>
    506e:	83 f8 02             	cmp    $0x2,%eax
    5071:	74 35                	je     50a8 <cmd_x+0x88>
    5073:	48 8d 3d 2e 46 00 00 	lea    0x462e(%rip),%rdi        # 96a8 <__func__.1+0x10>
    507a:	e8 51 d5 ff ff       	call   25d0 <puts@plt>
    507f:	48 8b 44 24 08       	mov    0x8(%rsp),%rax
    5084:	64 48 2b 04 25 28 00 	sub    %fs:0x28,%rax
    508b:	00 00 
    508d:	0f 85 a0 00 00 00    	jne    5133 <cmd_x+0x113>
    5093:	48 83 c4 10          	add    $0x10,%rsp
    5097:	31 c0                	xor    %eax,%eax
    5099:	5b                   	pop    %rbx
    509a:	5d                   	pop    %rbp
    509b:	41 5c                	pop    %r12
    509d:	41 5d                	pop    %r13
    509f:	41 5e                	pop    %r14
    50a1:	c3                   	ret    
    50a2:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
    50a8:	4c 8d 64 24 03       	lea    0x3(%rsp),%r12
    50ad:	48 89 ef             	mov    %rbp,%rdi
    50b0:	4c 89 e6             	mov    %r12,%rsi
    50b3:	e8 28 15 00 00       	call   65e0 <expr>
    50b8:	80 7c 24 03 00       	cmpb   $0x0,0x3(%rsp)
    50bd:	89 c3                	mov    %eax,%ebx
    50bf:	74 be                	je     507f <cmd_x+0x5f>
    50c1:	8b 44 24 04          	mov    0x4(%rsp),%eax
    50c5:	85 c0                	test   %eax,%eax
    50c7:	7e 33                	jle    50fc <cmd_x+0xdc>
    50c9:	45 31 f6             	xor    %r14d,%r14d
    50cc:	4c 8d 2d 67 46 00 00 	lea    0x4667(%rip),%r13        # 973a <__func__.1+0xa2>
    50d3:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
    50d8:	4c 89 e2             	mov    %r12,%rdx
    50db:	be 04 00 00 00       	mov    $0x4,%esi
    50e0:	89 df                	mov    %ebx,%edi
    50e2:	e8 89 27 00 00       	call   7870 <sdb_vaddr_read>
    50e7:	80 7c 24 03 00       	cmpb   $0x0,0x3(%rsp)
    50ec:	75 22                	jne    5110 <cmd_x+0xf0>
    50ee:	41 83 c6 01          	add    $0x1,%r14d
    50f2:	83 c3 04             	add    $0x4,%ebx
    50f5:	44 39 74 24 04       	cmp    %r14d,0x4(%rsp)
    50fa:	7f dc                	jg     50d8 <cmd_x+0xb8>
    50fc:	48 89 ef             	mov    %rbp,%rdi
    50ff:	e8 1c d4 ff ff       	call   2520 <free@plt>
    5104:	e9 76 ff ff ff       	jmp    507f <cmd_x+0x5f>
    5109:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    5110:	89 c1                	mov    %eax,%ecx
    5112:	89 da                	mov    %ebx,%edx
    5114:	4c 89 ee             	mov    %r13,%rsi
    5117:	bf 01 00 00 00       	mov    $0x1,%edi
    511c:	31 c0                	xor    %eax,%eax
    511e:	41 83 c6 01          	add    $0x1,%r14d
    5122:	83 c3 04             	add    $0x4,%ebx
    5125:	e8 26 d2 ff ff       	call   2350 <__printf_chk@plt>
    512a:	44 3b 74 24 04       	cmp    0x4(%rsp),%r14d
    512f:	7c a7                	jl     50d8 <cmd_x+0xb8>
    5131:	eb c9                	jmp    50fc <cmd_x+0xdc>
    5133:	e8 88 d3 ff ff       	call   24c0 <__stack_chk_fail@plt>
    5138:	0f 1f 84 00 00 00 00 	nopl   0x0(%rax,%rax,1)
    513f:	00 

0000000000005140 <cmd_info>:
    5140:	f3 0f 1e fa          	endbr64 
    5144:	48 83 ec 18          	sub    $0x18,%rsp
    5148:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    514f:	00 00 
    5151:	48 89 44 24 08       	mov    %rax,0x8(%rsp)
    5156:	31 c0                	xor    %eax,%eax
    5158:	48 85 ff             	test   %rdi,%rdi
    515b:	0f 84 1f 01 00 00    	je     5280 <cmd_info+0x140>
    5161:	48 8d 54 24 05       	lea    0x5(%rsp),%rdx
    5166:	48 8d 35 29 42 00 00 	lea    0x4229(%rip),%rsi        # 9396 <__PRETTY_FUNCTION__.1+0x1ae>
    516d:	31 c0                	xor    %eax,%eax
    516f:	e8 1c d3 ff ff       	call   2490 <__isoc99_sscanf@plt>
    5174:	0f b6 44 24 05       	movzbl 0x5(%rsp),%eax
    5179:	3c 72                	cmp    $0x72,%al
    517b:	0f 84 9f 00 00 00    	je     5220 <cmd_info+0xe0>
    5181:	3c 77                	cmp    $0x77,%al
    5183:	74 33                	je     51b8 <cmd_info+0x78>
    5185:	66 83 7c 24 05 62    	cmpw   $0x62,0x5(%rsp)
    518b:	74 43                	je     51d0 <cmd_info+0x90>
    518d:	0f b6 44 24 05       	movzbl 0x5(%rsp),%eax
    5192:	83 f8 77             	cmp    $0x77,%eax
    5195:	75 61                	jne    51f8 <cmd_info+0xb8>
    5197:	80 7c 24 06 72       	cmpb   $0x72,0x6(%rsp)
    519c:	75 5a                	jne    51f8 <cmd_info+0xb8>
    519e:	80 7c 24 07 00       	cmpb   $0x0,0x7(%rsp)
    51a3:	75 53                	jne    51f8 <cmd_info+0xb8>
    51a5:	48 8d 3d 9d 45 00 00 	lea    0x459d(%rip),%rdi        # 9749 <__func__.1+0xb1>
    51ac:	e8 1f d4 ff ff       	call   25d0 <puts@plt>
    51b1:	eb 24                	jmp    51d7 <cmd_info+0x97>
    51b3:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
    51b8:	80 7c 24 06 00       	cmpb   $0x0,0x6(%rsp)
    51bd:	75 c6                	jne    5185 <cmd_info+0x45>
    51bf:	31 c0                	xor    %eax,%eax
    51c1:	e8 8a 1a 00 00       	call   6c50 <print_watchpoint>
    51c6:	eb 0f                	jmp    51d7 <cmd_info+0x97>
    51c8:	0f 1f 84 00 00 00 00 	nopl   0x0(%rax,%rax,1)
    51cf:	00 
    51d0:	31 c0                	xor    %eax,%eax
    51d2:	e8 99 0b 00 00       	call   5d70 <display_breakpoint>
    51d7:	48 8b 44 24 08       	mov    0x8(%rsp),%rax
    51dc:	64 48 2b 04 25 28 00 	sub    %fs:0x28,%rax
    51e3:	00 00 
    51e5:	0f 85 a6 00 00 00    	jne    5291 <cmd_info+0x151>
    51eb:	31 c0                	xor    %eax,%eax
    51ed:	48 83 c4 18          	add    $0x18,%rsp
    51f1:	c3                   	ret    
    51f2:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
    51f8:	83 f8 69             	cmp    $0x69,%eax
    51fb:	75 43                	jne    5240 <cmd_info+0x100>
    51fd:	80 7c 24 06 72       	cmpb   $0x72,0x6(%rsp)
    5202:	75 3c                	jne    5240 <cmd_info+0x100>
    5204:	80 7c 24 07 00       	cmpb   $0x0,0x7(%rsp)
    5209:	75 35                	jne    5240 <cmd_info+0x100>
    520b:	48 8d 3d 47 45 00 00 	lea    0x4547(%rip),%rdi        # 9759 <__func__.1+0xc1>
    5212:	e8 b9 d3 ff ff       	call   25d0 <puts@plt>
    5217:	eb be                	jmp    51d7 <cmd_info+0x97>
    5219:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    5220:	80 7c 24 06 00       	cmpb   $0x0,0x6(%rsp)
    5225:	0f 85 5a ff ff ff    	jne    5185 <cmd_info+0x45>
    522b:	31 ff                	xor    %edi,%edi
    522d:	31 c0                	xor    %eax,%eax
    522f:	e8 ac ef ff ff       	call   41e0 <isa_reg_display>
    5234:	eb a1                	jmp    51d7 <cmd_info+0x97>
    5236:	66 2e 0f 1f 84 00 00 	cs nopw 0x0(%rax,%rax,1)
    523d:	00 00 00 
    5240:	83 f8 66             	cmp    $0x66,%eax
    5243:	75 23                	jne    5268 <cmd_info+0x128>
    5245:	80 7c 24 06 72       	cmpb   $0x72,0x6(%rsp)
    524a:	75 1c                	jne    5268 <cmd_info+0x128>
    524c:	80 7c 24 07 00       	cmpb   $0x0,0x7(%rsp)
    5251:	75 15                	jne    5268 <cmd_info+0x128>
    5253:	48 8d 3d 0e 45 00 00 	lea    0x450e(%rip),%rdi        # 9768 <__func__.1+0xd0>
    525a:	e8 71 d3 ff ff       	call   25d0 <puts@plt>
    525f:	e9 73 ff ff ff       	jmp    51d7 <cmd_info+0x97>
    5264:	0f 1f 40 00          	nopl   0x0(%rax)
    5268:	48 8d 3d 08 45 00 00 	lea    0x4508(%rip),%rdi        # 9777 <__func__.1+0xdf>
    526f:	e8 5c d3 ff ff       	call   25d0 <puts@plt>
    5274:	e9 5e ff ff ff       	jmp    51d7 <cmd_info+0x97>
    5279:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    5280:	48 8d 3d e9 45 00 00 	lea    0x45e9(%rip),%rdi        # 9870 <__func__.1+0x1d8>
    5287:	e8 44 d3 ff ff       	call   25d0 <puts@plt>
    528c:	e9 46 ff ff ff       	jmp    51d7 <cmd_info+0x97>
    5291:	e8 2a d2 ff ff       	call   24c0 <__stack_chk_fail@plt>
    5296:	66 2e 0f 1f 84 00 00 	cs nopw 0x0(%rax,%rax,1)
    529d:	00 00 00 

00000000000052a0 <cmd_help>:
    52a0:	f3 0f 1e fa          	endbr64 
    52a4:	41 55                	push   %r13
    52a6:	31 ff                	xor    %edi,%edi
    52a8:	48 8d 35 30 45 00 00 	lea    0x4530(%rip),%rsi        # 97df <__func__.1+0x147>
    52af:	41 54                	push   %r12
    52b1:	55                   	push   %rbp
    52b2:	53                   	push   %rbx
    52b3:	48 83 ec 08          	sub    $0x8,%rsp
    52b7:	e8 24 d3 ff ff       	call   25e0 <strtok@plt>
    52bc:	48 85 c0             	test   %rax,%rax
    52bf:	0f 84 d3 01 00 00    	je     5498 <cmd_help+0x1f8>
    52c5:	48 8d 1d b9 44 00 00 	lea    0x44b9(%rip),%rbx        # 9785 <__func__.1+0xed>
    52cc:	48 89 c7             	mov    %rax,%rdi
    52cf:	49 89 c4             	mov    %rax,%r12
    52d2:	48 89 de             	mov    %rbx,%rsi
    52d5:	e8 b6 d2 ff ff       	call   2590 <strcmp@plt>
    52da:	85 c0                	test   %eax,%eax
    52dc:	0f 84 4c 02 00 00    	je     552e <cmd_help+0x28e>
    52e2:	41 0f b6 1c 24       	movzbl (%r12),%ebx
    52e7:	83 fb 63             	cmp    $0x63,%ebx
    52ea:	0f 84 e0 00 00 00    	je     53d0 <cmd_help+0x130>
    52f0:	83 fb 71             	cmp    $0x71,%ebx
    52f3:	0f 84 f7 00 00 00    	je     53f0 <cmd_help+0x150>
    52f9:	45 0f b6 2c 24       	movzbl (%r12),%r13d
    52fe:	41 83 fd 73          	cmp    $0x73,%r13d
    5302:	0f 84 08 01 00 00    	je     5410 <cmd_help+0x170>
    5308:	48 8d 2d 80 44 00 00 	lea    0x4480(%rip),%rbp        # 978f <__func__.1+0xf7>
    530f:	4c 89 e7             	mov    %r12,%rdi
    5312:	48 89 ee             	mov    %rbp,%rsi
    5315:	e8 76 d2 ff ff       	call   2590 <strcmp@plt>
    531a:	85 c0                	test   %eax,%eax
    531c:	0f 84 14 02 00 00    	je     5536 <cmd_help+0x296>
    5322:	83 fb 78             	cmp    $0x78,%ebx
    5325:	0f 84 15 01 00 00    	je     5440 <cmd_help+0x1a0>
    532b:	83 fb 70             	cmp    $0x70,%ebx
    532e:	75 0c                	jne    533c <cmd_help+0x9c>
    5330:	41 80 7c 24 01 00    	cmpb   $0x0,0x1(%r12)
    5336:	0f 84 07 02 00 00    	je     5543 <cmd_help+0x2a3>
    533c:	83 fb 64             	cmp    $0x64,%ebx
    533f:	75 0c                	jne    534d <cmd_help+0xad>
    5341:	41 80 7c 24 01 00    	cmpb   $0x0,0x1(%r12)
    5347:	0f 84 d0 01 00 00    	je     551d <cmd_help+0x27d>
    534d:	48 8d 2d 40 44 00 00 	lea    0x4440(%rip),%rbp        # 9794 <__func__.1+0xfc>
    5354:	4c 89 e7             	mov    %r12,%rdi
    5357:	48 89 ee             	mov    %rbp,%rsi
    535a:	e8 31 d2 ff ff       	call   2590 <strcmp@plt>
    535f:	85 c0                	test   %eax,%eax
    5361:	0f 84 ed 01 00 00    	je     5554 <cmd_help+0x2b4>
    5367:	41 83 fd 78          	cmp    $0x78,%r13d
    536b:	0f 85 ef 00 00 00    	jne    5460 <cmd_help+0x1c0>
    5371:	41 80 7c 24 01 64    	cmpb   $0x64,0x1(%r12)
    5377:	0f 85 e3 00 00 00    	jne    5460 <cmd_help+0x1c0>
    537d:	41 80 7c 24 02 00    	cmpb   $0x0,0x2(%r12)
    5383:	0f 85 d7 00 00 00    	jne    5460 <cmd_help+0x1c0>
    5389:	b8 09 00 00 00       	mov    $0x9,%eax
    538e:	48 8d 15 03 44 00 00 	lea    0x4403(%rip),%rdx        # 9798 <__func__.1+0x100>
    5395:	48 98                	cltq   
    5397:	48 8d 35 fd 43 00 00 	lea    0x43fd(%rip),%rsi        # 979b <__func__.1+0x103>
    539e:	bf 01 00 00 00       	mov    $0x1,%edi
    53a3:	48 8d 0c 40          	lea    (%rax,%rax,2),%rcx
    53a7:	48 8d 05 72 86 00 00 	lea    0x8672(%rip),%rax        # da20 <cmd_table>
    53ae:	48 8b 4c c8 08       	mov    0x8(%rax,%rcx,8),%rcx
    53b3:	31 c0                	xor    %eax,%eax
    53b5:	e8 96 cf ff ff       	call   2350 <__printf_chk@plt>
    53ba:	48 83 c4 08          	add    $0x8,%rsp
    53be:	31 c0                	xor    %eax,%eax
    53c0:	5b                   	pop    %rbx
    53c1:	5d                   	pop    %rbp
    53c2:	41 5c                	pop    %r12
    53c4:	41 5d                	pop    %r13
    53c6:	c3                   	ret    
    53c7:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
    53ce:	00 00 
    53d0:	41 80 7c 24 01 00    	cmpb   $0x0,0x1(%r12)
    53d6:	0f 85 14 ff ff ff    	jne    52f0 <cmd_help+0x50>
    53dc:	b8 01 00 00 00       	mov    $0x1,%eax
    53e1:	48 8d 15 bd 40 00 00 	lea    0x40bd(%rip),%rdx        # 94a5 <__PRETTY_FUNCTION__.0+0x25>
    53e8:	eb ab                	jmp    5395 <cmd_help+0xf5>
    53ea:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
    53f0:	41 80 7c 24 01 00    	cmpb   $0x0,0x1(%r12)
    53f6:	0f 85 fd fe ff ff    	jne    52f9 <cmd_help+0x59>
    53fc:	b8 02 00 00 00       	mov    $0x2,%eax
    5401:	48 8d 15 82 43 00 00 	lea    0x4382(%rip),%rdx        # 978a <__func__.1+0xf2>
    5408:	eb 8b                	jmp    5395 <cmd_help+0xf5>
    540a:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
    5410:	41 80 7c 24 01 69    	cmpb   $0x69,0x1(%r12)
    5416:	0f 85 ec fe ff ff    	jne    5308 <cmd_help+0x68>
    541c:	41 80 7c 24 02 00    	cmpb   $0x0,0x2(%r12)
    5422:	0f 85 e0 fe ff ff    	jne    5308 <cmd_help+0x68>
    5428:	b8 03 00 00 00       	mov    $0x3,%eax
    542d:	48 8d 15 58 43 00 00 	lea    0x4358(%rip),%rdx        # 978c <__func__.1+0xf4>
    5434:	e9 5c ff ff ff       	jmp    5395 <cmd_help+0xf5>
    5439:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    5440:	41 80 7c 24 01 00    	cmpb   $0x0,0x1(%r12)
    5446:	0f 85 df fe ff ff    	jne    532b <cmd_help+0x8b>
    544c:	b8 05 00 00 00       	mov    $0x5,%eax
    5451:	48 8d 15 65 43 00 00 	lea    0x4365(%rip),%rdx        # 97bd <__func__.1+0x125>
    5458:	e9 38 ff ff ff       	jmp    5395 <cmd_help+0xf5>
    545d:	0f 1f 00             	nopl   (%rax)
    5460:	83 fb 77             	cmp    $0x77,%ebx
    5463:	74 7b                	je     54e0 <cmd_help+0x240>
    5465:	83 fb 62             	cmp    $0x62,%ebx
    5468:	0f 84 92 00 00 00    	je     5500 <cmd_help+0x260>
    546e:	4c 89 e2             	mov    %r12,%rdx
    5471:	48 8d 35 2c 43 00 00 	lea    0x432c(%rip),%rsi        # 97a4 <__func__.1+0x10c>
    5478:	bf 01 00 00 00       	mov    $0x1,%edi
    547d:	31 c0                	xor    %eax,%eax
    547f:	e8 cc ce ff ff       	call   2350 <__printf_chk@plt>
    5484:	48 83 c4 08          	add    $0x8,%rsp
    5488:	31 c0                	xor    %eax,%eax
    548a:	5b                   	pop    %rbx
    548b:	5d                   	pop    %rbp
    548c:	41 5c                	pop    %r12
    548e:	41 5d                	pop    %r13
    5490:	c3                   	ret    
    5491:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    5498:	48 8d 1d 81 85 00 00 	lea    0x8581(%rip),%rbx        # da20 <cmd_table>
    549f:	48 8d 2d f5 42 00 00 	lea    0x42f5(%rip),%rbp        # 979b <__func__.1+0x103>
    54a6:	4c 8d a3 20 01 00 00 	lea    0x120(%rbx),%r12
    54ad:	0f 1f 00             	nopl   (%rax)
    54b0:	48 8b 4b 08          	mov    0x8(%rbx),%rcx
    54b4:	48 8b 13             	mov    (%rbx),%rdx
    54b7:	48 89 ee             	mov    %rbp,%rsi
    54ba:	bf 01 00 00 00       	mov    $0x1,%edi
    54bf:	31 c0                	xor    %eax,%eax
    54c1:	48 83 c3 18          	add    $0x18,%rbx
    54c5:	e8 86 ce ff ff       	call   2350 <__printf_chk@plt>
    54ca:	4c 39 e3             	cmp    %r12,%rbx
    54cd:	75 e1                	jne    54b0 <cmd_help+0x210>
    54cf:	48 83 c4 08          	add    $0x8,%rsp
    54d3:	31 c0                	xor    %eax,%eax
    54d5:	5b                   	pop    %rbx
    54d6:	5d                   	pop    %rbp
    54d7:	41 5c                	pop    %r12
    54d9:	41 5d                	pop    %r13
    54db:	c3                   	ret    
    54dc:	0f 1f 40 00          	nopl   0x0(%rax)
    54e0:	41 80 7c 24 01 00    	cmpb   $0x0,0x1(%r12)
    54e6:	0f 85 79 ff ff ff    	jne    5465 <cmd_help+0x1c5>
    54ec:	b8 0a 00 00 00       	mov    $0xa,%eax
    54f1:	48 8d 15 be 41 00 00 	lea    0x41be(%rip),%rdx        # 96b6 <__func__.1+0x1e>
    54f8:	e9 98 fe ff ff       	jmp    5395 <cmd_help+0xf5>
    54fd:	0f 1f 00             	nopl   (%rax)
    5500:	41 80 7c 24 01 00    	cmpb   $0x0,0x1(%r12)
    5506:	b8 0b 00 00 00       	mov    $0xb,%eax
    550b:	48 8d 15 9b 47 00 00 	lea    0x479b(%rip),%rdx        # 9cad <__PRETTY_FUNCTION__.0+0x15d>
    5512:	0f 85 56 ff ff ff    	jne    546e <cmd_help+0x1ce>
    5518:	e9 78 fe ff ff       	jmp    5395 <cmd_help+0xf5>
    551d:	b8 07 00 00 00       	mov    $0x7,%eax
    5522:	48 8d 15 7d 41 00 00 	lea    0x417d(%rip),%rdx        # 96a6 <__func__.1+0xe>
    5529:	e9 67 fe ff ff       	jmp    5395 <cmd_help+0xf5>
    552e:	48 89 da             	mov    %rbx,%rdx
    5531:	e9 5f fe ff ff       	jmp    5395 <cmd_help+0xf5>
    5536:	b8 04 00 00 00       	mov    $0x4,%eax
    553b:	48 89 ea             	mov    %rbp,%rdx
    553e:	e9 52 fe ff ff       	jmp    5395 <cmd_help+0xf5>
    5543:	b8 06 00 00 00       	mov    $0x6,%eax
    5548:	48 8d 15 8d 3e 00 00 	lea    0x3e8d(%rip),%rdx        # 93dc <__PRETTY_FUNCTION__.1+0x1f4>
    554f:	e9 41 fe ff ff       	jmp    5395 <cmd_help+0xf5>
    5554:	b8 08 00 00 00       	mov    $0x8,%eax
    5559:	48 89 ea             	mov    %rbp,%rdx
    555c:	e9 34 fe ff ff       	jmp    5395 <cmd_help+0xf5>
    5561:	66 66 2e 0f 1f 84 00 	data16 cs nopw 0x0(%rax,%rax,1)
    5568:	00 00 00 00 
    556c:	0f 1f 40 00          	nopl   0x0(%rax)

0000000000005570 <cmd_b>:
    5570:	f3 0f 1e fa          	endbr64 
    5574:	48 83 ec 18          	sub    $0x18,%rsp
    5578:	48 8d 35 3b 42 00 00 	lea    0x423b(%rip),%rsi        # 97ba <__func__.1+0x122>
    557f:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    5586:	00 00 
    5588:	48 89 44 24 08       	mov    %rax,0x8(%rsp)
    558d:	31 c0                	xor    %eax,%eax
    558f:	48 8d 54 24 04       	lea    0x4(%rsp),%rdx
    5594:	e8 f7 ce ff ff       	call   2490 <__isoc99_sscanf@plt>
    5599:	85 c0                	test   %eax,%eax
    559b:	74 43                	je     55e0 <cmd_b+0x70>
    559d:	8b 7c 24 04          	mov    0x4(%rsp),%edi
    55a1:	40 f6 c7 03          	test   $0x3,%dil
    55a5:	75 21                	jne    55c8 <cmd_b+0x58>
    55a7:	e8 54 05 00 00       	call   5b00 <new_bp>
    55ac:	48 8b 44 24 08       	mov    0x8(%rsp),%rax
    55b1:	64 48 2b 04 25 28 00 	sub    %fs:0x28,%rax
    55b8:	00 00 
    55ba:	75 32                	jne    55ee <cmd_b+0x7e>
    55bc:	31 c0                	xor    %eax,%eax
    55be:	48 83 c4 18          	add    $0x18,%rsp
    55c2:	c3                   	ret    
    55c3:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
    55c8:	48 8d 3d f0 41 00 00 	lea    0x41f0(%rip),%rdi        # 97bf <__func__.1+0x127>
    55cf:	e8 fc cf ff ff       	call   25d0 <puts@plt>
    55d4:	eb d6                	jmp    55ac <cmd_b+0x3c>
    55d6:	66 2e 0f 1f 84 00 00 	cs nopw 0x0(%rax,%rax,1)
    55dd:	00 00 00 
    55e0:	48 8d 3d c1 40 00 00 	lea    0x40c1(%rip),%rdi        # 96a8 <__func__.1+0x10>
    55e7:	e8 e4 cf ff ff       	call   25d0 <puts@plt>
    55ec:	eb be                	jmp    55ac <cmd_b+0x3c>
    55ee:	e8 cd ce ff ff       	call   24c0 <__stack_chk_fail@plt>
    55f3:	66 66 2e 0f 1f 84 00 	data16 cs nopw 0x0(%rax,%rax,1)
    55fa:	00 00 00 00 
    55fe:	66 90                	xchg   %ax,%ax

0000000000005600 <cmd_si>:
    5600:	f3 0f 1e fa          	endbr64 
    5604:	48 83 ec 08          	sub    $0x8,%rsp
    5608:	48 85 ff             	test   %rdi,%rdi
    560b:	74 23                	je     5630 <cmd_si+0x30>
    560d:	ba 0a 00 00 00       	mov    $0xa,%edx
    5612:	31 f6                	xor    %esi,%esi
    5614:	e8 87 cf ff ff       	call   25a0 <strtol@plt>
    5619:	48 63 f8             	movslq %eax,%rdi
    561c:	85 c0                	test   %eax,%eax
    561e:	7e 20                	jle    5640 <cmd_si+0x40>
    5620:	e8 cb f4 ff ff       	call   4af0 <cpu_exec>
    5625:	31 c0                	xor    %eax,%eax
    5627:	48 83 c4 08          	add    $0x8,%rsp
    562b:	c3                   	ret    
    562c:	0f 1f 40 00          	nopl   0x0(%rax)
    5630:	bf 01 00 00 00       	mov    $0x1,%edi
    5635:	eb e9                	jmp    5620 <cmd_si+0x20>
    5637:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
    563e:	00 00 
    5640:	48 8d 35 83 41 00 00 	lea    0x4183(%rip),%rsi        # 97ca <__func__.1+0x132>
    5647:	bf 01 00 00 00       	mov    $0x1,%edi
    564c:	31 c0                	xor    %eax,%eax
    564e:	e8 fd cc ff ff       	call   2350 <__printf_chk@plt>
    5653:	31 c0                	xor    %eax,%eax
    5655:	48 83 c4 08          	add    $0x8,%rsp
    5659:	c3                   	ret    
    565a:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

0000000000005660 <cmd_w>:
    5660:	f3 0f 1e fa          	endbr64 
    5664:	48 83 ec 08          	sub    $0x8,%rsp
    5668:	48 85 ff             	test   %rdi,%rdi
    566b:	74 13                	je     5680 <cmd_w+0x20>
    566d:	e8 8e 13 00 00       	call   6a00 <new_wp>
    5672:	31 c0                	xor    %eax,%eax
    5674:	48 83 c4 08          	add    $0x8,%rsp
    5678:	c3                   	ret    
    5679:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    5680:	48 8d 3d 21 40 00 00 	lea    0x4021(%rip),%rdi        # 96a8 <__func__.1+0x10>
    5687:	e8 44 cf ff ff       	call   25d0 <puts@plt>
    568c:	31 c0                	xor    %eax,%eax
    568e:	48 83 c4 08          	add    $0x8,%rsp
    5692:	c3                   	ret    
    5693:	66 66 2e 0f 1f 84 00 	data16 cs nopw 0x0(%rax,%rax,1)
    569a:	00 00 00 00 
    569e:	66 90                	xchg   %ax,%ax

00000000000056a0 <sdb_set_batch_mode>:
    56a0:	f3 0f 1e fa          	endbr64 
    56a4:	c7 05 6a af 00 00 01 	movl   $0x1,0xaf6a(%rip)        # 10618 <is_batch_mode>
    56ab:	00 00 00 
    56ae:	c3                   	ret    
    56af:	90                   	nop

00000000000056b0 <sdb_mainloop>:
    56b0:	f3 0f 1e fa          	endbr64 
    56b4:	41 57                	push   %r15
    56b6:	41 56                	push   %r14
    56b8:	41 55                	push   %r13
    56ba:	4c 8d 2d 1e 41 00 00 	lea    0x411e(%rip),%r13        # 97df <__func__.1+0x147>
    56c1:	41 54                	push   %r12
    56c3:	4c 8d 25 0f 41 00 00 	lea    0x410f(%rip),%r12        # 97d9 <__func__.1+0x141>
    56ca:	55                   	push   %rbp
    56cb:	53                   	push   %rbx
    56cc:	48 83 ec 08          	sub    $0x8,%rsp
    56d0:	8b 05 42 af 00 00    	mov    0xaf42(%rip),%eax        # 10618 <is_batch_mode>
    56d6:	85 c0                	test   %eax,%eax
    56d8:	0f 85 48 02 00 00    	jne    5926 <sdb_mainloop+0x276>
    56de:	66 90                	xchg   %ax,%ax
    56e0:	4c 8b 35 29 af 00 00 	mov    0xaf29(%rip),%r14        # 10610 <line_read.0>
    56e7:	4d 85 f6             	test   %r14,%r14
    56ea:	74 13                	je     56ff <sdb_mainloop+0x4f>
    56ec:	4c 89 f7             	mov    %r14,%rdi
    56ef:	e8 2c ce ff ff       	call   2520 <free@plt>
    56f4:	48 c7 05 11 af 00 00 	movq   $0x0,0xaf11(%rip)        # 10610 <line_read.0>
    56fb:	00 00 00 00 
    56ff:	4c 89 e7             	mov    %r12,%rdi
    5702:	e8 39 cd ff ff       	call   2440 <readline@plt>
    5707:	48 89 05 02 af 00 00 	mov    %rax,0xaf02(%rip)        # 10610 <line_read.0>
    570e:	49 89 c6             	mov    %rax,%r14
    5711:	48 85 c0             	test   %rax,%rax
    5714:	0f 84 ba 00 00 00    	je     57d4 <sdb_mainloop+0x124>
    571a:	80 38 00             	cmpb   $0x0,(%rax)
    571d:	0f 85 4d 01 00 00    	jne    5870 <sdb_mainloop+0x1c0>
    5723:	4c 89 f7             	mov    %r14,%rdi
    5726:	e8 75 cc ff ff       	call   23a0 <strlen@plt>
    572b:	4c 89 ee             	mov    %r13,%rsi
    572e:	4c 89 f7             	mov    %r14,%rdi
    5731:	48 89 c3             	mov    %rax,%rbx
    5734:	e8 a7 ce ff ff       	call   25e0 <strtok@plt>
    5739:	49 89 c7             	mov    %rax,%r15
    573c:	48 85 c0             	test   %rax,%rax
    573f:	74 a6                	je     56e7 <sdb_mainloop+0x37>
    5741:	48 89 c7             	mov    %rax,%rdi
    5744:	e8 57 cc ff ff       	call   23a0 <strlen@plt>
    5749:	4d 8d 04 1e          	lea    (%r14,%rbx,1),%r8
    574d:	49 8d 6c 07 01       	lea    0x1(%r15,%rax,1),%rbp
    5752:	31 c0                	xor    %eax,%eax
    5754:	4c 39 c5             	cmp    %r8,%rbp
    5757:	48 0f 43 e8          	cmovae %rax,%rbp
    575b:	e8 c0 d0 ff ff       	call   2820 <sdl_clear_event_queue>
    5760:	48 8d 35 1e 40 00 00 	lea    0x401e(%rip),%rsi        # 9785 <__func__.1+0xed>
    5767:	4c 89 ff             	mov    %r15,%rdi
    576a:	e8 21 ce ff ff       	call   2590 <strcmp@plt>
    576f:	85 c0                	test   %eax,%eax
    5771:	74 45                	je     57b8 <sdb_mainloop+0x108>
    5773:	45 0f b6 37          	movzbl (%r15),%r14d
    5777:	41 83 fe 63          	cmp    $0x63,%r14d
    577b:	75 0b                	jne    5788 <sdb_mainloop+0xd8>
    577d:	41 80 7f 01 00       	cmpb   $0x0,0x1(%r15)
    5782:	0f 84 48 01 00 00    	je     58d0 <sdb_mainloop+0x220>
    5788:	41 83 fe 71          	cmp    $0x71,%r14d
    578c:	75 0b                	jne    5799 <sdb_mainloop+0xe9>
    578e:	41 80 7f 01 00       	cmpb   $0x0,0x1(%r15)
    5793:	0f 84 47 01 00 00    	je     58e0 <sdb_mainloop+0x230>
    5799:	41 0f b6 1f          	movzbl (%r15),%ebx
    579d:	83 fb 73             	cmp    $0x73,%ebx
    57a0:	75 46                	jne    57e8 <sdb_mainloop+0x138>
    57a2:	41 80 7f 01 69       	cmpb   $0x69,0x1(%r15)
    57a7:	75 3f                	jne    57e8 <sdb_mainloop+0x138>
    57a9:	41 80 7f 02 00       	cmpb   $0x0,0x2(%r15)
    57ae:	75 38                	jne    57e8 <sdb_mainloop+0x138>
    57b0:	b8 03 00 00 00       	mov    $0x3,%eax
    57b5:	0f 1f 00             	nopl   (%rax)
    57b8:	48 98                	cltq   
    57ba:	48 89 ef             	mov    %rbp,%rdi
    57bd:	48 8d 14 40          	lea    (%rax,%rax,2),%rdx
    57c1:	48 8d 05 58 82 00 00 	lea    0x8258(%rip),%rax        # da20 <cmd_table>
    57c8:	ff 54 d0 10          	call   *0x10(%rax,%rdx,8)
    57cc:	85 c0                	test   %eax,%eax
    57ce:	0f 89 0c ff ff ff    	jns    56e0 <sdb_mainloop+0x30>
    57d4:	48 83 c4 08          	add    $0x8,%rsp
    57d8:	5b                   	pop    %rbx
    57d9:	5d                   	pop    %rbp
    57da:	41 5c                	pop    %r12
    57dc:	41 5d                	pop    %r13
    57de:	41 5e                	pop    %r14
    57e0:	41 5f                	pop    %r15
    57e2:	c3                   	ret    
    57e3:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
    57e8:	48 8d 35 a0 3f 00 00 	lea    0x3fa0(%rip),%rsi        # 978f <__func__.1+0xf7>
    57ef:	4c 89 ff             	mov    %r15,%rdi
    57f2:	e8 99 cd ff ff       	call   2590 <strcmp@plt>
    57f7:	85 c0                	test   %eax,%eax
    57f9:	0f 84 eb 00 00 00    	je     58ea <sdb_mainloop+0x23a>
    57ff:	41 83 fe 78          	cmp    $0x78,%r14d
    5803:	75 0b                	jne    5810 <sdb_mainloop+0x160>
    5805:	41 80 7f 01 00       	cmpb   $0x0,0x1(%r15)
    580a:	0f 84 e4 00 00 00    	je     58f4 <sdb_mainloop+0x244>
    5810:	41 83 fe 70          	cmp    $0x70,%r14d
    5814:	75 0b                	jne    5821 <sdb_mainloop+0x171>
    5816:	41 80 7f 01 00       	cmpb   $0x0,0x1(%r15)
    581b:	0f 84 dd 00 00 00    	je     58fe <sdb_mainloop+0x24e>
    5821:	41 83 fe 64          	cmp    $0x64,%r14d
    5825:	75 0b                	jne    5832 <sdb_mainloop+0x182>
    5827:	41 80 7f 01 00       	cmpb   $0x0,0x1(%r15)
    582c:	0f 84 d6 00 00 00    	je     5908 <sdb_mainloop+0x258>
    5832:	48 8d 35 5b 3f 00 00 	lea    0x3f5b(%rip),%rsi        # 9794 <__func__.1+0xfc>
    5839:	4c 89 ff             	mov    %r15,%rdi
    583c:	e8 4f cd ff ff       	call   2590 <strcmp@plt>
    5841:	85 c0                	test   %eax,%eax
    5843:	0f 84 c9 00 00 00    	je     5912 <sdb_mainloop+0x262>
    5849:	83 fb 78             	cmp    $0x78,%ebx
    584c:	75 42                	jne    5890 <sdb_mainloop+0x1e0>
    584e:	41 80 7f 01 64       	cmpb   $0x64,0x1(%r15)
    5853:	75 3b                	jne    5890 <sdb_mainloop+0x1e0>
    5855:	41 80 7f 02 00       	cmpb   $0x0,0x2(%r15)
    585a:	75 34                	jne    5890 <sdb_mainloop+0x1e0>
    585c:	b8 09 00 00 00       	mov    $0x9,%eax
    5861:	e9 52 ff ff ff       	jmp    57b8 <sdb_mainloop+0x108>
    5866:	66 2e 0f 1f 84 00 00 	cs nopw 0x0(%rax,%rax,1)
    586d:	00 00 00 
    5870:	48 89 c7             	mov    %rax,%rdi
    5873:	e8 e8 cc ff ff       	call   2560 <add_history@plt>
    5878:	4c 8b 35 91 ad 00 00 	mov    0xad91(%rip),%r14        # 10610 <line_read.0>
    587f:	4d 85 f6             	test   %r14,%r14
    5882:	0f 85 9b fe ff ff    	jne    5723 <sdb_mainloop+0x73>
    5888:	e9 47 ff ff ff       	jmp    57d4 <sdb_mainloop+0x124>
    588d:	0f 1f 00             	nopl   (%rax)
    5890:	41 83 fe 77          	cmp    $0x77,%r14d
    5894:	75 07                	jne    589d <sdb_mainloop+0x1ed>
    5896:	41 80 7f 01 00       	cmpb   $0x0,0x1(%r15)
    589b:	74 7f                	je     591c <sdb_mainloop+0x26c>
    589d:	41 83 fe 62          	cmp    $0x62,%r14d
    58a1:	75 10                	jne    58b3 <sdb_mainloop+0x203>
    58a3:	41 80 7f 01 00       	cmpb   $0x0,0x1(%r15)
    58a8:	b8 0b 00 00 00       	mov    $0xb,%eax
    58ad:	0f 84 05 ff ff ff    	je     57b8 <sdb_mainloop+0x108>
    58b3:	4c 89 fa             	mov    %r15,%rdx
    58b6:	48 8d 35 e7 3e 00 00 	lea    0x3ee7(%rip),%rsi        # 97a4 <__func__.1+0x10c>
    58bd:	bf 01 00 00 00       	mov    $0x1,%edi
    58c2:	31 c0                	xor    %eax,%eax
    58c4:	e8 87 ca ff ff       	call   2350 <__printf_chk@plt>
    58c9:	e9 12 fe ff ff       	jmp    56e0 <sdb_mainloop+0x30>
    58ce:	66 90                	xchg   %ax,%ax
    58d0:	b8 01 00 00 00       	mov    $0x1,%eax
    58d5:	e9 de fe ff ff       	jmp    57b8 <sdb_mainloop+0x108>
    58da:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
    58e0:	b8 02 00 00 00       	mov    $0x2,%eax
    58e5:	e9 ce fe ff ff       	jmp    57b8 <sdb_mainloop+0x108>
    58ea:	b8 04 00 00 00       	mov    $0x4,%eax
    58ef:	e9 c4 fe ff ff       	jmp    57b8 <sdb_mainloop+0x108>
    58f4:	b8 05 00 00 00       	mov    $0x5,%eax
    58f9:	e9 ba fe ff ff       	jmp    57b8 <sdb_mainloop+0x108>
    58fe:	b8 06 00 00 00       	mov    $0x6,%eax
    5903:	e9 b0 fe ff ff       	jmp    57b8 <sdb_mainloop+0x108>
    5908:	b8 07 00 00 00       	mov    $0x7,%eax
    590d:	e9 a6 fe ff ff       	jmp    57b8 <sdb_mainloop+0x108>
    5912:	b8 08 00 00 00       	mov    $0x8,%eax
    5917:	e9 9c fe ff ff       	jmp    57b8 <sdb_mainloop+0x108>
    591c:	b8 0a 00 00 00       	mov    $0xa,%eax
    5921:	e9 92 fe ff ff       	jmp    57b8 <sdb_mainloop+0x108>
    5926:	48 83 c4 08          	add    $0x8,%rsp
    592a:	48 c7 c7 ff ff ff ff 	mov    $0xffffffffffffffff,%rdi
    5931:	5b                   	pop    %rbx
    5932:	5d                   	pop    %rbp
    5933:	41 5c                	pop    %r12
    5935:	41 5d                	pop    %r13
    5937:	41 5e                	pop    %r14
    5939:	41 5f                	pop    %r15
    593b:	e9 b0 f1 ff ff       	jmp    4af0 <cpu_exec>

0000000000005940 <init_sdb>:
    5940:	f3 0f 1e fa          	endbr64 
    5944:	48 83 ec 08          	sub    $0x8,%rsp
    5948:	31 c0                	xor    %eax,%eax
    594a:	e8 31 05 00 00       	call   5e80 <init_regex>
    594f:	31 c0                	xor    %eax,%eax
    5951:	e8 3a 0f 00 00       	call   6890 <init_wp_pool>
    5956:	31 c0                	xor    %eax,%eax
    5958:	48 83 c4 08          	add    $0x8,%rsp
    595c:	e9 0f 00 00 00       	jmp    5970 <init_bp_pool>
    5961:	66 2e 0f 1f 84 00 00 	cs nopw 0x0(%rax,%rax,1)
    5968:	00 00 00 
    596b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000005970 <init_bp_pool>:
    5970:	f3 0f 1e fa          	endbr64 
    5974:	83 3d b5 ac 00 00 01 	cmpl   $0x1,0xacb5(%rip)        # 10630 <has_initialed>
    597b:	0f 84 75 01 00 00    	je     5af6 <init_bp_pool+0x186>
    5981:	48 8d 05 d0 ac 00 00 	lea    0xacd0(%rip),%rax        # 10658 <bp_pool+0x18>
    5988:	c7 05 ae ac 00 00 00 	movl   $0x0,0xacae(%rip)        # 10640 <bp_pool>
    598f:	00 00 00 
    5992:	48 89 05 af ac 00 00 	mov    %rax,0xacaf(%rip)        # 10648 <bp_pool+0x8>
    5999:	48 83 c0 18          	add    $0x18,%rax
    599d:	48 89 05 bc ac 00 00 	mov    %rax,0xacbc(%rip)        # 10660 <bp_pool+0x20>
    59a4:	48 83 c0 18          	add    $0x18,%rax
    59a8:	48 89 05 c9 ac 00 00 	mov    %rax,0xacc9(%rip)        # 10678 <bp_pool+0x38>
    59af:	48 83 c0 18          	add    $0x18,%rax
    59b3:	48 89 05 d6 ac 00 00 	mov    %rax,0xacd6(%rip)        # 10690 <bp_pool+0x50>
    59ba:	48 83 c0 18          	add    $0x18,%rax
    59be:	48 89 05 e3 ac 00 00 	mov    %rax,0xace3(%rip)        # 106a8 <bp_pool+0x68>
    59c5:	48 83 c0 18          	add    $0x18,%rax
    59c9:	48 89 05 f0 ac 00 00 	mov    %rax,0xacf0(%rip)        # 106c0 <bp_pool+0x80>
    59d0:	48 83 c0 18          	add    $0x18,%rax
    59d4:	48 89 05 fd ac 00 00 	mov    %rax,0xacfd(%rip)        # 106d8 <bp_pool+0x98>
    59db:	48 83 c0 18          	add    $0x18,%rax
    59df:	48 89 05 0a ad 00 00 	mov    %rax,0xad0a(%rip)        # 106f0 <bp_pool+0xb0>
    59e6:	48 83 c0 18          	add    $0x18,%rax
    59ea:	48 89 05 17 ad 00 00 	mov    %rax,0xad17(%rip)        # 10708 <bp_pool+0xc8>
    59f1:	48 83 c0 18          	add    $0x18,%rax
    59f5:	48 89 05 24 ad 00 00 	mov    %rax,0xad24(%rip)        # 10720 <bp_pool+0xe0>
    59fc:	48 83 c0 18          	add    $0x18,%rax
    5a00:	48 89 05 31 ad 00 00 	mov    %rax,0xad31(%rip)        # 10738 <bp_pool+0xf8>
    5a07:	48 83 c0 18          	add    $0x18,%rax
    5a0b:	48 89 05 3e ad 00 00 	mov    %rax,0xad3e(%rip)        # 10750 <bp_pool+0x110>
    5a12:	48 83 c0 18          	add    $0x18,%rax
    5a16:	48 89 05 4b ad 00 00 	mov    %rax,0xad4b(%rip)        # 10768 <bp_pool+0x128>
    5a1d:	48 83 c0 18          	add    $0x18,%rax
    5a21:	48 89 05 58 ad 00 00 	mov    %rax,0xad58(%rip)        # 10780 <bp_pool+0x140>
    5a28:	48 83 c0 18          	add    $0x18,%rax
    5a2c:	48 89 05 65 ad 00 00 	mov    %rax,0xad65(%rip)        # 10798 <bp_pool+0x158>
    5a33:	48 2d 68 01 00 00    	sub    $0x168,%rax
    5a39:	c7 05 15 ac 00 00 01 	movl   $0x1,0xac15(%rip)        # 10658 <bp_pool+0x18>
    5a40:	00 00 00 
    5a43:	c7 05 23 ac 00 00 02 	movl   $0x2,0xac23(%rip)        # 10670 <bp_pool+0x30>
    5a4a:	00 00 00 
    5a4d:	c7 05 31 ac 00 00 03 	movl   $0x3,0xac31(%rip)        # 10688 <bp_pool+0x48>
    5a54:	00 00 00 
    5a57:	c7 05 3f ac 00 00 04 	movl   $0x4,0xac3f(%rip)        # 106a0 <bp_pool+0x60>
    5a5e:	00 00 00 
    5a61:	c7 05 4d ac 00 00 05 	movl   $0x5,0xac4d(%rip)        # 106b8 <bp_pool+0x78>
    5a68:	00 00 00 
    5a6b:	c7 05 5b ac 00 00 06 	movl   $0x6,0xac5b(%rip)        # 106d0 <bp_pool+0x90>
    5a72:	00 00 00 
    5a75:	c7 05 69 ac 00 00 07 	movl   $0x7,0xac69(%rip)        # 106e8 <bp_pool+0xa8>
    5a7c:	00 00 00 
    5a7f:	c7 05 77 ac 00 00 08 	movl   $0x8,0xac77(%rip)        # 10700 <bp_pool+0xc0>
    5a86:	00 00 00 
    5a89:	c7 05 85 ac 00 00 09 	movl   $0x9,0xac85(%rip)        # 10718 <bp_pool+0xd8>
    5a90:	00 00 00 
    5a93:	c7 05 93 ac 00 00 0a 	movl   $0xa,0xac93(%rip)        # 10730 <bp_pool+0xf0>
    5a9a:	00 00 00 
    5a9d:	c7 05 a1 ac 00 00 0b 	movl   $0xb,0xaca1(%rip)        # 10748 <bp_pool+0x108>
    5aa4:	00 00 00 
    5aa7:	c7 05 af ac 00 00 0c 	movl   $0xc,0xacaf(%rip)        # 10760 <bp_pool+0x120>
    5aae:	00 00 00 
    5ab1:	c7 05 bd ac 00 00 0d 	movl   $0xd,0xacbd(%rip)        # 10778 <bp_pool+0x138>
    5ab8:	00 00 00 
    5abb:	c7 05 cb ac 00 00 0e 	movl   $0xe,0xaccb(%rip)        # 10790 <bp_pool+0x150>
    5ac2:	00 00 00 
    5ac5:	c7 05 d9 ac 00 00 0f 	movl   $0xf,0xacd9(%rip)        # 107a8 <bp_pool+0x168>
    5acc:	00 00 00 
    5acf:	48 c7 05 d6 ac 00 00 	movq   $0x0,0xacd6(%rip)        # 107b0 <bp_pool+0x170>
    5ad6:	00 00 00 00 
    5ada:	48 c7 05 43 ab 00 00 	movq   $0x0,0xab43(%rip)        # 10628 <bp_head>
    5ae1:	00 00 00 00 
    5ae5:	48 89 05 4c ab 00 00 	mov    %rax,0xab4c(%rip)        # 10638 <bp_free>
    5aec:	c7 05 3a ab 00 00 01 	movl   $0x1,0xab3a(%rip)        # 10630 <has_initialed>
    5af3:	00 00 00 
    5af6:	c3                   	ret    
    5af7:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
    5afe:	00 00 

0000000000005b00 <new_bp>:
    5b00:	f3 0f 1e fa          	endbr64 
    5b04:	41 55                	push   %r13
    5b06:	8d 87 00 00 00 e4    	lea    -0x1c000000(%rdi),%eax
    5b0c:	41 54                	push   %r12
    5b0e:	48 83 ec 08          	sub    $0x8,%rsp
    5b12:	3d ff ff ff 07       	cmp    $0x7ffffff,%eax
    5b17:	0f 87 f3 00 00 00    	ja     5c10 <new_bp+0x110>
    5b1d:	be 04 00 00 00       	mov    $0x4,%esi
    5b22:	41 89 fd             	mov    %edi,%r13d
    5b25:	e8 26 1d 00 00       	call   7850 <break_ifetch>
    5b2a:	66 41 0f 6e c5       	movd   %r13d,%xmm0
    5b2f:	66 0f 6e c8          	movd   %eax,%xmm1
    5b33:	25 00 80 ff ff       	and    $0xffff8000,%eax
    5b38:	66 0f 62 c1          	punpckldq %xmm1,%xmm0
    5b3c:	3d 00 00 2a 00       	cmp    $0x2a0000,%eax
    5b41:	0f 84 f9 00 00 00    	je     5c40 <new_bp+0x140>
    5b47:	4c 8b 25 ea aa 00 00 	mov    0xaaea(%rip),%r12        # 10638 <bp_free>
    5b4e:	4d 85 e4             	test   %r12,%r12
    5b51:	0f 84 d9 00 00 00    	je     5c30 <new_bp+0x130>
    5b57:	49 8b 44 24 08       	mov    0x8(%r12),%rax
    5b5c:	49 c7 44 24 08 00 00 	movq   $0x0,0x8(%r12)
    5b63:	00 00 
    5b65:	48 89 05 cc aa 00 00 	mov    %rax,0xaacc(%rip)        # 10638 <bp_free>
    5b6c:	48 8b 05 b5 aa 00 00 	mov    0xaab5(%rip),%rax        # 10628 <bp_head>
    5b73:	48 85 c0             	test   %rax,%rax
    5b76:	74 78                	je     5bf0 <new_bp+0xf0>
    5b78:	41 8b 14 24          	mov    (%r12),%edx
    5b7c:	39 10                	cmp    %edx,(%rax)
    5b7e:	7c 54                	jl     5bd4 <new_bp+0xd4>
    5b80:	49 89 44 24 08       	mov    %rax,0x8(%r12)
    5b85:	4c 89 25 9c aa 00 00 	mov    %r12,0xaa9c(%rip)        # 10628 <bp_head>
    5b8c:	ba 00 00 2a 00       	mov    $0x2a0000,%edx
    5b91:	be 04 00 00 00       	mov    $0x4,%esi
    5b96:	44 89 ef             	mov    %r13d,%edi
    5b99:	66 41 0f d6 44 24 10 	movq   %xmm0,0x10(%r12)
    5ba0:	e8 eb 1c 00 00       	call   7890 <break_write>
    5ba5:	41 8b 14 24          	mov    (%r12),%edx
    5ba9:	44 89 e9             	mov    %r13d,%ecx
    5bac:	31 c0                	xor    %eax,%eax
    5bae:	48 8d 35 c7 3d 00 00 	lea    0x3dc7(%rip),%rsi        # 997c <__func__.1+0x2e4>
    5bb5:	bf 01 00 00 00       	mov    $0x1,%edi
    5bba:	e8 91 c7 ff ff       	call   2350 <__printf_chk@plt>
    5bbf:	48 83 c4 08          	add    $0x8,%rsp
    5bc3:	4c 89 e0             	mov    %r12,%rax
    5bc6:	41 5c                	pop    %r12
    5bc8:	41 5d                	pop    %r13
    5bca:	c3                   	ret    
    5bcb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
    5bd0:	3b 10                	cmp    (%rax),%edx
    5bd2:	7c 2c                	jl     5c00 <new_bp+0x100>
    5bd4:	48 89 c1             	mov    %rax,%rcx
    5bd7:	48 8b 40 08          	mov    0x8(%rax),%rax
    5bdb:	48 85 c0             	test   %rax,%rax
    5bde:	75 f0                	jne    5bd0 <new_bp+0xd0>
    5be0:	4c 89 61 08          	mov    %r12,0x8(%rcx)
    5be4:	eb a6                	jmp    5b8c <new_bp+0x8c>
    5be6:	66 2e 0f 1f 84 00 00 	cs nopw 0x0(%rax,%rax,1)
    5bed:	00 00 00 
    5bf0:	4c 89 25 31 aa 00 00 	mov    %r12,0xaa31(%rip)        # 10628 <bp_head>
    5bf7:	eb 93                	jmp    5b8c <new_bp+0x8c>
    5bf9:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    5c00:	49 89 44 24 08       	mov    %rax,0x8(%r12)
    5c05:	4c 89 61 08          	mov    %r12,0x8(%rcx)
    5c09:	eb 81                	jmp    5b8c <new_bp+0x8c>
    5c0b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
    5c10:	48 8d 3d 51 3d 00 00 	lea    0x3d51(%rip),%rdi        # 9968 <__func__.1+0x2d0>
    5c17:	45 31 e4             	xor    %r12d,%r12d
    5c1a:	e8 b1 c9 ff ff       	call   25d0 <puts@plt>
    5c1f:	48 83 c4 08          	add    $0x8,%rsp
    5c23:	4c 89 e0             	mov    %r12,%rax
    5c26:	41 5c                	pop    %r12
    5c28:	41 5d                	pop    %r13
    5c2a:	c3                   	ret    
    5c2b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
    5c30:	48 8d 3d 5c 3d 00 00 	lea    0x3d5c(%rip),%rdi        # 9993 <__func__.1+0x2fb>
    5c37:	e8 94 c9 ff ff       	call   25d0 <puts@plt>
    5c3c:	eb 81                	jmp    5bbf <new_bp+0xbf>
    5c3e:	66 90                	xchg   %ax,%ax
    5c40:	48 8d 3d d1 3d 00 00 	lea    0x3dd1(%rip),%rdi        # 9a18 <__func__.1+0x380>
    5c47:	45 31 e4             	xor    %r12d,%r12d
    5c4a:	e8 81 c9 ff ff       	call   25d0 <puts@plt>
    5c4f:	e9 6b ff ff ff       	jmp    5bbf <new_bp+0xbf>
    5c54:	66 66 2e 0f 1f 84 00 	data16 cs nopw 0x0(%rax,%rax,1)
    5c5b:	00 00 00 00 
    5c5f:	90                   	nop

0000000000005c60 <free_bp>:
    5c60:	f3 0f 1e fa          	endbr64 
    5c64:	41 54                	push   %r12
    5c66:	31 c0                	xor    %eax,%eax
    5c68:	55                   	push   %rbp
    5c69:	53                   	push   %rbx
    5c6a:	48 8b 1d b7 a9 00 00 	mov    0xa9b7(%rip),%rbx        # 10628 <bp_head>
    5c71:	48 85 db             	test   %rbx,%rbx
    5c74:	74 6f                	je     5ce5 <free_bp+0x85>
    5c76:	89 fd                	mov    %edi,%ebp
    5c78:	39 3b                	cmp    %edi,(%rbx)
    5c7a:	75 78                	jne    5cf4 <free_bp+0x94>
    5c7c:	49 89 dc             	mov    %rbx,%r12
    5c7f:	8b 53 14             	mov    0x14(%rbx),%edx
    5c82:	8b 7b 10             	mov    0x10(%rbx),%edi
    5c85:	be 04 00 00 00       	mov    $0x4,%esi
    5c8a:	e8 01 1c 00 00       	call   7890 <break_write>
    5c8f:	8b 4b 10             	mov    0x10(%rbx),%ecx
    5c92:	31 c0                	xor    %eax,%eax
    5c94:	89 ea                	mov    %ebp,%edx
    5c96:	48 8d 35 0f 3d 00 00 	lea    0x3d0f(%rip),%rsi        # 99ac <__func__.1+0x314>
    5c9d:	bf 01 00 00 00       	mov    $0x1,%edi
    5ca2:	e8 a9 c6 ff ff       	call   2350 <__printf_chk@plt>
    5ca7:	48 39 1d 7a a9 00 00 	cmp    %rbx,0xa97a(%rip)        # 10628 <bp_head>
    5cae:	48 8b 43 08          	mov    0x8(%rbx),%rax
    5cb2:	0f 84 90 00 00 00    	je     5d48 <free_bp+0xe8>
    5cb8:	49 89 44 24 08       	mov    %rax,0x8(%r12)
    5cbd:	48 8b 05 74 a9 00 00 	mov    0xa974(%rip),%rax        # 10638 <bp_free>
    5cc4:	48 c7 43 08 00 00 00 	movq   $0x0,0x8(%rbx)
    5ccb:	00 
    5ccc:	48 85 c0             	test   %rax,%rax
    5ccf:	74 5f                	je     5d30 <free_bp+0xd0>
    5cd1:	39 28                	cmp    %ebp,(%rax)
    5cd3:	7c 3f                	jl     5d14 <free_bp+0xb4>
    5cd5:	48 89 1d 5c a9 00 00 	mov    %rbx,0xa95c(%rip)        # 10638 <bp_free>
    5cdc:	48 89 43 08          	mov    %rax,0x8(%rbx)
    5ce0:	b8 01 00 00 00       	mov    $0x1,%eax
    5ce5:	5b                   	pop    %rbx
    5ce6:	5d                   	pop    %rbp
    5ce7:	41 5c                	pop    %r12
    5ce9:	c3                   	ret    
    5cea:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
    5cf0:	39 2b                	cmp    %ebp,(%rbx)
    5cf2:	74 8b                	je     5c7f <free_bp+0x1f>
    5cf4:	49 89 dc             	mov    %rbx,%r12
    5cf7:	48 8b 5b 08          	mov    0x8(%rbx),%rbx
    5cfb:	48 85 db             	test   %rbx,%rbx
    5cfe:	75 f0                	jne    5cf0 <free_bp+0x90>
    5d00:	5b                   	pop    %rbx
    5d01:	31 c0                	xor    %eax,%eax
    5d03:	5d                   	pop    %rbp
    5d04:	41 5c                	pop    %r12
    5d06:	c3                   	ret    
    5d07:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
    5d0e:	00 00 
    5d10:	39 28                	cmp    %ebp,(%rax)
    5d12:	7f 44                	jg     5d58 <free_bp+0xf8>
    5d14:	48 89 c2             	mov    %rax,%rdx
    5d17:	48 8b 40 08          	mov    0x8(%rax),%rax
    5d1b:	48 85 c0             	test   %rax,%rax
    5d1e:	75 f0                	jne    5d10 <free_bp+0xb0>
    5d20:	48 89 5a 08          	mov    %rbx,0x8(%rdx)
    5d24:	b8 01 00 00 00       	mov    $0x1,%eax
    5d29:	eb ba                	jmp    5ce5 <free_bp+0x85>
    5d2b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
    5d30:	48 89 1d 01 a9 00 00 	mov    %rbx,0xa901(%rip)        # 10638 <bp_free>
    5d37:	b8 01 00 00 00       	mov    $0x1,%eax
    5d3c:	5b                   	pop    %rbx
    5d3d:	5d                   	pop    %rbp
    5d3e:	41 5c                	pop    %r12
    5d40:	c3                   	ret    
    5d41:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    5d48:	48 89 05 d9 a8 00 00 	mov    %rax,0xa8d9(%rip)        # 10628 <bp_head>
    5d4f:	e9 64 ff ff ff       	jmp    5cb8 <free_bp+0x58>
    5d54:	0f 1f 40 00          	nopl   0x0(%rax)
    5d58:	48 89 43 08          	mov    %rax,0x8(%rbx)
    5d5c:	b8 01 00 00 00       	mov    $0x1,%eax
    5d61:	48 89 5a 08          	mov    %rbx,0x8(%rdx)
    5d65:	5b                   	pop    %rbx
    5d66:	5d                   	pop    %rbp
    5d67:	41 5c                	pop    %r12
    5d69:	c3                   	ret    
    5d6a:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

0000000000005d70 <display_breakpoint>:
    5d70:	f3 0f 1e fa          	endbr64 
    5d74:	55                   	push   %rbp
    5d75:	53                   	push   %rbx
    5d76:	48 83 ec 08          	sub    $0x8,%rsp
    5d7a:	48 8b 1d a7 a8 00 00 	mov    0xa8a7(%rip),%rbx        # 10628 <bp_head>
    5d81:	48 85 db             	test   %rbx,%rbx
    5d84:	74 42                	je     5dc8 <display_breakpoint+0x58>
    5d86:	48 8d 3d 4d 3c 00 00 	lea    0x3c4d(%rip),%rdi        # 99da <__func__.1+0x342>
    5d8d:	48 8d 2d 5a 3c 00 00 	lea    0x3c5a(%rip),%rbp        # 99ee <__func__.1+0x356>
    5d94:	e8 37 c8 ff ff       	call   25d0 <puts@plt>
    5d99:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    5da0:	8b 4b 10             	mov    0x10(%rbx),%ecx
    5da3:	8b 13                	mov    (%rbx),%edx
    5da5:	48 89 ee             	mov    %rbp,%rsi
    5da8:	bf 01 00 00 00       	mov    $0x1,%edi
    5dad:	31 c0                	xor    %eax,%eax
    5daf:	e8 9c c5 ff ff       	call   2350 <__printf_chk@plt>
    5db4:	48 8b 5b 08          	mov    0x8(%rbx),%rbx
    5db8:	48 85 db             	test   %rbx,%rbx
    5dbb:	75 e3                	jne    5da0 <display_breakpoint+0x30>
    5dbd:	48 83 c4 08          	add    $0x8,%rsp
    5dc1:	5b                   	pop    %rbx
    5dc2:	5d                   	pop    %rbp
    5dc3:	c3                   	ret    
    5dc4:	0f 1f 40 00          	nopl   0x0(%rax)
    5dc8:	48 83 c4 08          	add    $0x8,%rsp
    5dcc:	48 8d 3d f3 3b 00 00 	lea    0x3bf3(%rip),%rdi        # 99c6 <__func__.1+0x32e>
    5dd3:	5b                   	pop    %rbx
    5dd4:	5d                   	pop    %rbp
    5dd5:	e9 f6 c7 ff ff       	jmp    25d0 <puts@plt>
    5dda:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

0000000000005de0 <scan_bp>:
    5de0:	f3 0f 1e fa          	endbr64 
    5de4:	53                   	push   %rbx
    5de5:	48 8b 1d 3c a8 00 00 	mov    0xa83c(%rip),%rbx        # 10628 <bp_head>
    5dec:	48 85 db             	test   %rbx,%rbx
    5def:	74 3f                	je     5e30 <scan_bp+0x50>
    5df1:	89 fa                	mov    %edi,%edx
    5df3:	eb 0c                	jmp    5e01 <scan_bp+0x21>
    5df5:	0f 1f 00             	nopl   (%rax)
    5df8:	48 8b 5b 08          	mov    0x8(%rbx),%rbx
    5dfc:	48 85 db             	test   %rbx,%rbx
    5dff:	74 2f                	je     5e30 <scan_bp+0x50>
    5e01:	39 53 10             	cmp    %edx,0x10(%rbx)
    5e04:	75 f2                	jne    5df8 <scan_bp+0x18>
    5e06:	48 8d 35 f6 3b 00 00 	lea    0x3bf6(%rip),%rsi        # 9a03 <__func__.1+0x36b>
    5e0d:	bf 01 00 00 00       	mov    $0x1,%edi
    5e12:	31 c0                	xor    %eax,%eax
    5e14:	e8 37 c5 ff ff       	call   2350 <__printf_chk@plt>
    5e19:	8b 43 14             	mov    0x14(%rbx),%eax
    5e1c:	5b                   	pop    %rbx
    5e1d:	89 05 fd a7 00 00    	mov    %eax,0xa7fd(%rip)        # 10620 <replaced_inst>
    5e23:	b8 01 00 00 00       	mov    $0x1,%eax
    5e28:	c3                   	ret    
    5e29:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    5e30:	31 c0                	xor    %eax,%eax
    5e32:	5b                   	pop    %rbx
    5e33:	c3                   	ret    
    5e34:	66 66 2e 0f 1f 84 00 	data16 cs nopw 0x0(%rax,%rax,1)
    5e3b:	00 00 00 00 
    5e3f:	90                   	nop

0000000000005e40 <reload_bp>:
    5e40:	f3 0f 1e fa          	endbr64 
    5e44:	53                   	push   %rbx
    5e45:	48 8b 1d dc a7 00 00 	mov    0xa7dc(%rip),%rbx        # 10628 <bp_head>
    5e4c:	48 85 db             	test   %rbx,%rbx
    5e4f:	74 22                	je     5e73 <reload_bp+0x33>
    5e51:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    5e58:	8b 7b 10             	mov    0x10(%rbx),%edi
    5e5b:	ba 00 00 2a 00       	mov    $0x2a0000,%edx
    5e60:	be 04 00 00 00       	mov    $0x4,%esi
    5e65:	e8 26 1a 00 00       	call   7890 <break_write>
    5e6a:	48 8b 5b 08          	mov    0x8(%rbx),%rbx
    5e6e:	48 85 db             	test   %rbx,%rbx
    5e71:	75 e5                	jne    5e58 <reload_bp+0x18>
    5e73:	c7 05 a3 a6 00 00 00 	movl   $0x0,0xa6a3(%rip)        # 10520 <break_flag>
    5e7a:	00 00 00 
    5e7d:	5b                   	pop    %rbx
    5e7e:	c3                   	ret    
    5e7f:	90                   	nop

0000000000005e80 <init_regex>:
    5e80:	f3 0f 1e fa          	endbr64 
    5e84:	41 55                	push   %r13
    5e86:	41 54                	push   %r12
    5e88:	55                   	push   %rbp
    5e89:	48 8d 2d 50 f1 00 00 	lea    0xf150(%rip),%rbp        # 14fe0 <re>
    5e90:	53                   	push   %rbx
    5e91:	48 8d 1d a8 7c 00 00 	lea    0x7ca8(%rip),%rbx        # db40 <rules>
    5e98:	4c 8d ab d0 00 00 00 	lea    0xd0(%rbx),%r13
    5e9f:	48 81 ec 98 00 00 00 	sub    $0x98,%rsp
    5ea6:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    5ead:	00 00 
    5eaf:	48 89 84 24 88 00 00 	mov    %rax,0x88(%rsp)
    5eb6:	00 
    5eb7:	31 c0                	xor    %eax,%eax
    5eb9:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    5ec0:	4c 8b 23             	mov    (%rbx),%r12
    5ec3:	ba 01 00 00 00       	mov    $0x1,%edx
    5ec8:	48 89 ef             	mov    %rbp,%rdi
    5ecb:	4c 89 e6             	mov    %r12,%rsi
    5ece:	e8 1d c6 ff ff       	call   24f0 <regcomp@plt>
    5ed3:	85 c0                	test   %eax,%eax
    5ed5:	75 32                	jne    5f09 <init_regex+0x89>
    5ed7:	48 83 c3 10          	add    $0x10,%rbx
    5edb:	48 83 c5 40          	add    $0x40,%rbp
    5edf:	4c 39 eb             	cmp    %r13,%rbx
    5ee2:	75 dc                	jne    5ec0 <init_regex+0x40>
    5ee4:	48 8b 84 24 88 00 00 	mov    0x88(%rsp),%rax
    5eeb:	00 
    5eec:	64 48 2b 04 25 28 00 	sub    %fs:0x28,%rax
    5ef3:	00 00 
    5ef5:	0f 85 81 00 00 00    	jne    5f7c <init_regex+0xfc>
    5efb:	48 81 c4 98 00 00 00 	add    $0x98,%rsp
    5f02:	5b                   	pop    %rbx
    5f03:	5d                   	pop    %rbp
    5f04:	41 5c                	pop    %r12
    5f06:	41 5d                	pop    %r13
    5f08:	c3                   	ret    
    5f09:	49 89 e5             	mov    %rsp,%r13
    5f0c:	b9 80 00 00 00       	mov    $0x80,%ecx
    5f11:	48 89 ee             	mov    %rbp,%rsi
    5f14:	89 c7                	mov    %eax,%edi
    5f16:	4c 89 ea             	mov    %r13,%rdx
    5f19:	e8 92 c4 ff ff       	call   23b0 <regerror@plt>
    5f1e:	48 8b 3d db 90 00 00 	mov    0x90db(%rip),%rdi        # f000 <stdout@GLIBC_2.2.5>
    5f25:	e8 d6 c5 ff ff       	call   2500 <fflush@plt>
    5f2a:	4c 89 e9             	mov    %r13,%rcx
    5f2d:	be 01 00 00 00       	mov    $0x1,%esi
    5f32:	4d 89 e0             	mov    %r12,%r8
    5f35:	48 8b 3d 04 91 00 00 	mov    0x9104(%rip),%rdi        # f040 <stderr@GLIBC_2.2.5>
    5f3c:	48 8d 15 fd 3a 00 00 	lea    0x3afd(%rip),%rdx        # 9a40 <__func__.1+0x3a8>
    5f43:	31 c0                	xor    %eax,%eax
    5f45:	e8 b6 c6 ff ff       	call   2600 <__fprintf_chk@plt>
    5f4a:	48 8b 3d 17 f6 00 00 	mov    0xf617(%rip),%rdi        # 15568 <log_fp>
    5f51:	e8 aa c5 ff ff       	call   2500 <fflush@plt>
    5f56:	31 c0                	xor    %eax,%eax
    5f58:	e8 73 eb ff ff       	call   4ad0 <assert_fail_msg>
    5f5d:	48 8d 0d ec 3b 00 00 	lea    0x3bec(%rip),%rcx        # 9b50 <__PRETTY_FUNCTION__.0>
    5f64:	ba 47 00 00 00       	mov    $0x47,%edx
    5f69:	48 8d 35 22 3b 00 00 	lea    0x3b22(%rip),%rsi        # 9a92 <__func__.1+0x3fa>
    5f70:	48 8d 3d b9 30 00 00 	lea    0x30b9(%rip),%rdi        # 9030 <_IO_stdin_used+0x30>
    5f77:	e8 84 c4 ff ff       	call   2400 <__assert_fail@plt>
    5f7c:	e8 3f c5 ff ff       	call   24c0 <__stack_chk_fail@plt>
    5f81:	66 66 2e 0f 1f 84 00 	data16 cs nopw 0x0(%rax,%rax,1)
    5f88:	00 00 00 00 
    5f8c:	0f 1f 40 00          	nopl   0x0(%rax)

0000000000005f90 <skip_brackets>:
    5f90:	f3 0f 1e fa          	endbr64 
    5f94:	8d 46 ff             	lea    -0x1(%rsi),%eax
    5f97:	39 f8                	cmp    %edi,%eax
    5f99:	7c 61                	jl     5ffc <skip_brackets+0x6c>
    5f9b:	48 63 f6             	movslq %esi,%rsi
    5f9e:	48 8d 15 3b a8 00 00 	lea    0xa83b(%rip),%rdx        # 107e0 <tokens>
    5fa5:	45 31 c0             	xor    %r8d,%r8d
    5fa8:	48 8d 0c f6          	lea    (%rsi,%rsi,8),%rcx
    5fac:	be 01 00 00 00       	mov    $0x1,%esi
    5fb1:	48 8d 14 8a          	lea    (%rdx,%rcx,4),%rdx
    5fb5:	eb 1f                	jmp    5fd6 <skip_brackets+0x46>
    5fb7:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
    5fbe:	00 00 
    5fc0:	83 f9 29             	cmp    $0x29,%ecx
    5fc3:	0f 94 c1             	sete   %cl
    5fc6:	0f b6 c9             	movzbl %cl,%ecx
    5fc9:	01 ce                	add    %ecx,%esi
    5fcb:	83 e8 01             	sub    $0x1,%eax
    5fce:	48 83 ea 24          	sub    $0x24,%rdx
    5fd2:	39 c7                	cmp    %eax,%edi
    5fd4:	7f 1a                	jg     5ff0 <skip_brackets+0x60>
    5fd6:	8b 4a dc             	mov    -0x24(%rdx),%ecx
    5fd9:	83 f9 28             	cmp    $0x28,%ecx
    5fdc:	75 e2                	jne    5fc0 <skip_brackets+0x30>
    5fde:	41 83 c0 01          	add    $0x1,%r8d
    5fe2:	41 39 f0             	cmp    %esi,%r8d
    5fe5:	75 e4                	jne    5fcb <skip_brackets+0x3b>
    5fe7:	c3                   	ret    
    5fe8:	0f 1f 84 00 00 00 00 	nopl   0x0(%rax,%rax,1)
    5fef:	00 
    5ff0:	41 39 f0             	cmp    %esi,%r8d
    5ff3:	ba ff ff ff ff       	mov    $0xffffffff,%edx
    5ff8:	0f 45 c2             	cmovne %edx,%eax
    5ffb:	c3                   	ret    
    5ffc:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    6001:	c3                   	ret    
    6002:	66 66 2e 0f 1f 84 00 	data16 cs nopw 0x0(%rax,%rax,1)
    6009:	00 00 00 00 
    600d:	0f 1f 00             	nopl   (%rax)

0000000000006010 <left_op_priority>:
    6010:	f3 0f 1e fa          	endbr64 
    6014:	81 ff 02 01 00 00    	cmp    $0x102,%edi
    601a:	7f 2c                	jg     6048 <left_op_priority+0x38>
    601c:	b8 01 00 00 00       	mov    $0x1,%eax
    6021:	81 ff 00 01 00 00    	cmp    $0x100,%edi
    6027:	7f 5c                	jg     6085 <left_op_priority+0x75>
    6029:	83 ff 2d             	cmp    $0x2d,%edi
    602c:	74 52                	je     6080 <left_op_priority+0x70>
    602e:	7e 30                	jle    6060 <left_op_priority+0x50>
    6030:	83 ff 2f             	cmp    $0x2f,%edi
    6033:	ba 03 00 00 00       	mov    $0x3,%edx
    6038:	b8 00 01 00 00       	mov    $0x100,%eax
    603d:	0f 44 c2             	cmove  %edx,%eax
    6040:	c3                   	ret    
    6041:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    6048:	31 c0                	xor    %eax,%eax
    604a:	81 ff 06 01 00 00    	cmp    $0x106,%edi
    6050:	0f 95 c0             	setne  %al
    6053:	c1 e0 08             	shl    $0x8,%eax
    6056:	c3                   	ret    
    6057:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
    605e:	00 00 
    6060:	b8 03 00 00 00       	mov    $0x3,%eax
    6065:	83 ff 2a             	cmp    $0x2a,%edi
    6068:	74 1b                	je     6085 <left_op_priority+0x75>
    606a:	83 ff 2b             	cmp    $0x2b,%edi
    606d:	ba 02 00 00 00       	mov    $0x2,%edx
    6072:	b8 00 01 00 00       	mov    $0x100,%eax
    6077:	0f 44 c2             	cmove  %edx,%eax
    607a:	c3                   	ret    
    607b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
    6080:	b8 02 00 00 00       	mov    $0x2,%eax
    6085:	c3                   	ret    
    6086:	66 2e 0f 1f 84 00 00 	cs nopw 0x0(%rax,%rax,1)
    608d:	00 00 00 

0000000000006090 <found_main_op>:
    6090:	f3 0f 1e fa          	endbr64 
    6094:	39 fe                	cmp    %edi,%esi
    6096:	0f 8c 5e 01 00 00    	jl     61fa <found_main_op+0x16a>
    609c:	53                   	push   %rbx
    609d:	41 89 f1             	mov    %esi,%r9d
    60a0:	89 f0                	mov    %esi,%eax
    60a2:	41 b8 00 01 00 00    	mov    $0x100,%r8d
    60a8:	41 ba ff ff ff ff    	mov    $0xffffffff,%r10d
    60ae:	4c 8d 1d 2b a7 00 00 	lea    0xa72b(%rip),%r11        # 107e0 <tokens>
    60b5:	eb 1b                	jmp    60d2 <found_main_op+0x42>
    60b7:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
    60be:	00 00 
    60c0:	81 f9 00 01 00 00    	cmp    $0x100,%ecx
    60c6:	0f 8f a4 00 00 00    	jg     6170 <found_main_op+0xe0>
    60cc:	89 f0                	mov    %esi,%eax
    60ce:	39 f7                	cmp    %esi,%edi
    60d0:	7f 47                	jg     6119 <found_main_op+0x89>
    60d2:	48 63 d0             	movslq %eax,%rdx
    60d5:	8d 70 ff             	lea    -0x1(%rax),%esi
    60d8:	48 8d 14 d2          	lea    (%rdx,%rdx,8),%rdx
    60dc:	49 8d 14 93          	lea    (%r11,%rdx,4),%rdx
    60e0:	8b 0a                	mov    (%rdx),%ecx
    60e2:	83 f9 29             	cmp    $0x29,%ecx
    60e5:	0f 84 a5 00 00 00    	je     6190 <found_main_op+0x100>
    60eb:	83 f9 2f             	cmp    $0x2f,%ecx
    60ee:	0f 84 fc 00 00 00    	je     61f0 <found_main_op+0x160>
    60f4:	7e 5a                	jle    6150 <found_main_op+0xc0>
    60f6:	81 f9 02 01 00 00    	cmp    $0x102,%ecx
    60fc:	7e c2                	jle    60c0 <found_main_op+0x30>
    60fe:	81 f9 06 01 00 00    	cmp    $0x106,%ecx
    6104:	75 c6                	jne    60cc <found_main_op+0x3c>
    6106:	31 d2                	xor    %edx,%edx
    6108:	41 39 d0             	cmp    %edx,%r8d
    610b:	7e bf                	jle    60cc <found_main_op+0x3c>
    610d:	41 89 c2             	mov    %eax,%r10d
    6110:	41 89 d0             	mov    %edx,%r8d
    6113:	89 f0                	mov    %esi,%eax
    6115:	39 f7                	cmp    %esi,%edi
    6117:	7e b9                	jle    60d2 <found_main_op+0x42>
    6119:	41 83 f8 03          	cmp    $0x3,%r8d
    611d:	7e 2c                	jle    614b <found_main_op+0xbb>
    611f:	48 63 c7             	movslq %edi,%rax
    6122:	48 8d 04 c0          	lea    (%rax,%rax,8),%rax
    6126:	49 8d 14 83          	lea    (%r11,%rax,4),%rdx
    612a:	eb 10                	jmp    613c <found_main_op+0xac>
    612c:	0f 1f 40 00          	nopl   0x0(%rax)
    6130:	83 c7 01             	add    $0x1,%edi
    6133:	48 83 c2 24          	add    $0x24,%rdx
    6137:	41 39 f9             	cmp    %edi,%r9d
    613a:	7c 0f                	jl     614b <found_main_op+0xbb>
    613c:	8b 02                	mov    (%rdx),%eax
    613e:	2d 07 01 00 00       	sub    $0x107,%eax
    6143:	83 f8 01             	cmp    $0x1,%eax
    6146:	77 e8                	ja     6130 <found_main_op+0xa0>
    6148:	41 89 fa             	mov    %edi,%r10d
    614b:	44 89 d0             	mov    %r10d,%eax
    614e:	5b                   	pop    %rbx
    614f:	c3                   	ret    
    6150:	8d 51 d5             	lea    -0x2b(%rcx),%edx
    6153:	83 e2 fd             	and    $0xfffffffd,%edx
    6156:	74 28                	je     6180 <found_main_op+0xf0>
    6158:	ba 03 00 00 00       	mov    $0x3,%edx
    615d:	83 f9 2a             	cmp    $0x2a,%ecx
    6160:	74 a6                	je     6108 <found_main_op+0x78>
    6162:	e9 65 ff ff ff       	jmp    60cc <found_main_op+0x3c>
    6167:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
    616e:	00 00 
    6170:	ba 01 00 00 00       	mov    $0x1,%edx
    6175:	eb 91                	jmp    6108 <found_main_op+0x78>
    6177:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
    617e:	00 00 
    6180:	ba 02 00 00 00       	mov    $0x2,%edx
    6185:	e9 7e ff ff ff       	jmp    6108 <found_main_op+0x78>
    618a:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
    6190:	b9 01 00 00 00       	mov    $0x1,%ecx
    6195:	31 db                	xor    %ebx,%ebx
    6197:	39 f7                	cmp    %esi,%edi
    6199:	7e 1d                	jle    61b8 <found_main_op+0x128>
    619b:	eb 63                	jmp    6200 <found_main_op+0x170>
    619d:	0f 1f 00             	nopl   (%rax)
    61a0:	83 f8 29             	cmp    $0x29,%eax
    61a3:	0f 94 c0             	sete   %al
    61a6:	0f b6 c0             	movzbl %al,%eax
    61a9:	01 c1                	add    %eax,%ecx
    61ab:	8d 46 ff             	lea    -0x1(%rsi),%eax
    61ae:	48 83 ea 24          	sub    $0x24,%rdx
    61b2:	39 c7                	cmp    %eax,%edi
    61b4:	7f 1a                	jg     61d0 <found_main_op+0x140>
    61b6:	89 c6                	mov    %eax,%esi
    61b8:	8b 42 dc             	mov    -0x24(%rdx),%eax
    61bb:	83 f8 28             	cmp    $0x28,%eax
    61be:	75 e0                	jne    61a0 <found_main_op+0x110>
    61c0:	83 c3 01             	add    $0x1,%ebx
    61c3:	39 cb                	cmp    %ecx,%ebx
    61c5:	75 e4                	jne    61ab <found_main_op+0x11b>
    61c7:	83 ee 01             	sub    $0x1,%esi
    61ca:	e9 fd fe ff ff       	jmp    60cc <found_main_op+0x3c>
    61cf:	90                   	nop
    61d0:	39 cb                	cmp    %ecx,%ebx
    61d2:	75 2c                	jne    6200 <found_main_op+0x170>
    61d4:	48 63 d0             	movslq %eax,%rdx
    61d7:	83 ee 02             	sub    $0x2,%esi
    61da:	48 8d 14 d2          	lea    (%rdx,%rdx,8),%rdx
    61de:	41 8b 0c 93          	mov    (%r11,%rdx,4),%ecx
    61e2:	83 f9 2f             	cmp    $0x2f,%ecx
    61e5:	0f 85 09 ff ff ff    	jne    60f4 <found_main_op+0x64>
    61eb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
    61f0:	ba 03 00 00 00       	mov    $0x3,%edx
    61f5:	e9 0e ff ff ff       	jmp    6108 <found_main_op+0x78>
    61fa:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    61ff:	c3                   	ret    
    6200:	8b 0d b6 a5 00 00    	mov    0xa5b6(%rip),%ecx        # 107bc <bp_pool+0x17c>
    6206:	be fe ff ff ff       	mov    $0xfffffffe,%esi
    620b:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    6210:	e9 d6 fe ff ff       	jmp    60eb <found_main_op+0x5b>
    6215:	66 66 2e 0f 1f 84 00 	data16 cs nopw 0x0(%rax,%rax,1)
    621c:	00 00 00 00 

0000000000006220 <eval>:
    6220:	f3 0f 1e fa          	endbr64 
    6224:	41 56                	push   %r14
    6226:	41 55                	push   %r13
    6228:	41 54                	push   %r12
    622a:	55                   	push   %rbp
    622b:	53                   	push   %rbx
    622c:	48 83 ec 10          	sub    $0x10,%rsp
    6230:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    6237:	00 00 
    6239:	48 89 44 24 08       	mov    %rax,0x8(%rsp)
    623e:	31 c0                	xor    %eax,%eax
    6240:	39 fe                	cmp    %edi,%esi
    6242:	0f 8c 3d 01 00 00    	jl     6385 <eval+0x165>
    6248:	41 89 f4             	mov    %esi,%r12d
    624b:	48 89 d3             	mov    %rdx,%rbx
    624e:	0f 84 80 01 00 00    	je     63d4 <eval+0x1b4>
    6254:	48 63 c6             	movslq %esi,%rax
    6257:	4c 8d 2d 82 a5 00 00 	lea    0xa582(%rip),%r13        # 107e0 <tokens>
    625e:	89 fd                	mov    %edi,%ebp
    6260:	48 8d 04 c0          	lea    (%rax,%rax,8),%rax
    6264:	4d 8d 4c 85 00       	lea    0x0(%r13,%rax,4),%r9
    6269:	41 83 39 29          	cmpl   $0x29,(%r9)
    626d:	75 74                	jne    62e3 <eval+0xc3>
    626f:	90                   	nop
    6270:	45 8d 44 24 ff       	lea    -0x1(%r12),%r8d
    6275:	41 39 e8             	cmp    %ebp,%r8d
    6278:	0f 8c 0e 01 00 00    	jl     638c <eval+0x16c>
    627e:	4c 89 ca             	mov    %r9,%rdx
    6281:	44 89 c0             	mov    %r8d,%eax
    6284:	be 01 00 00 00       	mov    $0x1,%esi
    6289:	31 ff                	xor    %edi,%edi
    628b:	eb 1d                	jmp    62aa <eval+0x8a>
    628d:	0f 1f 00             	nopl   (%rax)
    6290:	83 f9 29             	cmp    $0x29,%ecx
    6293:	0f 94 c1             	sete   %cl
    6296:	0f b6 c9             	movzbl %cl,%ecx
    6299:	01 ce                	add    %ecx,%esi
    629b:	83 e8 01             	sub    $0x1,%eax
    629e:	48 83 ea 24          	sub    $0x24,%rdx
    62a2:	39 e8                	cmp    %ebp,%eax
    62a4:	0f 8c a6 00 00 00    	jl     6350 <eval+0x130>
    62aa:	8b 4a dc             	mov    -0x24(%rdx),%ecx
    62ad:	83 f9 28             	cmp    $0x28,%ecx
    62b0:	75 de                	jne    6290 <eval+0x70>
    62b2:	83 c7 01             	add    $0x1,%edi
    62b5:	39 f7                	cmp    %esi,%edi
    62b7:	75 e2                	jne    629b <eval+0x7b>
    62b9:	39 e8                	cmp    %ebp,%eax
    62bb:	0f 85 93 00 00 00    	jne    6354 <eval+0x134>
    62c1:	83 c5 01             	add    $0x1,%ebp
    62c4:	44 39 c5             	cmp    %r8d,%ebp
    62c7:	0f 8f b8 00 00 00    	jg     6385 <eval+0x165>
    62cd:	49 83 e9 24          	sub    $0x24,%r9
    62d1:	44 39 c5             	cmp    %r8d,%ebp
    62d4:	0f 84 04 01 00 00    	je     63de <eval+0x1be>
    62da:	41 83 39 29          	cmpl   $0x29,(%r9)
    62de:	45 89 c4             	mov    %r8d,%r12d
    62e1:	74 8d                	je     6270 <eval+0x50>
    62e3:	44 89 e6             	mov    %r12d,%esi
    62e6:	89 ef                	mov    %ebp,%edi
    62e8:	e8 a3 fd ff ff       	call   6090 <found_main_op>
    62ed:	4c 63 f0             	movslq %eax,%r14
    62f0:	41 83 fe ff          	cmp    $0xffffffff,%r14d
    62f4:	74 63                	je     6359 <eval+0x139>
    62f6:	89 ef                	mov    %ebp,%edi
    62f8:	41 8d 76 ff          	lea    -0x1(%r14),%esi
    62fc:	48 89 da             	mov    %rbx,%rdx
    62ff:	e8 1c ff ff ff       	call   6220 <eval>
    6304:	41 8d 7e 01          	lea    0x1(%r14),%edi
    6308:	48 89 da             	mov    %rbx,%rdx
    630b:	44 89 e6             	mov    %r12d,%esi
    630e:	89 c5                	mov    %eax,%ebp
    6310:	e8 0b ff ff ff       	call   6220 <eval>
    6315:	89 c7                	mov    %eax,%edi
    6317:	4b 8d 04 f6          	lea    (%r14,%r14,8),%rax
    631b:	41 8b 54 85 00       	mov    0x0(%r13,%rax,4),%edx
    6320:	81 fa 08 01 00 00    	cmp    $0x108,%edx
    6326:	7f 5d                	jg     6385 <eval+0x165>
    6328:	81 fa 00 01 00 00    	cmp    $0x100,%edx
    632e:	7e 66                	jle    6396 <eval+0x176>
    6330:	81 ea 01 01 00 00    	sub    $0x101,%edx
    6336:	83 fa 07             	cmp    $0x7,%edx
    6339:	77 4a                	ja     6385 <eval+0x165>
    633b:	48 8d 0d ee 37 00 00 	lea    0x37ee(%rip),%rcx        # 9b30 <__func__.1+0x498>
    6342:	48 63 04 91          	movslq (%rcx,%rdx,4),%rax
    6346:	48 01 c8             	add    %rcx,%rax
    6349:	3e ff e0             	notrack jmp *%rax
    634c:	0f 1f 40 00          	nopl   0x0(%rax)
    6350:	39 f7                	cmp    %esi,%edi
    6352:	75 38                	jne    638c <eval+0x16c>
    6354:	83 f8 ff             	cmp    $0xffffffff,%eax
    6357:	75 8a                	jne    62e3 <eval+0xc3>
    6359:	c7 03 ff ff ff ff    	movl   $0xffffffff,(%rbx)
    635f:	b8 01 00 00 00       	mov    $0x1,%eax
    6364:	48 8b 54 24 08       	mov    0x8(%rsp),%rdx
    6369:	64 48 2b 14 25 28 00 	sub    %fs:0x28,%rdx
    6370:	00 00 
    6372:	0f 85 87 01 00 00    	jne    64ff <eval+0x2df>
    6378:	48 83 c4 10          	add    $0x10,%rsp
    637c:	5b                   	pop    %rbx
    637d:	5d                   	pop    %rbp
    637e:	41 5c                	pop    %r12
    6380:	41 5d                	pop    %r13
    6382:	41 5e                	pop    %r14
    6384:	c3                   	ret    
    6385:	b8 01 00 00 00       	mov    $0x1,%eax
    638a:	eb d8                	jmp    6364 <eval+0x144>
    638c:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    6391:	e9 23 ff ff ff       	jmp    62b9 <eval+0x99>
    6396:	89 e8                	mov    %ebp,%eax
    6398:	29 f8                	sub    %edi,%eax
    639a:	83 fa 2d             	cmp    $0x2d,%edx
    639d:	74 c5                	je     6364 <eval+0x144>
    639f:	7e 1f                	jle    63c0 <eval+0x1a0>
    63a1:	83 fa 2f             	cmp    $0x2f,%edx
    63a4:	75 df                	jne    6385 <eval+0x165>
    63a6:	85 ff                	test   %edi,%edi
    63a8:	0f 84 fd 00 00 00    	je     64ab <eval+0x28b>
    63ae:	89 e8                	mov    %ebp,%eax
    63b0:	31 d2                	xor    %edx,%edx
    63b2:	f7 f7                	div    %edi
    63b4:	eb ae                	jmp    6364 <eval+0x144>
    63b6:	66 2e 0f 1f 84 00 00 	cs nopw 0x0(%rax,%rax,1)
    63bd:	00 00 00 
    63c0:	83 fa 2a             	cmp    $0x2a,%edx
    63c3:	0f 84 01 01 00 00    	je     64ca <eval+0x2aa>
    63c9:	83 fa 2b             	cmp    $0x2b,%edx
    63cc:	75 b7                	jne    6385 <eval+0x165>
    63ce:	8d 44 3d 00          	lea    0x0(%rbp,%rdi,1),%eax
    63d2:	eb 90                	jmp    6364 <eval+0x144>
    63d4:	41 89 f0             	mov    %esi,%r8d
    63d7:	4c 8d 2d 02 a4 00 00 	lea    0xa402(%rip),%r13        # 107e0 <tokens>
    63de:	49 63 c0             	movslq %r8d,%rax
    63e1:	48 8d 04 c0          	lea    (%rax,%rax,8),%rax
    63e5:	48 c1 e0 02          	shl    $0x2,%rax
    63e9:	41 8b 54 05 00       	mov    0x0(%r13,%rax,1),%edx
    63ee:	81 fa 03 01 00 00    	cmp    $0x103,%edx
    63f4:	0f 84 da 00 00 00    	je     64d4 <eval+0x2b4>
    63fa:	81 fa 04 01 00 00    	cmp    $0x104,%edx
    6400:	0f 84 84 00 00 00    	je     648a <eval+0x26a>
    6406:	45 89 c4             	mov    %r8d,%r12d
    6409:	44 89 c5             	mov    %r8d,%ebp
    640c:	81 fa 05 01 00 00    	cmp    $0x105,%edx
    6412:	0f 85 cb fe ff ff    	jne    62e3 <eval+0xc3>
    6418:	48 8d 74 24 04       	lea    0x4(%rsp),%rsi
    641d:	49 8d 7c 05 04       	lea    0x4(%r13,%rax,1),%rdi
    6422:	e8 19 de ff ff       	call   4240 <isa_reg_str2val>
    6427:	80 7c 24 04 00       	cmpb   $0x0,0x4(%rsp)
    642c:	0f 85 32 ff ff ff    	jne    6364 <eval+0x144>
    6432:	c7 03 00 00 00 00    	movl   $0x0,(%rbx)
    6438:	b8 01 00 00 00       	mov    $0x1,%eax
    643d:	e9 22 ff ff ff       	jmp    6364 <eval+0x144>
    6442:	48 8d 54 24 04       	lea    0x4(%rsp),%rdx
    6447:	be 04 00 00 00       	mov    $0x4,%esi
    644c:	e8 1f 14 00 00       	call   7870 <sdb_vaddr_read>
    6451:	e9 0e ff ff ff       	jmp    6364 <eval+0x144>
    6456:	31 c0                	xor    %eax,%eax
    6458:	39 fd                	cmp    %edi,%ebp
    645a:	0f 94 c0             	sete   %al
    645d:	e9 02 ff ff ff       	jmp    6364 <eval+0x144>
    6462:	31 c0                	xor    %eax,%eax
    6464:	39 fd                	cmp    %edi,%ebp
    6466:	0f 95 c0             	setne  %al
    6469:	e9 f6 fe ff ff       	jmp    6364 <eval+0x144>
    646e:	85 ed                	test   %ebp,%ebp
    6470:	0f 95 c2             	setne  %dl
    6473:	31 c0                	xor    %eax,%eax
    6475:	85 ff                	test   %edi,%edi
    6477:	0f 95 c0             	setne  %al
    647a:	21 d0                	and    %edx,%eax
    647c:	e9 e3 fe ff ff       	jmp    6364 <eval+0x144>
    6481:	89 f8                	mov    %edi,%eax
    6483:	f7 d8                	neg    %eax
    6485:	e9 da fe ff ff       	jmp    6364 <eval+0x144>
    648a:	49 8d 7c 05 04       	lea    0x4(%r13,%rax,1),%rdi
    648f:	48 8d 54 24 04       	lea    0x4(%rsp),%rdx
    6494:	31 c0                	xor    %eax,%eax
    6496:	48 8d 35 1f 33 00 00 	lea    0x331f(%rip),%rsi        # 97bc <__func__.1+0x124>
    649d:	e8 ee bf ff ff       	call   2490 <__isoc99_sscanf@plt>
    64a2:	8b 44 24 04          	mov    0x4(%rsp),%eax
    64a6:	e9 b9 fe ff ff       	jmp    6364 <eval+0x144>
    64ab:	8b 03                	mov    (%rbx),%eax
    64ad:	8d 50 01             	lea    0x1(%rax),%edx
    64b0:	83 fa 01             	cmp    $0x1,%edx
    64b3:	76 40                	jbe    64f5 <eval+0x2d5>
    64b5:	83 f8 fe             	cmp    $0xfffffffe,%eax
    64b8:	74 3b                	je     64f5 <eval+0x2d5>
    64ba:	c7 03 fd ff ff ff    	movl   $0xfffffffd,(%rbx)
    64c0:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    64c5:	e9 9a fe ff ff       	jmp    6364 <eval+0x144>
    64ca:	89 e8                	mov    %ebp,%eax
    64cc:	0f af c7             	imul   %edi,%eax
    64cf:	e9 90 fe ff ff       	jmp    6364 <eval+0x144>
    64d4:	49 8d 7c 05 04       	lea    0x4(%r13,%rax,1),%rdi
    64d9:	48 8d 54 24 04       	lea    0x4(%rsp),%rdx
    64de:	31 c0                	xor    %eax,%eax
    64e0:	48 8d 35 be 31 00 00 	lea    0x31be(%rip),%rsi        # 96a5 <__func__.1+0xd>
    64e7:	e8 a4 bf ff ff       	call   2490 <__isoc99_sscanf@plt>
    64ec:	8b 44 24 04          	mov    0x4(%rsp),%eax
    64f0:	e9 6f fe ff ff       	jmp    6364 <eval+0x144>
    64f5:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    64fa:	e9 65 fe ff ff       	jmp    6364 <eval+0x144>
    64ff:	e8 bc bf ff ff       	call   24c0 <__stack_chk_fail@plt>
    6504:	66 66 2e 0f 1f 84 00 	data16 cs nopw 0x0(%rax,%rax,1)
    650b:	00 00 00 00 
    650f:	90                   	nop

0000000000006510 <trans>:
    6510:	f3 0f 1e fa          	endbr64 
    6514:	8b 0d a6 a2 00 00    	mov    0xa2a6(%rip),%ecx        # 107c0 <nr_token>
    651a:	83 f9 01             	cmp    $0x1,%ecx
    651d:	7e 71                	jle    6590 <trans+0x80>
    651f:	48 63 d1             	movslq %ecx,%rdx
    6522:	83 e9 02             	sub    $0x2,%ecx
    6525:	48 8d 05 b4 a2 00 00 	lea    0xa2b4(%rip),%rax        # 107e0 <tokens>
    652c:	48 8d 34 d2          	lea    (%rdx,%rdx,8),%rsi
    6530:	48 29 ca             	sub    %rcx,%rdx
    6533:	48 8d 0c d2          	lea    (%rdx,%rdx,8),%rcx
    6537:	48 8d 15 7e a2 00 00 	lea    0xa27e(%rip),%rdx        # 107bc <bp_pool+0x17c>
    653e:	48 8d 04 b0          	lea    (%rax,%rsi,4),%rax
    6542:	48 8d 34 8a          	lea    (%rdx,%rcx,4),%rsi
    6546:	eb 11                	jmp    6559 <trans+0x49>
    6548:	0f 1f 84 00 00 00 00 	nopl   0x0(%rax,%rax,1)
    654f:	00 
    6550:	48 83 e8 24          	sub    $0x24,%rax
    6554:	48 39 c6             	cmp    %rax,%rsi
    6557:	74 37                	je     6590 <trans+0x80>
    6559:	8b 50 b8             	mov    -0x48(%rax),%edx
    655c:	8d 8a fd fe ff ff    	lea    -0x103(%rdx),%ecx
    6562:	83 f9 02             	cmp    $0x2,%ecx
    6565:	76 e9                	jbe    6550 <trans+0x40>
    6567:	83 fa 29             	cmp    $0x29,%edx
    656a:	74 e4                	je     6550 <trans+0x40>
    656c:	8b 50 dc             	mov    -0x24(%rax),%edx
    656f:	83 fa 2d             	cmp    $0x2d,%edx
    6572:	74 34                	je     65a8 <trans+0x98>
    6574:	83 fa 2a             	cmp    $0x2a,%edx
    6577:	75 d7                	jne    6550 <trans+0x40>
    6579:	c7 40 dc 08 01 00 00 	movl   $0x108,-0x24(%rax)
    6580:	48 83 e8 24          	sub    $0x24,%rax
    6584:	48 39 c6             	cmp    %rax,%rsi
    6587:	75 d0                	jne    6559 <trans+0x49>
    6589:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    6590:	8b 05 4a a2 00 00    	mov    0xa24a(%rip),%eax        # 107e0 <tokens>
    6596:	83 f8 2d             	cmp    $0x2d,%eax
    6599:	74 2d                	je     65c8 <trans+0xb8>
    659b:	83 f8 2a             	cmp    $0x2a,%eax
    659e:	74 18                	je     65b8 <trans+0xa8>
    65a0:	c3                   	ret    
    65a1:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    65a8:	c7 40 dc 07 01 00 00 	movl   $0x107,-0x24(%rax)
    65af:	eb 9f                	jmp    6550 <trans+0x40>
    65b1:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    65b8:	c7 05 1e a2 00 00 08 	movl   $0x108,0xa21e(%rip)        # 107e0 <tokens>
    65bf:	01 00 00 
    65c2:	c3                   	ret    
    65c3:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
    65c8:	c7 05 0e a2 00 00 07 	movl   $0x107,0xa20e(%rip)        # 107e0 <tokens>
    65cf:	01 00 00 
    65d2:	c3                   	ret    
    65d3:	66 66 2e 0f 1f 84 00 	data16 cs nopw 0x0(%rax,%rax,1)
    65da:	00 00 00 00 
    65de:	66 90                	xchg   %ax,%ax

00000000000065e0 <expr>:
    65e0:	f3 0f 1e fa          	endbr64 
    65e4:	41 57                	push   %r15
    65e6:	41 56                	push   %r14
    65e8:	41 55                	push   %r13
    65ea:	41 54                	push   %r12
    65ec:	55                   	push   %rbp
    65ed:	53                   	push   %rbx
    65ee:	48 83 ec 48          	sub    $0x48,%rsp
    65f2:	48 89 74 24 08       	mov    %rsi,0x8(%rsp)
    65f7:	4c 8d 64 24 30       	lea    0x30(%rsp),%r12
    65fc:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    6603:	00 00 
    6605:	48 89 44 24 38       	mov    %rax,0x38(%rsp)
    660a:	31 c0                	xor    %eax,%eax
    660c:	80 3f 00             	cmpb   $0x0,(%rdi)
    660f:	c7 05 a7 a1 00 00 00 	movl   $0x0,0xa1a7(%rip)        # 107c0 <nr_token>
    6616:	00 00 00 
    6619:	0f 84 21 01 00 00    	je     6740 <expr+0x160>
    661f:	49 89 fe             	mov    %rdi,%r14
    6622:	49 89 ff             	mov    %rdi,%r15
    6625:	4c 8d 64 24 30       	lea    0x30(%rsp),%r12
    662a:	45 31 ed             	xor    %r13d,%r13d
    662d:	0f 1f 00             	nopl   (%rax)
    6630:	48 8d 2d a9 e9 00 00 	lea    0xe9a9(%rip),%rbp        # 14fe0 <re>
    6637:	31 db                	xor    %ebx,%ebx
    6639:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    6640:	45 31 c0             	xor    %r8d,%r8d
    6643:	4c 89 e1             	mov    %r12,%rcx
    6646:	ba 01 00 00 00       	mov    $0x1,%edx
    664b:	4c 89 fe             	mov    %r15,%rsi
    664e:	48 89 ef             	mov    %rbp,%rdi
    6651:	e8 ea be ff ff       	call   2540 <regexec@plt>
    6656:	0b 44 24 30          	or     0x30(%rsp),%eax
    665a:	74 64                	je     66c0 <expr+0xe0>
    665c:	83 c3 01             	add    $0x1,%ebx
    665f:	48 83 c5 40          	add    $0x40,%rbp
    6663:	83 fb 0d             	cmp    $0xd,%ebx
    6666:	75 d8                	jne    6640 <expr+0x60>
    6668:	4c 8d 0d e1 36 00 00 	lea    0x36e1(%rip),%r9        # 9d50 <__PRETTY_FUNCTION__.0+0x200>
    666f:	45 89 e8             	mov    %r13d,%r8d
    6672:	4c 89 f1             	mov    %r14,%rcx
    6675:	44 89 ea             	mov    %r13d,%edx
    6678:	48 8d 35 f1 33 00 00 	lea    0x33f1(%rip),%rsi        # 9a70 <__func__.1+0x3d8>
    667f:	bf 01 00 00 00       	mov    $0x1,%edi
    6684:	31 c0                	xor    %eax,%eax
    6686:	45 31 e4             	xor    %r12d,%r12d
    6689:	e8 c2 bc ff ff       	call   2350 <__printf_chk@plt>
    668e:	48 8b 44 24 08       	mov    0x8(%rsp),%rax
    6693:	c6 00 00             	movb   $0x0,(%rax)
    6696:	48 8b 44 24 38       	mov    0x38(%rsp),%rax
    669b:	64 48 2b 04 25 28 00 	sub    %fs:0x28,%rax
    66a2:	00 00 
    66a4:	0f 85 d5 01 00 00    	jne    687f <expr+0x29f>
    66aa:	48 83 c4 48          	add    $0x48,%rsp
    66ae:	44 89 e0             	mov    %r12d,%eax
    66b1:	5b                   	pop    %rbx
    66b2:	5d                   	pop    %rbp
    66b3:	41 5c                	pop    %r12
    66b5:	41 5d                	pop    %r13
    66b7:	41 5e                	pop    %r14
    66b9:	41 5f                	pop    %r15
    66bb:	c3                   	ret    
    66bc:	0f 1f 40 00          	nopl   0x0(%rax)
    66c0:	48 63 db             	movslq %ebx,%rbx
    66c3:	48 8d 05 76 74 00 00 	lea    0x7476(%rip),%rax        # db40 <rules>
    66ca:	8b 6c 24 34          	mov    0x34(%rsp),%ebp
    66ce:	48 c1 e3 04          	shl    $0x4,%rbx
    66d2:	8b 5c 18 08          	mov    0x8(%rax,%rbx,1),%ebx
    66d6:	41 01 ed             	add    %ebp,%r13d
    66d9:	81 fb 05 01 00 00    	cmp    $0x105,%ebx
    66df:	0f 8f cb 00 00 00    	jg     67b0 <expr+0x1d0>
    66e5:	81 fb 02 01 00 00    	cmp    $0x102,%ebx
    66eb:	0f 8f d7 00 00 00    	jg     67c8 <expr+0x1e8>
    66f1:	83 fb 2f             	cmp    $0x2f,%ebx
    66f4:	0f 8f a6 00 00 00    	jg     67a0 <expr+0x1c0>
    66fa:	83 fb 27             	cmp    $0x27,%ebx
    66fd:	7e 31                	jle    6730 <expr+0x150>
    66ff:	48 b8 00 00 00 00 00 	movabs $0xaf0000000000,%rax
    6706:	af 00 00 
    6709:	48 0f a3 d8          	bt     %rbx,%rax
    670d:	73 21                	jae    6730 <expr+0x150>
    670f:	48 63 15 aa a0 00 00 	movslq 0xa0aa(%rip),%rdx        # 107c0 <nr_token>
    6716:	48 8d 0d c3 a0 00 00 	lea    0xa0c3(%rip),%rcx        # 107e0 <tokens>
    671d:	48 89 d0             	mov    %rdx,%rax
    6720:	48 8d 14 d2          	lea    (%rdx,%rdx,8),%rdx
    6724:	83 c0 01             	add    $0x1,%eax
    6727:	89 1c 91             	mov    %ebx,(%rcx,%rdx,4)
    672a:	89 05 90 a0 00 00    	mov    %eax,0xa090(%rip)        # 107c0 <nr_token>
    6730:	4d 63 fd             	movslq %r13d,%r15
    6733:	4d 01 f7             	add    %r14,%r15
    6736:	41 80 3f 00          	cmpb   $0x0,(%r15)
    673a:	0f 85 f0 fe ff ff    	jne    6630 <expr+0x50>
    6740:	31 c0                	xor    %eax,%eax
    6742:	31 ff                	xor    %edi,%edi
    6744:	e8 c7 fd ff ff       	call   6510 <trans>
    6749:	8b 05 71 a0 00 00    	mov    0xa071(%rip),%eax        # 107c0 <nr_token>
    674f:	4c 89 e2             	mov    %r12,%rdx
    6752:	c7 44 24 30 01 00 00 	movl   $0x1,0x30(%rsp)
    6759:	00 
    675a:	8d 70 ff             	lea    -0x1(%rax),%esi
    675d:	e8 be fa ff ff       	call   6220 <eval>
    6762:	41 89 c4             	mov    %eax,%r12d
    6765:	8b 44 24 30          	mov    0x30(%rsp),%eax
    6769:	85 c0                	test   %eax,%eax
    676b:	0f 84 dc 00 00 00    	je     684d <expr+0x26d>
    6771:	83 f8 ff             	cmp    $0xffffffff,%eax
    6774:	0f 84 ec 00 00 00    	je     6866 <expr+0x286>
    677a:	83 f8 fd             	cmp    $0xfffffffd,%eax
    677d:	0f 85 13 ff ff ff    	jne    6696 <expr+0xb6>
    6783:	48 8d 3d 4e 33 00 00 	lea    0x334e(%rip),%rdi        # 9ad8 <__func__.1+0x440>
    678a:	e8 41 be ff ff       	call   25d0 <puts@plt>
    678f:	48 8b 44 24 08       	mov    0x8(%rsp),%rax
    6794:	c6 00 00             	movb   $0x0,(%rax)
    6797:	e9 fa fe ff ff       	jmp    6696 <expr+0xb6>
    679c:	0f 1f 40 00          	nopl   0x0(%rax)
    67a0:	8d 83 ff fe ff ff    	lea    -0x101(%rbx),%eax
    67a6:	83 f8 01             	cmp    $0x1,%eax
    67a9:	77 85                	ja     6730 <expr+0x150>
    67ab:	e9 5f ff ff ff       	jmp    670f <expr+0x12f>
    67b0:	81 fb 06 01 00 00    	cmp    $0x106,%ebx
    67b6:	0f 85 74 ff ff ff    	jne    6730 <expr+0x150>
    67bc:	e9 4e ff ff ff       	jmp    670f <expr+0x12f>
    67c1:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    67c8:	4c 63 15 f1 9f 00 00 	movslq 0x9ff1(%rip),%r10        # 107c0 <nr_token>
    67cf:	48 63 d5             	movslq %ebp,%rdx
    67d2:	b9 20 00 00 00       	mov    $0x20,%ecx
    67d7:	4c 89 fe             	mov    %r15,%rsi
    67da:	48 8d 05 ff 9f 00 00 	lea    0x9fff(%rip),%rax        # 107e0 <tokens>
    67e1:	48 89 54 24 20       	mov    %rdx,0x20(%rsp)
    67e6:	4f 8d 04 d2          	lea    (%r10,%r10,8),%r8
    67ea:	44 89 54 24 1c       	mov    %r10d,0x1c(%rsp)
    67ef:	49 c1 e0 02          	shl    $0x2,%r8
    67f3:	4c 89 54 24 10       	mov    %r10,0x10(%rsp)
    67f8:	4a 8d 7c 00 04       	lea    0x4(%rax,%r8,1),%rdi
    67fd:	4c 89 44 24 28       	mov    %r8,0x28(%rsp)
    6802:	e8 c9 bb ff ff       	call   23d0 <__strncpy_chk@plt>
    6807:	83 fd 1f             	cmp    $0x1f,%ebp
    680a:	4c 8b 54 24 10       	mov    0x10(%rsp),%r10
    680f:	44 8b 4c 24 1c       	mov    0x1c(%rsp),%r9d
    6814:	7f 1a                	jg     6830 <expr+0x250>
    6816:	4c 8b 44 24 28       	mov    0x28(%rsp),%r8
    681b:	48 8b 54 24 20       	mov    0x20(%rsp),%rdx
    6820:	48 8d 05 b9 9f 00 00 	lea    0x9fb9(%rip),%rax        # 107e0 <tokens>
    6827:	49 01 c0             	add    %rax,%r8
    682a:	42 c6 44 02 04 00    	movb   $0x0,0x4(%rdx,%r8,1)
    6830:	4b 8d 04 d2          	lea    (%r10,%r10,8),%rax
    6834:	48 8d 0d a5 9f 00 00 	lea    0x9fa5(%rip),%rcx        # 107e0 <tokens>
    683b:	89 1c 81             	mov    %ebx,(%rcx,%rax,4)
    683e:	41 8d 41 01          	lea    0x1(%r9),%eax
    6842:	89 05 78 9f 00 00    	mov    %eax,0x9f78(%rip)        # 107c0 <nr_token>
    6848:	e9 e3 fe ff ff       	jmp    6730 <expr+0x150>
    684d:	48 8d 3d 55 32 00 00 	lea    0x3255(%rip),%rdi        # 9aa9 <__func__.1+0x411>
    6854:	e8 77 bd ff ff       	call   25d0 <puts@plt>
    6859:	48 8b 44 24 08       	mov    0x8(%rsp),%rax
    685e:	c6 00 00             	movb   $0x0,(%rax)
    6861:	e9 30 fe ff ff       	jmp    6696 <expr+0xb6>
    6866:	48 8d 3d 4e 32 00 00 	lea    0x324e(%rip),%rdi        # 9abb <__func__.1+0x423>
    686d:	e8 5e bd ff ff       	call   25d0 <puts@plt>
    6872:	48 8b 44 24 08       	mov    0x8(%rsp),%rax
    6877:	c6 00 00             	movb   $0x0,(%rax)
    687a:	e9 17 fe ff ff       	jmp    6696 <expr+0xb6>
    687f:	e8 3c bc ff ff       	call   24c0 <__stack_chk_fail@plt>
    6884:	66 2e 0f 1f 84 00 00 	cs nopw 0x0(%rax,%rax,1)
    688b:	00 00 00 
    688e:	66 90                	xchg   %ax,%ax

0000000000006890 <init_wp_pool>:
    6890:	f3 0f 1e fa          	endbr64 
    6894:	48 8d 05 c5 ea 00 00 	lea    0xeac5(%rip),%rax        # 15360 <wp_pool+0x20>
    689b:	c7 05 9b ea 00 00 00 	movl   $0x0,0xea9b(%rip)        # 15340 <wp_pool>
    68a2:	00 00 00 
    68a5:	48 89 05 9c ea 00 00 	mov    %rax,0xea9c(%rip)        # 15348 <wp_pool+0x8>
    68ac:	48 83 c0 20          	add    $0x20,%rax
    68b0:	48 89 05 b1 ea 00 00 	mov    %rax,0xeab1(%rip)        # 15368 <wp_pool+0x28>
    68b7:	48 83 c0 20          	add    $0x20,%rax
    68bb:	48 89 05 c6 ea 00 00 	mov    %rax,0xeac6(%rip)        # 15388 <wp_pool+0x48>
    68c2:	48 83 c0 20          	add    $0x20,%rax
    68c6:	48 89 05 db ea 00 00 	mov    %rax,0xeadb(%rip)        # 153a8 <wp_pool+0x68>
    68cd:	48 83 c0 20          	add    $0x20,%rax
    68d1:	48 89 05 f0 ea 00 00 	mov    %rax,0xeaf0(%rip)        # 153c8 <wp_pool+0x88>
    68d8:	48 83 c0 20          	add    $0x20,%rax
    68dc:	48 89 05 05 eb 00 00 	mov    %rax,0xeb05(%rip)        # 153e8 <wp_pool+0xa8>
    68e3:	48 83 c0 20          	add    $0x20,%rax
    68e7:	48 89 05 1a eb 00 00 	mov    %rax,0xeb1a(%rip)        # 15408 <wp_pool+0xc8>
    68ee:	48 83 c0 20          	add    $0x20,%rax
    68f2:	48 89 05 2f eb 00 00 	mov    %rax,0xeb2f(%rip)        # 15428 <wp_pool+0xe8>
    68f9:	48 83 c0 20          	add    $0x20,%rax
    68fd:	48 89 05 44 eb 00 00 	mov    %rax,0xeb44(%rip)        # 15448 <wp_pool+0x108>
    6904:	48 83 c0 20          	add    $0x20,%rax
    6908:	48 89 05 59 eb 00 00 	mov    %rax,0xeb59(%rip)        # 15468 <wp_pool+0x128>
    690f:	48 83 c0 20          	add    $0x20,%rax
    6913:	48 89 05 6e eb 00 00 	mov    %rax,0xeb6e(%rip)        # 15488 <wp_pool+0x148>
    691a:	48 83 c0 20          	add    $0x20,%rax
    691e:	48 89 05 83 eb 00 00 	mov    %rax,0xeb83(%rip)        # 154a8 <wp_pool+0x168>
    6925:	48 83 c0 20          	add    $0x20,%rax
    6929:	48 89 05 98 eb 00 00 	mov    %rax,0xeb98(%rip)        # 154c8 <wp_pool+0x188>
    6930:	48 83 c0 20          	add    $0x20,%rax
    6934:	48 89 05 ad eb 00 00 	mov    %rax,0xebad(%rip)        # 154e8 <wp_pool+0x1a8>
    693b:	48 83 c0 20          	add    $0x20,%rax
    693f:	48 89 05 c2 eb 00 00 	mov    %rax,0xebc2(%rip)        # 15508 <wp_pool+0x1c8>
    6946:	48 2d e0 01 00 00    	sub    $0x1e0,%rax
    694c:	c7 05 0a ea 00 00 01 	movl   $0x1,0xea0a(%rip)        # 15360 <wp_pool+0x20>
    6953:	00 00 00 
    6956:	c7 05 20 ea 00 00 02 	movl   $0x2,0xea20(%rip)        # 15380 <wp_pool+0x40>
    695d:	00 00 00 
    6960:	c7 05 36 ea 00 00 03 	movl   $0x3,0xea36(%rip)        # 153a0 <wp_pool+0x60>
    6967:	00 00 00 
    696a:	c7 05 4c ea 00 00 04 	movl   $0x4,0xea4c(%rip)        # 153c0 <wp_pool+0x80>
    6971:	00 00 00 
    6974:	c7 05 62 ea 00 00 05 	movl   $0x5,0xea62(%rip)        # 153e0 <wp_pool+0xa0>
    697b:	00 00 00 
    697e:	c7 05 78 ea 00 00 06 	movl   $0x6,0xea78(%rip)        # 15400 <wp_pool+0xc0>
    6985:	00 00 00 
    6988:	c7 05 8e ea 00 00 07 	movl   $0x7,0xea8e(%rip)        # 15420 <wp_pool+0xe0>
    698f:	00 00 00 
    6992:	c7 05 a4 ea 00 00 08 	movl   $0x8,0xeaa4(%rip)        # 15440 <wp_pool+0x100>
    6999:	00 00 00 
    699c:	c7 05 ba ea 00 00 09 	movl   $0x9,0xeaba(%rip)        # 15460 <wp_pool+0x120>
    69a3:	00 00 00 
    69a6:	c7 05 d0 ea 00 00 0a 	movl   $0xa,0xead0(%rip)        # 15480 <wp_pool+0x140>
    69ad:	00 00 00 
    69b0:	c7 05 e6 ea 00 00 0b 	movl   $0xb,0xeae6(%rip)        # 154a0 <wp_pool+0x160>
    69b7:	00 00 00 
    69ba:	c7 05 fc ea 00 00 0c 	movl   $0xc,0xeafc(%rip)        # 154c0 <wp_pool+0x180>
    69c1:	00 00 00 
    69c4:	c7 05 12 eb 00 00 0d 	movl   $0xd,0xeb12(%rip)        # 154e0 <wp_pool+0x1a0>
    69cb:	00 00 00 
    69ce:	c7 05 28 eb 00 00 0e 	movl   $0xe,0xeb28(%rip)        # 15500 <wp_pool+0x1c0>
    69d5:	00 00 00 
    69d8:	c7 05 3e eb 00 00 0f 	movl   $0xf,0xeb3e(%rip)        # 15520 <wp_pool+0x1e0>
    69df:	00 00 00 
    69e2:	48 c7 05 3b eb 00 00 	movq   $0x0,0xeb3b(%rip)        # 15528 <wp_pool+0x1e8>
    69e9:	00 00 00 00 
    69ed:	48 c7 05 28 e9 00 00 	movq   $0x0,0xe928(%rip)        # 15320 <wp_head>
    69f4:	00 00 00 00 
    69f8:	48 89 05 29 e9 00 00 	mov    %rax,0xe929(%rip)        # 15328 <free_>
    69ff:	c3                   	ret    

0000000000006a00 <new_wp>:
    6a00:	f3 0f 1e fa          	endbr64 
    6a04:	41 56                	push   %r14
    6a06:	41 55                	push   %r13
    6a08:	49 89 fd             	mov    %rdi,%r13
    6a0b:	41 54                	push   %r12
    6a0d:	45 31 e4             	xor    %r12d,%r12d
    6a10:	48 83 ec 10          	sub    $0x10,%rsp
    6a14:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    6a1b:	00 00 
    6a1d:	48 89 44 24 08       	mov    %rax,0x8(%rsp)
    6a22:	31 c0                	xor    %eax,%eax
    6a24:	48 8d 74 24 07       	lea    0x7(%rsp),%rsi
    6a29:	c6 44 24 07 01       	movb   $0x1,0x7(%rsp)
    6a2e:	e8 ad fb ff ff       	call   65e0 <expr>
    6a33:	80 7c 24 07 00       	cmpb   $0x0,0x7(%rsp)
    6a38:	0f 84 8b 00 00 00    	je     6ac9 <new_wp+0xc9>
    6a3e:	4c 8b 25 e3 e8 00 00 	mov    0xe8e3(%rip),%r12        # 15328 <free_>
    6a45:	4d 85 e4             	test   %r12,%r12
    6a48:	0f 84 e2 00 00 00    	je     6b30 <new_wp+0x130>
    6a4e:	41 89 c6             	mov    %eax,%r14d
    6a51:	48 8b 15 c8 e8 00 00 	mov    0xe8c8(%rip),%rdx        # 15320 <wp_head>
    6a58:	49 8b 44 24 08       	mov    0x8(%r12),%rax
    6a5d:	49 c7 44 24 08 00 00 	movq   $0x0,0x8(%r12)
    6a64:	00 00 
    6a66:	48 89 05 bb e8 00 00 	mov    %rax,0xe8bb(%rip)        # 15328 <free_>
    6a6d:	48 85 d2             	test   %rdx,%rdx
    6a70:	0f 84 9a 00 00 00    	je     6b10 <new_wp+0x110>
    6a76:	41 8b 04 24          	mov    (%r12),%eax
    6a7a:	39 02                	cmp    %eax,(%rdx)
    6a7c:	7c 76                	jl     6af4 <new_wp+0xf4>
    6a7e:	49 89 54 24 08       	mov    %rdx,0x8(%r12)
    6a83:	4c 89 25 96 e8 00 00 	mov    %r12,0xe896(%rip)        # 15320 <wp_head>
    6a8a:	4c 89 ef             	mov    %r13,%rdi
    6a8d:	e8 0e b9 ff ff       	call   23a0 <strlen@plt>
    6a92:	48 8d 78 01          	lea    0x1(%rax),%rdi
    6a96:	e8 d5 ba ff ff       	call   2570 <malloc@plt>
    6a9b:	4c 89 ee             	mov    %r13,%rsi
    6a9e:	49 89 44 24 10       	mov    %rax,0x10(%r12)
    6aa3:	48 89 c7             	mov    %rax,%rdi
    6aa6:	e8 b5 b9 ff ff       	call   2460 <strcpy@plt>
    6aab:	45 89 74 24 18       	mov    %r14d,0x18(%r12)
    6ab0:	44 89 f1             	mov    %r14d,%ecx
    6ab3:	4c 89 ea             	mov    %r13,%rdx
    6ab6:	48 8d 35 9e 30 00 00 	lea    0x309e(%rip),%rsi        # 9b5b <__PRETTY_FUNCTION__.0+0xb>
    6abd:	bf 01 00 00 00       	mov    $0x1,%edi
    6ac2:	31 c0                	xor    %eax,%eax
    6ac4:	e8 87 b8 ff ff       	call   2350 <__printf_chk@plt>
    6ac9:	48 8b 44 24 08       	mov    0x8(%rsp),%rax
    6ace:	64 48 2b 04 25 28 00 	sub    %fs:0x28,%rax
    6ad5:	00 00 
    6ad7:	75 65                	jne    6b3e <new_wp+0x13e>
    6ad9:	48 83 c4 10          	add    $0x10,%rsp
    6add:	4c 89 e0             	mov    %r12,%rax
    6ae0:	41 5c                	pop    %r12
    6ae2:	41 5d                	pop    %r13
    6ae4:	41 5e                	pop    %r14
    6ae6:	c3                   	ret    
    6ae7:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
    6aee:	00 00 
    6af0:	3b 02                	cmp    (%rdx),%eax
    6af2:	7c 2c                	jl     6b20 <new_wp+0x120>
    6af4:	48 89 d1             	mov    %rdx,%rcx
    6af7:	48 8b 52 08          	mov    0x8(%rdx),%rdx
    6afb:	48 85 d2             	test   %rdx,%rdx
    6afe:	75 f0                	jne    6af0 <new_wp+0xf0>
    6b00:	4c 89 61 08          	mov    %r12,0x8(%rcx)
    6b04:	eb 84                	jmp    6a8a <new_wp+0x8a>
    6b06:	66 2e 0f 1f 84 00 00 	cs nopw 0x0(%rax,%rax,1)
    6b0d:	00 00 00 
    6b10:	4c 89 25 09 e8 00 00 	mov    %r12,0xe809(%rip)        # 15320 <wp_head>
    6b17:	e9 6e ff ff ff       	jmp    6a8a <new_wp+0x8a>
    6b1c:	0f 1f 40 00          	nopl   0x0(%rax)
    6b20:	49 89 54 24 08       	mov    %rdx,0x8(%r12)
    6b25:	4c 89 61 08          	mov    %r12,0x8(%rcx)
    6b29:	e9 5c ff ff ff       	jmp    6a8a <new_wp+0x8a>
    6b2e:	66 90                	xchg   %ax,%ax
    6b30:	48 8d 3d 3d 30 00 00 	lea    0x303d(%rip),%rdi        # 9b74 <__PRETTY_FUNCTION__.0+0x24>
    6b37:	e8 94 ba ff ff       	call   25d0 <puts@plt>
    6b3c:	eb 8b                	jmp    6ac9 <new_wp+0xc9>
    6b3e:	e8 7d b9 ff ff       	call   24c0 <__stack_chk_fail@plt>
    6b43:	66 66 2e 0f 1f 84 00 	data16 cs nopw 0x0(%rax,%rax,1)
    6b4a:	00 00 00 00 
    6b4e:	66 90                	xchg   %ax,%ax

0000000000006b50 <free_wp>:
    6b50:	f3 0f 1e fa          	endbr64 
    6b54:	41 54                	push   %r12
    6b56:	55                   	push   %rbp
    6b57:	53                   	push   %rbx
    6b58:	48 8b 1d c1 e7 00 00 	mov    0xe7c1(%rip),%rbx        # 15320 <wp_head>
    6b5f:	48 85 db             	test   %rbx,%rbx
    6b62:	0f 84 88 00 00 00    	je     6bf0 <free_wp+0xa0>
    6b68:	89 fd                	mov    %edi,%ebp
    6b6a:	39 3b                	cmp    %edi,(%rbx)
    6b6c:	75 76                	jne    6be4 <free_wp+0x94>
    6b6e:	49 89 dc             	mov    %rbx,%r12
    6b71:	48 8b 4b 10          	mov    0x10(%rbx),%rcx
    6b75:	44 8b 43 18          	mov    0x18(%rbx),%r8d
    6b79:	31 c0                	xor    %eax,%eax
    6b7b:	89 ea                	mov    %ebp,%edx
    6b7d:	48 8d 35 34 30 00 00 	lea    0x3034(%rip),%rsi        # 9bb8 <__PRETTY_FUNCTION__.0+0x68>
    6b84:	bf 01 00 00 00       	mov    $0x1,%edi
    6b89:	e8 c2 b7 ff ff       	call   2350 <__printf_chk@plt>
    6b8e:	48 39 1d 8b e7 00 00 	cmp    %rbx,0xe78b(%rip)        # 15320 <wp_head>
    6b95:	48 8b 43 08          	mov    0x8(%rbx),%rax
    6b99:	0f 84 91 00 00 00    	je     6c30 <free_wp+0xe0>
    6b9f:	49 89 44 24 08       	mov    %rax,0x8(%r12)
    6ba4:	48 8b 7b 10          	mov    0x10(%rbx),%rdi
    6ba8:	48 c7 43 08 00 00 00 	movq   $0x0,0x8(%rbx)
    6baf:	00 
    6bb0:	e8 6b b9 ff ff       	call   2520 <free@plt>
    6bb5:	48 8b 05 6c e7 00 00 	mov    0xe76c(%rip),%rax        # 15328 <free_>
    6bbc:	48 85 c0             	test   %rax,%rax
    6bbf:	74 5f                	je     6c20 <free_wp+0xd0>
    6bc1:	39 28                	cmp    %ebp,(%rax)
    6bc3:	7c 47                	jl     6c0c <free_wp+0xbc>
    6bc5:	48 89 43 08          	mov    %rax,0x8(%rbx)
    6bc9:	48 89 1d 58 e7 00 00 	mov    %rbx,0xe758(%rip)        # 15328 <free_>
    6bd0:	5b                   	pop    %rbx
    6bd1:	31 c0                	xor    %eax,%eax
    6bd3:	5d                   	pop    %rbp
    6bd4:	41 5c                	pop    %r12
    6bd6:	c3                   	ret    
    6bd7:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
    6bde:	00 00 
    6be0:	39 2b                	cmp    %ebp,(%rbx)
    6be2:	74 8d                	je     6b71 <free_wp+0x21>
    6be4:	49 89 dc             	mov    %rbx,%r12
    6be7:	48 8b 5b 08          	mov    0x8(%rbx),%rbx
    6beb:	48 85 db             	test   %rbx,%rbx
    6bee:	75 f0                	jne    6be0 <free_wp+0x90>
    6bf0:	48 8d 3d 97 2f 00 00 	lea    0x2f97(%rip),%rdi        # 9b8e <__PRETTY_FUNCTION__.0+0x3e>
    6bf7:	e8 d4 b9 ff ff       	call   25d0 <puts@plt>
    6bfc:	5b                   	pop    %rbx
    6bfd:	31 c0                	xor    %eax,%eax
    6bff:	5d                   	pop    %rbp
    6c00:	41 5c                	pop    %r12
    6c02:	c3                   	ret    
    6c03:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
    6c08:	39 28                	cmp    %ebp,(%rax)
    6c0a:	7f 34                	jg     6c40 <free_wp+0xf0>
    6c0c:	48 89 c2             	mov    %rax,%rdx
    6c0f:	48 8b 40 08          	mov    0x8(%rax),%rax
    6c13:	48 85 c0             	test   %rax,%rax
    6c16:	75 f0                	jne    6c08 <free_wp+0xb8>
    6c18:	48 89 5a 08          	mov    %rbx,0x8(%rdx)
    6c1c:	eb b2                	jmp    6bd0 <free_wp+0x80>
    6c1e:	66 90                	xchg   %ax,%ax
    6c20:	48 89 1d 01 e7 00 00 	mov    %rbx,0xe701(%rip)        # 15328 <free_>
    6c27:	31 c0                	xor    %eax,%eax
    6c29:	5b                   	pop    %rbx
    6c2a:	5d                   	pop    %rbp
    6c2b:	41 5c                	pop    %r12
    6c2d:	c3                   	ret    
    6c2e:	66 90                	xchg   %ax,%ax
    6c30:	48 89 05 e9 e6 00 00 	mov    %rax,0xe6e9(%rip)        # 15320 <wp_head>
    6c37:	e9 63 ff ff ff       	jmp    6b9f <free_wp+0x4f>
    6c3c:	0f 1f 40 00          	nopl   0x0(%rax)
    6c40:	48 89 43 08          	mov    %rax,0x8(%rbx)
    6c44:	31 c0                	xor    %eax,%eax
    6c46:	48 89 5a 08          	mov    %rbx,0x8(%rdx)
    6c4a:	5b                   	pop    %rbx
    6c4b:	5d                   	pop    %rbp
    6c4c:	41 5c                	pop    %r12
    6c4e:	c3                   	ret    
    6c4f:	90                   	nop

0000000000006c50 <print_watchpoint>:
    6c50:	f3 0f 1e fa          	endbr64 
    6c54:	41 55                	push   %r13
    6c56:	41 54                	push   %r12
    6c58:	55                   	push   %rbp
    6c59:	53                   	push   %rbx
    6c5a:	48 83 ec 18          	sub    $0x18,%rsp
    6c5e:	48 8b 1d bb e6 00 00 	mov    0xe6bb(%rip),%rbx        # 15320 <wp_head>
    6c65:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    6c6c:	00 00 
    6c6e:	48 89 44 24 08       	mov    %rax,0x8(%rsp)
    6c73:	31 c0                	xor    %eax,%eax
    6c75:	c6 44 24 07 01       	movb   $0x1,0x7(%rsp)
    6c7a:	48 85 db             	test   %rbx,%rbx
    6c7d:	0f 84 7d 00 00 00    	je     6d00 <print_watchpoint+0xb0>
    6c83:	48 8d 3d 56 2f 00 00 	lea    0x2f56(%rip),%rdi        # 9be0 <__PRETTY_FUNCTION__.0+0x90>
    6c8a:	4c 8d 6c 24 07       	lea    0x7(%rsp),%r13
    6c8f:	e8 3c b9 ff ff       	call   25d0 <puts@plt>
    6c94:	4c 8d 25 95 2f 00 00 	lea    0x2f95(%rip),%r12        # 9c30 <__PRETTY_FUNCTION__.0+0xe0>
    6c9b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
    6ca0:	48 8b 7b 10          	mov    0x10(%rbx),%rdi
    6ca4:	4c 89 ee             	mov    %r13,%rsi
    6ca7:	e8 34 f9 ff ff       	call   65e0 <expr>
    6cac:	44 8b 43 18          	mov    0x18(%rbx),%r8d
    6cb0:	48 83 ec 08          	sub    $0x8,%rsp
    6cb4:	4c 89 e6             	mov    %r12,%rsi
    6cb7:	89 c5                	mov    %eax,%ebp
    6cb9:	31 c0                	xor    %eax,%eax
    6cbb:	48 8b 4b 10          	mov    0x10(%rbx),%rcx
    6cbf:	bf 01 00 00 00       	mov    $0x1,%edi
    6cc4:	41 39 e8             	cmp    %ebp,%r8d
    6cc7:	41 89 e9             	mov    %ebp,%r9d
    6cca:	0f 95 c0             	setne  %al
    6ccd:	50                   	push   %rax
    6cce:	8b 13                	mov    (%rbx),%edx
    6cd0:	31 c0                	xor    %eax,%eax
    6cd2:	e8 79 b6 ff ff       	call   2350 <__printf_chk@plt>
    6cd7:	89 6b 18             	mov    %ebp,0x18(%rbx)
    6cda:	48 8b 5b 08          	mov    0x8(%rbx),%rbx
    6cde:	58                   	pop    %rax
    6cdf:	5a                   	pop    %rdx
    6ce0:	48 85 db             	test   %rbx,%rbx
    6ce3:	75 bb                	jne    6ca0 <print_watchpoint+0x50>
    6ce5:	48 8b 44 24 08       	mov    0x8(%rsp),%rax
    6cea:	64 48 2b 04 25 28 00 	sub    %fs:0x28,%rax
    6cf1:	00 00 
    6cf3:	75 19                	jne    6d0e <print_watchpoint+0xbe>
    6cf5:	48 83 c4 18          	add    $0x18,%rsp
    6cf9:	5b                   	pop    %rbx
    6cfa:	5d                   	pop    %rbp
    6cfb:	41 5c                	pop    %r12
    6cfd:	41 5d                	pop    %r13
    6cff:	c3                   	ret    
    6d00:	48 8d 3d 9c 2e 00 00 	lea    0x2e9c(%rip),%rdi        # 9ba3 <__PRETTY_FUNCTION__.0+0x53>
    6d07:	e8 c4 b8 ff ff       	call   25d0 <puts@plt>
    6d0c:	eb d7                	jmp    6ce5 <print_watchpoint+0x95>
    6d0e:	e8 ad b7 ff ff       	call   24c0 <__stack_chk_fail@plt>
    6d13:	66 66 2e 0f 1f 84 00 	data16 cs nopw 0x0(%rax,%rax,1)
    6d1a:	00 00 00 00 
    6d1e:	66 90                	xchg   %ax,%ax

0000000000006d20 <scan_wp>:
    6d20:	f3 0f 1e fa          	endbr64 
    6d24:	41 56                	push   %r14
    6d26:	41 55                	push   %r13
    6d28:	45 31 ed             	xor    %r13d,%r13d
    6d2b:	41 54                	push   %r12
    6d2d:	55                   	push   %rbp
    6d2e:	53                   	push   %rbx
    6d2f:	48 83 ec 10          	sub    $0x10,%rsp
    6d33:	48 8b 1d e6 e5 00 00 	mov    0xe5e6(%rip),%rbx        # 15320 <wp_head>
    6d3a:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    6d41:	00 00 
    6d43:	48 89 44 24 08       	mov    %rax,0x8(%rsp)
    6d48:	31 c0                	xor    %eax,%eax
    6d4a:	c6 44 24 07 01       	movb   $0x1,0x7(%rsp)
    6d4f:	48 85 db             	test   %rbx,%rbx
    6d52:	74 4d                	je     6da1 <scan_wp+0x81>
    6d54:	4c 8d 64 24 07       	lea    0x7(%rsp),%r12
    6d59:	4c 8d 35 00 2f 00 00 	lea    0x2f00(%rip),%r14        # 9c60 <__PRETTY_FUNCTION__.0+0x110>
    6d60:	48 8b 7b 10          	mov    0x10(%rbx),%rdi
    6d64:	4c 89 e6             	mov    %r12,%rsi
    6d67:	e8 74 f8 ff ff       	call   65e0 <expr>
    6d6c:	44 8b 43 18          	mov    0x18(%rbx),%r8d
    6d70:	89 c5                	mov    %eax,%ebp
    6d72:	41 39 c0             	cmp    %eax,%r8d
    6d75:	74 51                	je     6dc8 <scan_wp+0xa8>
    6d77:	48 8b 4b 10          	mov    0x10(%rbx),%rcx
    6d7b:	8b 13                	mov    (%rbx),%edx
    6d7d:	41 89 c1             	mov    %eax,%r9d
    6d80:	4c 89 f6             	mov    %r14,%rsi
    6d83:	bf 01 00 00 00       	mov    $0x1,%edi
    6d88:	31 c0                	xor    %eax,%eax
    6d8a:	41 bd 01 00 00 00    	mov    $0x1,%r13d
    6d90:	e8 bb b5 ff ff       	call   2350 <__printf_chk@plt>
    6d95:	89 6b 18             	mov    %ebp,0x18(%rbx)
    6d98:	48 8b 5b 08          	mov    0x8(%rbx),%rbx
    6d9c:	48 85 db             	test   %rbx,%rbx
    6d9f:	75 bf                	jne    6d60 <scan_wp+0x40>
    6da1:	48 8b 44 24 08       	mov    0x8(%rsp),%rax
    6da6:	64 48 2b 04 25 28 00 	sub    %fs:0x28,%rax
    6dad:	00 00 
    6daf:	75 22                	jne    6dd3 <scan_wp+0xb3>
    6db1:	48 83 c4 10          	add    $0x10,%rsp
    6db5:	44 89 e8             	mov    %r13d,%eax
    6db8:	5b                   	pop    %rbx
    6db9:	5d                   	pop    %rbp
    6dba:	41 5c                	pop    %r12
    6dbc:	41 5d                	pop    %r13
    6dbe:	41 5e                	pop    %r14
    6dc0:	c3                   	ret    
    6dc1:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    6dc8:	48 8b 5b 08          	mov    0x8(%rbx),%rbx
    6dcc:	48 85 db             	test   %rbx,%rbx
    6dcf:	75 8f                	jne    6d60 <scan_wp+0x40>
    6dd1:	eb ce                	jmp    6da1 <scan_wp+0x81>
    6dd3:	e8 e8 b6 ff ff       	call   24c0 <__stack_chk_fail@plt>
    6dd8:	0f 1f 84 00 00 00 00 	nopl   0x0(%rax,%rax,1)
    6ddf:	00 

0000000000006de0 <load_img>:
    6de0:	41 56                	push   %r14
    6de2:	41 55                	push   %r13
    6de4:	41 54                	push   %r12
    6de6:	55                   	push   %rbp
    6de7:	48 83 ec 08          	sub    $0x8,%rsp
    6deb:	48 8b 3d 56 e7 00 00 	mov    0xe756(%rip),%rdi        # 15548 <img_file>
    6df2:	48 85 ff             	test   %rdi,%rdi
    6df5:	0f 84 0d 01 00 00    	je     6f08 <load_img+0x128>
    6dfb:	48 8d 35 aa 2e 00 00 	lea    0x2eaa(%rip),%rsi        # 9cac <__PRETTY_FUNCTION__.0+0x15c>
    6e02:	e8 09 b7 ff ff       	call   2510 <fopen@plt>
    6e07:	48 89 c5             	mov    %rax,%rbp
    6e0a:	48 85 c0             	test   %rax,%rax
    6e0d:	0f 84 6d 01 00 00    	je     6f80 <load_img+0x1a0>
    6e13:	ba 02 00 00 00       	mov    $0x2,%edx
    6e18:	31 f6                	xor    %esi,%esi
    6e1a:	48 89 c7             	mov    %rax,%rdi
    6e1d:	e8 8e b6 ff ff       	call   24b0 <fseek@plt>
    6e22:	48 89 ef             	mov    %rbp,%rdi
    6e25:	4c 8d 2d 6a 2e 00 00 	lea    0x2e6a(%rip),%r13        # 9c96 <__PRETTY_FUNCTION__.0+0x146>
    6e2c:	4c 8d 35 85 2f 00 00 	lea    0x2f85(%rip),%r14        # 9db8 <__PRETTY_FUNCTION__.0+0x268>
    6e33:	e8 28 b5 ff ff       	call   2360 <ftell@plt>
    6e38:	48 83 ec 08          	sub    $0x8,%rsp
    6e3c:	4c 89 f6             	mov    %r14,%rsi
    6e3f:	4c 89 ea             	mov    %r13,%rdx
    6e42:	50                   	push   %rax
    6e43:	4c 8b 0d fe e6 00 00 	mov    0xe6fe(%rip),%r9        # 15548 <img_file>
    6e4a:	b9 4d 00 00 00       	mov    $0x4d,%ecx
    6e4f:	49 89 c4             	mov    %rax,%r12
    6e52:	4c 8d 05 8f 31 00 00 	lea    0x318f(%rip),%r8        # 9fe8 <__func__.2>
    6e59:	bf 01 00 00 00       	mov    $0x1,%edi
    6e5e:	31 c0                	xor    %eax,%eax
    6e60:	e8 eb b4 ff ff       	call   2350 <__printf_chk@plt>
    6e65:	31 c0                	xor    %eax,%eax
    6e67:	e8 a4 09 00 00       	call   7810 <log_enable>
    6e6c:	59                   	pop    %rcx
    6e6d:	5e                   	pop    %rsi
    6e6e:	84 c0                	test   %al,%al
    6e70:	75 4e                	jne    6ec0 <load_img+0xe0>
    6e72:	31 d2                	xor    %edx,%edx
    6e74:	31 f6                	xor    %esi,%esi
    6e76:	48 89 ef             	mov    %rbp,%rdi
    6e79:	e8 32 b6 ff ff       	call   24b0 <fseek@plt>
    6e7e:	bf 00 00 00 1c       	mov    $0x1c000000,%edi
    6e83:	e8 18 0a 00 00       	call   78a0 <guest_to_host>
    6e88:	48 89 e9             	mov    %rbp,%rcx
    6e8b:	ba 01 00 00 00       	mov    $0x1,%edx
    6e90:	4c 89 e6             	mov    %r12,%rsi
    6e93:	48 89 c7             	mov    %rax,%rdi
    6e96:	e8 25 b7 ff ff       	call   25c0 <fread@plt>
    6e9b:	83 f8 01             	cmp    $0x1,%eax
    6e9e:	0f 85 3b 01 00 00    	jne    6fdf <load_img+0x1ff>
    6ea4:	48 89 ef             	mov    %rbp,%rdi
    6ea7:	e8 f4 b5 ff ff       	call   24a0 <fclose@plt>
    6eac:	48 83 c4 08          	add    $0x8,%rsp
    6eb0:	4c 89 e0             	mov    %r12,%rax
    6eb3:	5d                   	pop    %rbp
    6eb4:	41 5c                	pop    %r12
    6eb6:	41 5d                	pop    %r13
    6eb8:	41 5e                	pop    %r14
    6eba:	c3                   	ret    
    6ebb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
    6ec0:	41 54                	push   %r12
    6ec2:	48 8b 3d 9f e6 00 00 	mov    0xe69f(%rip),%rdi        # 15568 <log_fp>
    6ec9:	4c 89 f2             	mov    %r14,%rdx
    6ecc:	4c 89 e9             	mov    %r13,%rcx
    6ecf:	ff 35 73 e6 00 00    	push   0xe673(%rip)        # 15548 <img_file>
    6ed5:	4c 8d 0d 0c 31 00 00 	lea    0x310c(%rip),%r9        # 9fe8 <__func__.2>
    6edc:	41 b8 4d 00 00 00    	mov    $0x4d,%r8d
    6ee2:	31 c0                	xor    %eax,%eax
    6ee4:	be 01 00 00 00       	mov    $0x1,%esi
    6ee9:	e8 12 b7 ff ff       	call   2600 <__fprintf_chk@plt>
    6eee:	48 8b 3d 73 e6 00 00 	mov    0xe673(%rip),%rdi        # 15568 <log_fp>
    6ef5:	e8 06 b6 ff ff       	call   2500 <fflush@plt>
    6efa:	58                   	pop    %rax
    6efb:	5a                   	pop    %rdx
    6efc:	e9 71 ff ff ff       	jmp    6e72 <load_img+0x92>
    6f01:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    6f08:	4c 8d 35 87 2d 00 00 	lea    0x2d87(%rip),%r14        # 9c96 <__PRETTY_FUNCTION__.0+0x146>
    6f0f:	4c 8d 2d 52 2e 00 00 	lea    0x2e52(%rip),%r13        # 9d68 <__PRETTY_FUNCTION__.0+0x218>
    6f16:	b9 43 00 00 00       	mov    $0x43,%ecx
    6f1b:	bf 01 00 00 00       	mov    $0x1,%edi
    6f20:	4c 8d 05 c1 30 00 00 	lea    0x30c1(%rip),%r8        # 9fe8 <__func__.2>
    6f27:	4c 89 f2             	mov    %r14,%rdx
    6f2a:	4c 89 ee             	mov    %r13,%rsi
    6f2d:	31 c0                	xor    %eax,%eax
    6f2f:	e8 1c b4 ff ff       	call   2350 <__printf_chk@plt>
    6f34:	31 c0                	xor    %eax,%eax
    6f36:	41 bc 00 10 00 00    	mov    $0x1000,%r12d
    6f3c:	e8 cf 08 00 00       	call   7810 <log_enable>
    6f41:	84 c0                	test   %al,%al
    6f43:	0f 84 63 ff ff ff    	je     6eac <load_img+0xcc>
    6f49:	48 8b 3d 18 e6 00 00 	mov    0xe618(%rip),%rdi        # 15568 <log_fp>
    6f50:	4c 89 f1             	mov    %r14,%rcx
    6f53:	4c 89 ea             	mov    %r13,%rdx
    6f56:	31 c0                	xor    %eax,%eax
    6f58:	4c 8d 0d 89 30 00 00 	lea    0x3089(%rip),%r9        # 9fe8 <__func__.2>
    6f5f:	41 b8 43 00 00 00    	mov    $0x43,%r8d
    6f65:	be 01 00 00 00       	mov    $0x1,%esi
    6f6a:	e8 91 b6 ff ff       	call   2600 <__fprintf_chk@plt>
    6f6f:	48 8b 3d f2 e5 00 00 	mov    0xe5f2(%rip),%rdi        # 15568 <log_fp>
    6f76:	e8 85 b5 ff ff       	call   2500 <fflush@plt>
    6f7b:	e9 2c ff ff ff       	jmp    6eac <load_img+0xcc>
    6f80:	48 8b 3d 79 80 00 00 	mov    0x8079(%rip),%rdi        # f000 <stdout@GLIBC_2.2.5>
    6f87:	e8 74 b5 ff ff       	call   2500 <fflush@plt>
    6f8c:	48 8b 0d b5 e5 00 00 	mov    0xe5b5(%rip),%rcx        # 15548 <img_file>
    6f93:	be 01 00 00 00       	mov    $0x1,%esi
    6f98:	31 c0                	xor    %eax,%eax
    6f9a:	48 8b 3d 9f 80 00 00 	mov    0x809f(%rip),%rdi        # f040 <stderr@GLIBC_2.2.5>
    6fa1:	48 8d 15 07 2d 00 00 	lea    0x2d07(%rip),%rdx        # 9caf <__PRETTY_FUNCTION__.0+0x15f>
    6fa8:	e8 53 b6 ff ff       	call   2600 <__fprintf_chk@plt>
    6fad:	48 8b 3d b4 e5 00 00 	mov    0xe5b4(%rip),%rdi        # 15568 <log_fp>
    6fb4:	e8 47 b5 ff ff       	call   2500 <fflush@plt>
    6fb9:	31 c0                	xor    %eax,%eax
    6fbb:	e8 10 db ff ff       	call   4ad0 <assert_fail_msg>
    6fc0:	48 8d 0d 11 30 00 00 	lea    0x3011(%rip),%rcx        # 9fd8 <__PRETTY_FUNCTION__.1>
    6fc7:	ba 48 00 00 00       	mov    $0x48,%edx
    6fcc:	48 8d 35 c3 2c 00 00 	lea    0x2cc3(%rip),%rsi        # 9c96 <__PRETTY_FUNCTION__.0+0x146>
    6fd3:	48 8d 3d 01 24 00 00 	lea    0x2401(%rip),%rdi        # 93db <__PRETTY_FUNCTION__.1+0x1f3>
    6fda:	e8 21 b4 ff ff       	call   2400 <__assert_fail@plt>
    6fdf:	48 8d 0d f2 2f 00 00 	lea    0x2ff2(%rip),%rcx        # 9fd8 <__PRETTY_FUNCTION__.1>
    6fe6:	ba 51 00 00 00       	mov    $0x51,%edx
    6feb:	4c 89 ee             	mov    %r13,%rsi
    6fee:	48 8d 3d d8 2c 00 00 	lea    0x2cd8(%rip),%rdi        # 9ccd <__PRETTY_FUNCTION__.0+0x17d>
    6ff5:	e8 06 b4 ff ff       	call   2400 <__assert_fail@plt>
    6ffa:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

0000000000007000 <init_monitor>:
    7000:	f3 0f 1e fa          	endbr64 
    7004:	41 57                	push   %r15
    7006:	4c 8d 3d 27 71 00 00 	lea    0x7127(%rip),%r15        # e134 <difftest_port>
    700d:	41 56                	push   %r14
    700f:	41 55                	push   %r13
    7011:	4c 8d 2d d6 2c 00 00 	lea    0x2cd6(%rip),%r13        # 9cee <__PRETTY_FUNCTION__.0+0x19e>
    7018:	41 54                	push   %r12
    701a:	41 89 fc             	mov    %edi,%r12d
    701d:	55                   	push   %rbp
    701e:	48 89 f5             	mov    %rsi,%rbp
    7021:	53                   	push   %rbx
    7022:	48 8d 1d 67 2f 00 00 	lea    0x2f67(%rip),%rbx        # 9f90 <__PRETTY_FUNCTION__.0+0x440>
    7029:	48 81 ec 08 02 00 00 	sub    $0x208,%rsp
    7030:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    7037:	00 00 
    7039:	48 89 84 24 f8 01 00 	mov    %rax,0x1f8(%rsp)
    7040:	00 
    7041:	48 8d 05 8e 2c 00 00 	lea    0x2c8e(%rip),%rax        # 9cd6 <__PRETTY_FUNCTION__.0+0x186>
    7048:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%rsp)
    704f:	00 
    7050:	4c 8d 74 24 10       	lea    0x10(%rsp),%r14
    7055:	48 c7 44 24 20 00 00 	movq   $0x0,0x20(%rsp)
    705c:	00 00 
    705e:	c7 44 24 28 62 00 00 	movl   $0x62,0x28(%rsp)
    7065:	00 
    7066:	c7 44 24 38 01 00 00 	movl   $0x1,0x38(%rsp)
    706d:	00 
    706e:	48 c7 44 24 40 00 00 	movq   $0x0,0x40(%rsp)
    7075:	00 00 
    7077:	c7 44 24 48 6c 00 00 	movl   $0x6c,0x48(%rsp)
    707e:	00 
    707f:	48 89 44 24 10       	mov    %rax,0x10(%rsp)
    7084:	48 8d 05 51 2c 00 00 	lea    0x2c51(%rip),%rax        # 9cdc <__PRETTY_FUNCTION__.0+0x18c>
    708b:	48 89 44 24 30       	mov    %rax,0x30(%rsp)
    7090:	48 8d 05 49 2c 00 00 	lea    0x2c49(%rip),%rax        # 9ce0 <__PRETTY_FUNCTION__.0+0x190>
    7097:	48 89 44 24 50       	mov    %rax,0x50(%rsp)
    709c:	48 8d 05 42 2c 00 00 	lea    0x2c42(%rip),%rax        # 9ce5 <__PRETTY_FUNCTION__.0+0x195>
    70a3:	48 89 44 24 70       	mov    %rax,0x70(%rsp)
    70a8:	48 8d 05 d6 26 00 00 	lea    0x26d6(%rip),%rax        # 9785 <__func__.1+0xed>
    70af:	48 89 84 24 90 00 00 	mov    %rax,0x90(%rsp)
    70b6:	00 
    70b7:	48 8d 05 2c 2c 00 00 	lea    0x2c2c(%rip),%rax        # 9cea <__PRETTY_FUNCTION__.0+0x19a>
    70be:	c7 44 24 58 01 00 00 	movl   $0x1,0x58(%rsp)
    70c5:	00 
    70c6:	48 c7 44 24 60 00 00 	movq   $0x0,0x60(%rsp)
    70cd:	00 00 
    70cf:	c7 44 24 68 64 00 00 	movl   $0x64,0x68(%rsp)
    70d6:	00 
    70d7:	c7 44 24 78 01 00 00 	movl   $0x1,0x78(%rsp)
    70de:	00 
    70df:	48 c7 84 24 80 00 00 	movq   $0x0,0x80(%rsp)
    70e6:	00 00 00 00 00 
    70eb:	c7 84 24 88 00 00 00 	movl   $0x70,0x88(%rsp)
    70f2:	70 00 00 00 
    70f6:	c7 84 24 98 00 00 00 	movl   $0x0,0x98(%rsp)
    70fd:	00 00 00 00 
    7101:	48 c7 84 24 a0 00 00 	movq   $0x0,0xa0(%rsp)
    7108:	00 00 00 00 00 
    710d:	c7 84 24 a8 00 00 00 	movl   $0x68,0xa8(%rsp)
    7114:	68 00 00 00 
    7118:	48 89 84 24 b0 00 00 	mov    %rax,0xb0(%rsp)
    711f:	00 
    7120:	c7 84 24 b8 00 00 00 	movl   $0x1,0xb8(%rsp)
    7127:	01 00 00 00 
    712b:	48 c7 84 24 c0 00 00 	movq   $0x0,0xc0(%rsp)
    7132:	00 00 00 00 00 
    7137:	c7 84 24 c8 00 00 00 	movl   $0x65,0xc8(%rsp)
    713e:	65 00 00 00 
    7142:	48 c7 84 24 d0 00 00 	movq   $0x0,0xd0(%rsp)
    7149:	00 00 00 00 00 
    714e:	c7 84 24 d8 00 00 00 	movl   $0x0,0xd8(%rsp)
    7155:	00 00 00 00 
    7159:	48 c7 84 24 e0 00 00 	movq   $0x0,0xe0(%rsp)
    7160:	00 00 00 00 00 
    7165:	c7 84 24 e8 00 00 00 	movl   $0x0,0xe8(%rsp)
    716c:	00 00 00 00 
    7170:	45 31 c0             	xor    %r8d,%r8d
    7173:	4c 89 f1             	mov    %r14,%rcx
    7176:	4c 89 ea             	mov    %r13,%rdx
    7179:	48 89 ee             	mov    %rbp,%rsi
    717c:	44 89 e7             	mov    %r12d,%edi
    717f:	e8 8c b4 ff ff       	call   2610 <getopt_long@plt>
    7184:	89 44 24 0c          	mov    %eax,0xc(%rsp)
    7188:	83 f8 ff             	cmp    $0xffffffff,%eax
    718b:	0f 84 3f 04 00 00    	je     75d0 <init_monitor+0x5d0>
    7191:	8b 54 24 0c          	mov    0xc(%rsp),%edx
    7195:	83 fa 01             	cmp    $0x1,%edx
    7198:	0f 84 fa 00 00 00    	je     7298 <init_monitor+0x298>
    719e:	83 ea 62             	sub    $0x62,%edx
    71a1:	83 fa 0e             	cmp    $0xe,%edx
    71a4:	77 0a                	ja     71b0 <init_monitor+0x1b0>
    71a6:	48 63 04 93          	movslq (%rbx,%rdx,4),%rax
    71aa:	48 01 d8             	add    %rbx,%rax
    71ad:	3e ff e0             	notrack jmp *%rax
    71b0:	48 8b 55 00          	mov    0x0(%rbp),%rdx
    71b4:	48 8d 35 35 2c 00 00 	lea    0x2c35(%rip),%rsi        # 9df0 <__PRETTY_FUNCTION__.0+0x2a0>
    71bb:	bf 01 00 00 00       	mov    $0x1,%edi
    71c0:	31 c0                	xor    %eax,%eax
    71c2:	e8 89 b1 ff ff       	call   2350 <__printf_chk@plt>
    71c7:	48 8d 3d 4a 2c 00 00 	lea    0x2c4a(%rip),%rdi        # 9e18 <__PRETTY_FUNCTION__.0+0x2c8>
    71ce:	e8 fd b3 ff ff       	call   25d0 <puts@plt>
    71d3:	48 8d 3d 6e 2c 00 00 	lea    0x2c6e(%rip),%rdi        # 9e48 <__PRETTY_FUNCTION__.0+0x2f8>
    71da:	e8 f1 b3 ff ff       	call   25d0 <puts@plt>
    71df:	48 8d 3d 92 2c 00 00 	lea    0x2c92(%rip),%rdi        # 9e78 <__PRETTY_FUNCTION__.0+0x328>
    71e6:	e8 e5 b3 ff ff       	call   25d0 <puts@plt>
    71eb:	48 8d 3d c6 2c 00 00 	lea    0x2cc6(%rip),%rdi        # 9eb8 <__PRETTY_FUNCTION__.0+0x368>
    71f2:	e8 d9 b3 ff ff       	call   25d0 <puts@plt>
    71f7:	48 8d 35 f2 2c 00 00 	lea    0x2cf2(%rip),%rsi        # 9ef0 <__PRETTY_FUNCTION__.0+0x3a0>
    71fe:	bf 01 00 00 00       	mov    $0x1,%edi
    7203:	31 c0                	xor    %eax,%eax
    7205:	e8 46 b1 ff ff       	call   2350 <__printf_chk@plt>
    720a:	bf 0a 00 00 00       	mov    $0xa,%edi
    720f:	e8 6c b3 ff ff       	call   2580 <putchar@plt>
    7214:	31 ff                	xor    %edi,%edi
    7216:	e8 15 b3 ff ff       	call   2530 <exit@plt>
    721b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
    7220:	48 8b 3d f9 7d 00 00 	mov    0x7df9(%rip),%rdi        # f020 <optarg@GLIBC_2.2.5>
    7227:	4c 89 fa             	mov    %r15,%rdx
    722a:	48 8d 35 74 24 00 00 	lea    0x2474(%rip),%rsi        # 96a5 <__func__.1+0xd>
    7231:	31 c0                	xor    %eax,%eax
    7233:	e8 58 b2 ff ff       	call   2490 <__isoc99_sscanf@plt>
    7238:	e9 33 ff ff ff       	jmp    7170 <init_monitor+0x170>
    723d:	0f 1f 00             	nopl   (%rax)
    7240:	48 8b 05 d9 7d 00 00 	mov    0x7dd9(%rip),%rax        # f020 <optarg@GLIBC_2.2.5>
    7247:	48 89 05 0a e3 00 00 	mov    %rax,0xe30a(%rip)        # 15558 <log_file>
    724e:	e9 1d ff ff ff       	jmp    7170 <init_monitor+0x170>
    7253:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
    7258:	48 8b 05 c1 7d 00 00 	mov    0x7dc1(%rip),%rax        # f020 <optarg@GLIBC_2.2.5>
    725f:	48 89 05 da e2 00 00 	mov    %rax,0xe2da(%rip)        # 15540 <elf_file>
    7266:	e9 05 ff ff ff       	jmp    7170 <init_monitor+0x170>
    726b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
    7270:	48 8b 05 a9 7d 00 00 	mov    0x7da9(%rip),%rax        # f020 <optarg@GLIBC_2.2.5>
    7277:	48 89 05 d2 e2 00 00 	mov    %rax,0xe2d2(%rip)        # 15550 <diff_so_file>
    727e:	e9 ed fe ff ff       	jmp    7170 <init_monitor+0x170>
    7283:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
    7288:	31 c0                	xor    %eax,%eax
    728a:	e8 11 e4 ff ff       	call   56a0 <sdb_set_batch_mode>
    728f:	e9 dc fe ff ff       	jmp    7170 <init_monitor+0x170>
    7294:	0f 1f 40 00          	nopl   0x0(%rax)
    7298:	48 8b 05 81 7d 00 00 	mov    0x7d81(%rip),%rax        # f020 <optarg@GLIBC_2.2.5>
    729f:	48 89 05 a2 e2 00 00 	mov    %rax,0xe2a2(%rip)        # 15548 <img_file>
    72a6:	48 8d 35 4d 2a 00 00 	lea    0x2a4d(%rip),%rsi        # 9cfa <__PRETTY_FUNCTION__.0+0x1aa>
    72ad:	bf 01 00 00 00       	mov    $0x1,%edi
    72b2:	31 c0                	xor    %eax,%eax
    72b4:	e8 97 b0 ff ff       	call   2350 <__printf_chk@plt>
    72b9:	31 c0                	xor    %eax,%eax
    72bb:	4c 8d 25 d4 29 00 00 	lea    0x29d4(%rip),%r12        # 9c96 <__PRETTY_FUNCTION__.0+0x146>
    72c2:	4c 8d 2d 4f 2c 00 00 	lea    0x2c4f(%rip),%r13        # 9f18 <__PRETTY_FUNCTION__.0+0x3c8>
    72c9:	e8 52 05 00 00       	call   7820 <init_rand>
    72ce:	48 8b 3d 83 e2 00 00 	mov    0xe283(%rip),%rdi        # 15558 <log_file>
    72d5:	e8 16 04 00 00       	call   76f0 <init_log>
    72da:	31 c0                	xor    %eax,%eax
    72dc:	e8 ff 05 00 00       	call   78e0 <init_mem>
    72e1:	31 c0                	xor    %eax,%eax
    72e3:	e8 88 b5 ff ff       	call   2870 <init_device>
    72e8:	31 c0                	xor    %eax,%eax
    72ea:	e8 61 d0 ff ff       	call   4350 <init_isa>
    72ef:	31 c0                	xor    %eax,%eax
    72f1:	e8 ea fa ff ff       	call   6de0 <load_img>
    72f6:	8b 15 38 6e 00 00    	mov    0x6e38(%rip),%edx        # e134 <difftest_port>
    72fc:	48 8b 3d 4d e2 00 00 	mov    0xe24d(%rip),%rdi        # 15550 <diff_so_file>
    7303:	48 89 c6             	mov    %rax,%rsi
    7306:	e8 d5 d0 ff ff       	call   43e0 <init_difftest>
    730b:	31 c0                	xor    %eax,%eax
    730d:	e8 2e e6 ff ff       	call   5940 <init_sdb>
    7312:	31 c0                	xor    %eax,%eax
    7314:	b9 1f 00 00 00       	mov    $0x1f,%ecx
    7319:	4c 89 e2             	mov    %r12,%rdx
    731c:	4c 8d 0d db 29 00 00 	lea    0x29db(%rip),%r9        # 9cfe <__PRETTY_FUNCTION__.0+0x1ae>
    7323:	4c 8d 05 a6 2c 00 00 	lea    0x2ca6(%rip),%r8        # 9fd0 <__func__.0>
    732a:	4c 89 ee             	mov    %r13,%rsi
    732d:	bf 01 00 00 00       	mov    $0x1,%edi
    7332:	e8 19 b0 ff ff       	call   2350 <__printf_chk@plt>
    7337:	31 c0                	xor    %eax,%eax
    7339:	e8 d2 04 00 00       	call   7810 <log_enable>
    733e:	84 c0                	test   %al,%al
    7340:	0f 85 aa 01 00 00    	jne    74f0 <init_monitor+0x4f0>
    7346:	48 8d 9c 24 f0 00 00 	lea    0xf0(%rsp),%rbx
    734d:	00 
    734e:	66 0f ef c0          	pxor   %xmm0,%xmm0
    7352:	b9 2b 00 00 00       	mov    $0x2b,%ecx
    7357:	4c 89 e2             	mov    %r12,%rdx
    735a:	4c 8d 2d ac 29 00 00 	lea    0x29ac(%rip),%r13        # 9d0d <__PRETTY_FUNCTION__.0+0x1bd>
    7361:	49 89 d9             	mov    %rbx,%r9
    7364:	48 b8 57 61 74 63 68 	movabs $0x696f706863746157,%rax
    736b:	70 6f 69 
    736e:	bf 01 00 00 00       	mov    $0x1,%edi
    7373:	48 89 84 24 f0 00 00 	mov    %rax,0xf0(%rsp)
    737a:	00 
    737b:	4c 8d 05 4e 2c 00 00 	lea    0x2c4e(%rip),%r8        # 9fd0 <__func__.0>
    7382:	4c 89 ee             	mov    %r13,%rsi
    7385:	48 b8 42 72 65 61 6b 	movabs $0x696f706b61657242,%rax
    738c:	70 6f 69 
    738f:	48 89 84 24 fc 00 00 	mov    %rax,0xfc(%rsp)
    7396:	00 
    7397:	48 b8 61 72 65 20 65 	movabs $0x62616e6520657261,%rax
    739e:	6e 61 62 
    73a1:	48 89 84 24 08 01 00 	mov    %rax,0x108(%rsp)
    73a8:	00 
    73a9:	31 c0                	xor    %eax,%eax
    73ab:	0f 29 84 24 10 01 00 	movaps %xmm0,0x110(%rsp)
    73b2:	00 
    73b3:	c7 84 24 f8 00 00 00 	movl   $0x202c746e,0xf8(%rsp)
    73ba:	6e 74 2c 20 
    73be:	c7 84 24 04 01 00 00 	movl   $0x202c746e,0x104(%rsp)
    73c5:	6e 74 2c 20 
    73c9:	c7 84 24 10 01 00 00 	movl   $0x64656c,0x110(%rsp)
    73d0:	6c 65 64 00 
    73d4:	0f 29 84 24 20 01 00 	movaps %xmm0,0x120(%rsp)
    73db:	00 
    73dc:	0f 29 84 24 30 01 00 	movaps %xmm0,0x130(%rsp)
    73e3:	00 
    73e4:	0f 29 84 24 40 01 00 	movaps %xmm0,0x140(%rsp)
    73eb:	00 
    73ec:	0f 29 84 24 50 01 00 	movaps %xmm0,0x150(%rsp)
    73f3:	00 
    73f4:	0f 29 84 24 60 01 00 	movaps %xmm0,0x160(%rsp)
    73fb:	00 
    73fc:	0f 29 84 24 70 01 00 	movaps %xmm0,0x170(%rsp)
    7403:	00 
    7404:	0f 29 84 24 80 01 00 	movaps %xmm0,0x180(%rsp)
    740b:	00 
    740c:	0f 29 84 24 90 01 00 	movaps %xmm0,0x190(%rsp)
    7413:	00 
    7414:	0f 29 84 24 a0 01 00 	movaps %xmm0,0x1a0(%rsp)
    741b:	00 
    741c:	0f 29 84 24 b0 01 00 	movaps %xmm0,0x1b0(%rsp)
    7423:	00 
    7424:	0f 29 84 24 c0 01 00 	movaps %xmm0,0x1c0(%rsp)
    742b:	00 
    742c:	0f 29 84 24 d0 01 00 	movaps %xmm0,0x1d0(%rsp)
    7433:	00 
    7434:	0f 29 84 24 e0 01 00 	movaps %xmm0,0x1e0(%rsp)
    743b:	00 
    743c:	e8 0f af ff ff       	call   2350 <__printf_chk@plt>
    7441:	31 c0                	xor    %eax,%eax
    7443:	e8 c8 03 00 00       	call   7810 <log_enable>
    7448:	84 c0                	test   %al,%al
    744a:	0f 85 38 01 00 00    	jne    7588 <init_monitor+0x588>
    7450:	48 83 ec 08          	sub    $0x8,%rsp
    7454:	48 8d 1d d5 28 00 00 	lea    0x28d5(%rip),%rbx        # 9d30 <__PRETTY_FUNCTION__.0+0x1e0>
    745b:	4c 89 e2             	mov    %r12,%rdx
    745e:	31 c0                	xor    %eax,%eax
    7460:	53                   	push   %rbx
    7461:	4c 8d 2d d8 2a 00 00 	lea    0x2ad8(%rip),%r13        # 9f40 <__PRETTY_FUNCTION__.0+0x3f0>
    7468:	b9 2d 00 00 00       	mov    $0x2d,%ecx
    746d:	4c 8d 0d b3 28 00 00 	lea    0x28b3(%rip),%r9        # 9d27 <__PRETTY_FUNCTION__.0+0x1d7>
    7474:	4c 89 ee             	mov    %r13,%rsi
    7477:	4c 8d 05 52 2b 00 00 	lea    0x2b52(%rip),%r8        # 9fd0 <__func__.0>
    747e:	bf 01 00 00 00       	mov    $0x1,%edi
    7483:	e8 c8 ae ff ff       	call   2350 <__printf_chk@plt>
    7488:	31 c0                	xor    %eax,%eax
    748a:	e8 81 03 00 00       	call   7810 <log_enable>
    748f:	59                   	pop    %rcx
    7490:	5e                   	pop    %rsi
    7491:	84 c0                	test   %al,%al
    7493:	0f 85 a7 00 00 00    	jne    7540 <init_monitor+0x540>
    7499:	bf 01 00 00 00       	mov    $0x1,%edi
    749e:	31 c0                	xor    %eax,%eax
    74a0:	48 8d 15 c9 2a 00 00 	lea    0x2ac9(%rip),%rdx        # 9f70 <__PRETTY_FUNCTION__.0+0x420>
    74a7:	48 8d 35 8e 28 00 00 	lea    0x288e(%rip),%rsi        # 9d3c <__PRETTY_FUNCTION__.0+0x1ec>
    74ae:	e8 9d ae ff ff       	call   2350 <__printf_chk@plt>
    74b3:	48 8d 3d 97 28 00 00 	lea    0x2897(%rip),%rdi        # 9d51 <__PRETTY_FUNCTION__.0+0x201>
    74ba:	e8 11 b1 ff ff       	call   25d0 <puts@plt>
    74bf:	48 8b 84 24 f8 01 00 	mov    0x1f8(%rsp),%rax
    74c6:	00 
    74c7:	64 48 2b 04 25 28 00 	sub    %fs:0x28,%rax
    74ce:	00 00 
    74d0:	0f 85 01 01 00 00    	jne    75d7 <init_monitor+0x5d7>
    74d6:	48 81 c4 08 02 00 00 	add    $0x208,%rsp
    74dd:	5b                   	pop    %rbx
    74de:	5d                   	pop    %rbp
    74df:	41 5c                	pop    %r12
    74e1:	41 5d                	pop    %r13
    74e3:	41 5e                	pop    %r14
    74e5:	41 5f                	pop    %r15
    74e7:	c3                   	ret    
    74e8:	0f 1f 84 00 00 00 00 	nopl   0x0(%rax,%rax,1)
    74ef:	00 
    74f0:	48 83 ec 08          	sub    $0x8,%rsp
    74f4:	41 b8 1f 00 00 00    	mov    $0x1f,%r8d
    74fa:	4c 89 e1             	mov    %r12,%rcx
    74fd:	4c 89 ea             	mov    %r13,%rdx
    7500:	48 8d 05 f7 27 00 00 	lea    0x27f7(%rip),%rax        # 9cfe <__PRETTY_FUNCTION__.0+0x1ae>
    7507:	48 8b 3d 5a e0 00 00 	mov    0xe05a(%rip),%rdi        # 15568 <log_fp>
    750e:	be 01 00 00 00       	mov    $0x1,%esi
    7513:	4c 8d 0d b6 2a 00 00 	lea    0x2ab6(%rip),%r9        # 9fd0 <__func__.0>
    751a:	50                   	push   %rax
    751b:	31 c0                	xor    %eax,%eax
    751d:	e8 de b0 ff ff       	call   2600 <__fprintf_chk@plt>
    7522:	48 8b 3d 3f e0 00 00 	mov    0xe03f(%rip),%rdi        # 15568 <log_fp>
    7529:	e8 d2 af ff ff       	call   2500 <fflush@plt>
    752e:	41 59                	pop    %r9
    7530:	41 5a                	pop    %r10
    7532:	e9 0f fe ff ff       	jmp    7346 <init_monitor+0x346>
    7537:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
    753e:	00 00 
    7540:	48 8d 05 e0 27 00 00 	lea    0x27e0(%rip),%rax        # 9d27 <__PRETTY_FUNCTION__.0+0x1d7>
    7547:	53                   	push   %rbx
    7548:	4c 89 ea             	mov    %r13,%rdx
    754b:	4c 89 e1             	mov    %r12,%rcx
    754e:	50                   	push   %rax
    754f:	48 8b 3d 12 e0 00 00 	mov    0xe012(%rip),%rdi        # 15568 <log_fp>
    7556:	be 01 00 00 00       	mov    $0x1,%esi
    755b:	31 c0                	xor    %eax,%eax
    755d:	4c 8d 0d 6c 2a 00 00 	lea    0x2a6c(%rip),%r9        # 9fd0 <__func__.0>
    7564:	41 b8 2d 00 00 00    	mov    $0x2d,%r8d
    756a:	e8 91 b0 ff ff       	call   2600 <__fprintf_chk@plt>
    756f:	48 8b 3d f2 df 00 00 	mov    0xdff2(%rip),%rdi        # 15568 <log_fp>
    7576:	e8 85 af ff ff       	call   2500 <fflush@plt>
    757b:	58                   	pop    %rax
    757c:	5a                   	pop    %rdx
    757d:	e9 17 ff ff ff       	jmp    7499 <init_monitor+0x499>
    7582:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
    7588:	48 83 ec 08          	sub    $0x8,%rsp
    758c:	48 8b 3d d5 df 00 00 	mov    0xdfd5(%rip),%rdi        # 15568 <log_fp>
    7593:	4c 89 e1             	mov    %r12,%rcx
    7596:	31 c0                	xor    %eax,%eax
    7598:	53                   	push   %rbx
    7599:	41 b8 2b 00 00 00    	mov    $0x2b,%r8d
    759f:	4c 89 ea             	mov    %r13,%rdx
    75a2:	be 01 00 00 00       	mov    $0x1,%esi
    75a7:	4c 8d 0d 22 2a 00 00 	lea    0x2a22(%rip),%r9        # 9fd0 <__func__.0>
    75ae:	e8 4d b0 ff ff       	call   2600 <__fprintf_chk@plt>
    75b3:	48 8b 3d ae df 00 00 	mov    0xdfae(%rip),%rdi        # 15568 <log_fp>
    75ba:	e8 41 af ff ff       	call   2500 <fflush@plt>
    75bf:	5f                   	pop    %rdi
    75c0:	41 58                	pop    %r8
    75c2:	e9 89 fe ff ff       	jmp    7450 <init_monitor+0x450>
    75c7:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
    75ce:	00 00 
    75d0:	31 d2                	xor    %edx,%edx
    75d2:	e9 cf fc ff ff       	jmp    72a6 <init_monitor+0x2a6>
    75d7:	e8 e4 ae ff ff       	call   24c0 <__stack_chk_fail@plt>
    75dc:	0f 1f 40 00          	nopl   0x0(%rax)

00000000000075e0 <reset_monitor>:
    75e0:	f3 0f 1e fa          	endbr64 
    75e4:	48 83 ec 08          	sub    $0x8,%rsp
    75e8:	31 c0                	xor    %eax,%eax
    75ea:	e8 31 02 00 00       	call   7820 <init_rand>
    75ef:	31 c0                	xor    %eax,%eax
    75f1:	e8 ea 02 00 00       	call   78e0 <init_mem>
    75f6:	31 c0                	xor    %eax,%eax
    75f8:	e8 53 cd ff ff       	call   4350 <init_isa>
    75fd:	48 8b 3d 54 df 00 00 	mov    0xdf54(%rip),%rdi        # 15558 <log_file>
    7604:	e8 e7 00 00 00       	call   76f0 <init_log>
    7609:	31 c0                	xor    %eax,%eax
    760b:	e8 d0 f7 ff ff       	call   6de0 <load_img>
    7610:	31 c0                	xor    %eax,%eax
    7612:	e8 29 e8 ff ff       	call   5e40 <reload_bp>
    7617:	31 d2                	xor    %edx,%edx
    7619:	be 00 00 00 1c       	mov    $0x1c000000,%esi
    761e:	48 83 c4 08          	add    $0x8,%rsp
    7622:	bf 01 00 00 00       	mov    $0x1,%edi
    7627:	e9 b4 0f 00 00       	jmp    85e0 <set_nemu_state>
    762c:	0f 1f 40 00          	nopl   0x0(%rax)

0000000000007630 <get_time>:
    7630:	f3 0f 1e fa          	endbr64 
    7634:	55                   	push   %rbp
    7635:	53                   	push   %rbx
    7636:	48 83 ec 28          	sub    $0x28,%rsp
    763a:	48 8b 1d 1f df 00 00 	mov    0xdf1f(%rip),%rbx        # 15560 <boot_time>
    7641:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    7648:	00 00 
    764a:	48 89 44 24 18       	mov    %rax,0x18(%rsp)
    764f:	31 c0                	xor    %eax,%eax
    7651:	48 89 e5             	mov    %rsp,%rbp
    7654:	48 85 db             	test   %rbx,%rbx
    7657:	74 37                	je     7690 <get_time+0x60>
    7659:	31 f6                	xor    %esi,%esi
    765b:	48 89 ef             	mov    %rbp,%rdi
    765e:	e8 8d af ff ff       	call   25f0 <gettimeofday@plt>
    7663:	48 69 04 24 40 42 0f 	imul   $0xf4240,(%rsp),%rax
    766a:	00 
    766b:	48 03 44 24 08       	add    0x8(%rsp),%rax
    7670:	48 29 d8             	sub    %rbx,%rax
    7673:	48 8b 54 24 18       	mov    0x18(%rsp),%rdx
    7678:	64 48 2b 14 25 28 00 	sub    %fs:0x28,%rdx
    767f:	00 00 
    7681:	75 2d                	jne    76b0 <get_time+0x80>
    7683:	48 83 c4 28          	add    $0x28,%rsp
    7687:	5b                   	pop    %rbx
    7688:	5d                   	pop    %rbp
    7689:	c3                   	ret    
    768a:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
    7690:	31 f6                	xor    %esi,%esi
    7692:	48 89 ef             	mov    %rbp,%rdi
    7695:	e8 56 af ff ff       	call   25f0 <gettimeofday@plt>
    769a:	48 69 1c 24 40 42 0f 	imul   $0xf4240,(%rsp),%rbx
    76a1:	00 
    76a2:	48 03 5c 24 08       	add    0x8(%rsp),%rbx
    76a7:	48 89 1d b2 de 00 00 	mov    %rbx,0xdeb2(%rip)        # 15560 <boot_time>
    76ae:	eb a9                	jmp    7659 <get_time+0x29>
    76b0:	e8 0b ae ff ff       	call   24c0 <__stack_chk_fail@plt>
    76b5:	66 2e 0f 1f 84 00 00 	cs nopw 0x0(%rax,%rax,1)
    76bc:	00 00 00 
    76bf:	90                   	nop

00000000000076c0 <is_exit_status_bad>:
    76c0:	f3 0f 1e fa          	endbr64 
    76c4:	8b 15 6e 6a 00 00    	mov    0x6a6e(%rip),%edx        # e138 <nemu_state>
    76ca:	31 c0                	xor    %eax,%eax
    76cc:	83 fa 04             	cmp    $0x4,%edx
    76cf:	0f 94 c0             	sete   %al
    76d2:	83 fa 02             	cmp    $0x2,%edx
    76d5:	75 0d                	jne    76e4 <is_exit_status_bad+0x24>
    76d7:	8b 15 63 6a 00 00    	mov    0x6a63(%rip),%edx        # e140 <nemu_state+0x8>
    76dd:	31 c0                	xor    %eax,%eax
    76df:	85 d2                	test   %edx,%edx
    76e1:	0f 94 c0             	sete   %al
    76e4:	83 f0 01             	xor    $0x1,%eax
    76e7:	c3                   	ret    
    76e8:	0f 1f 84 00 00 00 00 	nopl   0x0(%rax,%rax,1)
    76ef:	00 

00000000000076f0 <init_log>:
    76f0:	f3 0f 1e fa          	endbr64 
    76f4:	48 8b 05 05 79 00 00 	mov    0x7905(%rip),%rax        # f000 <stdout@GLIBC_2.2.5>
    76fb:	41 56                	push   %r14
    76fd:	41 55                	push   %r13
    76ff:	48 89 05 62 de 00 00 	mov    %rax,0xde62(%rip)        # 15568 <log_fp>
    7706:	41 54                	push   %r12
    7708:	48 85 ff             	test   %rdi,%rdi
    770b:	0f 84 8f 00 00 00    	je     77a0 <init_log+0xb0>
    7711:	48 8d 35 9e 1f 00 00 	lea    0x1f9e(%rip),%rsi        # 96b6 <__func__.1+0x1e>
    7718:	49 89 fc             	mov    %rdi,%r12
    771b:	e8 f0 ad ff ff       	call   2510 <fopen@plt>
    7720:	48 85 c0             	test   %rax,%rax
    7723:	0f 84 80 00 00 00    	je     77a9 <init_log+0xb9>
    7729:	48 89 05 38 de 00 00 	mov    %rax,0xde38(%rip)        # 15568 <log_fp>
    7730:	4d 89 e1             	mov    %r12,%r9
    7733:	b9 1c 00 00 00       	mov    $0x1c,%ecx
    7738:	bf 01 00 00 00       	mov    $0x1,%edi
    773d:	31 c0                	xor    %eax,%eax
    773f:	4c 8d 35 b2 28 00 00 	lea    0x28b2(%rip),%r14        # 9ff8 <__func__.2+0x10>
    7746:	4c 8d 2d bb 28 00 00 	lea    0x28bb(%rip),%r13        # a008 <__func__.2+0x20>
    774d:	4c 89 f2             	mov    %r14,%rdx
    7750:	4c 89 ee             	mov    %r13,%rsi
    7753:	4c 8d 05 de 28 00 00 	lea    0x28de(%rip),%r8        # a038 <__func__.0>
    775a:	e8 f1 ab ff ff       	call   2350 <__printf_chk@plt>
    775f:	48 83 ec 08          	sub    $0x8,%rsp
    7763:	4c 89 ea             	mov    %r13,%rdx
    7766:	4c 89 f1             	mov    %r14,%rcx
    7769:	41 54                	push   %r12
    776b:	48 8b 3d f6 dd 00 00 	mov    0xddf6(%rip),%rdi        # 15568 <log_fp>
    7772:	be 01 00 00 00       	mov    $0x1,%esi
    7777:	31 c0                	xor    %eax,%eax
    7779:	4c 8d 0d b8 28 00 00 	lea    0x28b8(%rip),%r9        # a038 <__func__.0>
    7780:	41 b8 1c 00 00 00    	mov    $0x1c,%r8d
    7786:	e8 75 ae ff ff       	call   2600 <__fprintf_chk@plt>
    778b:	48 8b 3d d6 dd 00 00 	mov    0xddd6(%rip),%rdi        # 15568 <log_fp>
    7792:	58                   	pop    %rax
    7793:	5a                   	pop    %rdx
    7794:	41 5c                	pop    %r12
    7796:	41 5d                	pop    %r13
    7798:	41 5e                	pop    %r14
    779a:	e9 61 ad ff ff       	jmp    2500 <fflush@plt>
    779f:	90                   	nop
    77a0:	4c 8d 25 4a 28 00 00 	lea    0x284a(%rip),%r12        # 9ff1 <__func__.2+0x9>
    77a7:	eb 87                	jmp    7730 <init_log+0x40>
    77a9:	48 8b 3d 50 78 00 00 	mov    0x7850(%rip),%rdi        # f000 <stdout@GLIBC_2.2.5>
    77b0:	e8 4b ad ff ff       	call   2500 <fflush@plt>
    77b5:	4c 89 e1             	mov    %r12,%rcx
    77b8:	be 01 00 00 00       	mov    $0x1,%esi
    77bd:	31 c0                	xor    %eax,%eax
    77bf:	48 8b 3d 7a 78 00 00 	mov    0x787a(%rip),%rdi        # f040 <stderr@GLIBC_2.2.5>
    77c6:	48 8d 15 e2 24 00 00 	lea    0x24e2(%rip),%rdx        # 9caf <__PRETTY_FUNCTION__.0+0x15f>
    77cd:	e8 2e ae ff ff       	call   2600 <__fprintf_chk@plt>
    77d2:	48 8b 3d 8f dd 00 00 	mov    0xdd8f(%rip),%rdi        # 15568 <log_fp>
    77d9:	e8 22 ad ff ff       	call   2500 <fflush@plt>
    77de:	31 c0                	xor    %eax,%eax
    77e0:	e8 eb d2 ff ff       	call   4ad0 <assert_fail_msg>
    77e5:	48 8d 0d 5c 28 00 00 	lea    0x285c(%rip),%rcx        # a048 <__PRETTY_FUNCTION__.1>
    77ec:	ba 19 00 00 00       	mov    $0x19,%edx
    77f1:	48 8d 35 00 28 00 00 	lea    0x2800(%rip),%rsi        # 9ff8 <__func__.2+0x10>
    77f8:	48 8d 3d dc 1b 00 00 	lea    0x1bdc(%rip),%rdi        # 93db <__PRETTY_FUNCTION__.1+0x1f3>
    77ff:	e8 fc ab ff ff       	call   2400 <__assert_fail@plt>
    7804:	66 66 2e 0f 1f 84 00 	data16 cs nopw 0x0(%rax,%rax,1)
    780b:	00 00 00 00 
    780f:	90                   	nop

0000000000007810 <log_enable>:
    7810:	f3 0f 1e fa          	endbr64 
    7814:	b8 01 00 00 00       	mov    $0x1,%eax
    7819:	c3                   	ret    
    781a:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

0000000000007820 <init_rand>:
    7820:	f3 0f 1e fa          	endbr64 
    7824:	48 83 ec 08          	sub    $0x8,%rsp
    7828:	31 ff                	xor    %edi,%edi
    782a:	e8 21 ac ff ff       	call   2450 <time@plt>
    782f:	48 83 c4 08          	add    $0x8,%rsp
    7833:	89 c7                	mov    %eax,%edi
    7835:	e9 46 ac ff ff       	jmp    2480 <srand@plt>
    783a:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

0000000000007840 <vaddr_ifetch>:
    7840:	f3 0f 1e fa          	endbr64 
    7844:	e9 67 01 00 00       	jmp    79b0 <paddr_read>
    7849:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000007850 <break_ifetch>:
    7850:	f3 0f 1e fa          	endbr64 
    7854:	e9 57 01 00 00       	jmp    79b0 <paddr_read>
    7859:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000007860 <vaddr_read>:
    7860:	f3 0f 1e fa          	endbr64 
    7864:	e9 47 01 00 00       	jmp    79b0 <paddr_read>
    7869:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000007870 <sdb_vaddr_read>:
    7870:	f3 0f 1e fa          	endbr64 
    7874:	e9 97 01 00 00       	jmp    7a10 <sdb_paddr_read>
    7879:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000007880 <vaddr_write>:
    7880:	f3 0f 1e fa          	endbr64 
    7884:	e9 e7 01 00 00       	jmp    7a70 <paddr_write>
    7889:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000007890 <break_write>:
    7890:	f3 0f 1e fa          	endbr64 
    7894:	e9 d7 01 00 00       	jmp    7a70 <paddr_write>
    7899:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

00000000000078a0 <guest_to_host>:
    78a0:	f3 0f 1e fa          	endbr64 
    78a4:	89 ff                	mov    %edi,%edi
    78a6:	48 8d 05 53 e7 00 00 	lea    0xe753(%rip),%rax        # 16000 <pmem>
    78ad:	48 8d 84 38 00 00 00 	lea    -0x1c000000(%rax,%rdi,1),%rax
    78b4:	e4 
    78b5:	c3                   	ret    
    78b6:	66 2e 0f 1f 84 00 00 	cs nopw 0x0(%rax,%rax,1)
    78bd:	00 00 00 

00000000000078c0 <host_to_guest>:
    78c0:	f3 0f 1e fa          	endbr64 
    78c4:	48 8d 05 35 e7 00 00 	lea    0xe735(%rip),%rax        # 16000 <pmem>
    78cb:	48 29 c7             	sub    %rax,%rdi
    78ce:	8d 87 00 00 00 1c    	lea    0x1c000000(%rdi),%eax
    78d4:	c3                   	ret    
    78d5:	66 66 2e 0f 1f 84 00 	data16 cs nopw 0x0(%rax,%rax,1)
    78dc:	00 00 00 00 

00000000000078e0 <init_mem>:
    78e0:	f3 0f 1e fa          	endbr64 
    78e4:	41 55                	push   %r13
    78e6:	41 54                	push   %r12
    78e8:	55                   	push   %rbp
    78e9:	53                   	push   %rbx
    78ea:	48 8d 1d 0f e7 00 00 	lea    0xe70f(%rip),%rbx        # 16000 <pmem>
    78f1:	48 8d ab 00 00 00 08 	lea    0x8000000(%rbx),%rbp
    78f8:	48 83 ec 08          	sub    $0x8,%rsp
    78fc:	0f 1f 40 00          	nopl   0x0(%rax)
    7900:	e8 7b aa ff ff       	call   2380 <rand@plt>
    7905:	48 83 c3 04          	add    $0x4,%rbx
    7909:	89 43 fc             	mov    %eax,-0x4(%rbx)
    790c:	48 39 eb             	cmp    %rbp,%rbx
    790f:	75 ef                	jne    7900 <init_mem+0x20>
    7911:	48 83 ec 08          	sub    $0x8,%rsp
    7915:	4c 8d 2d 35 27 00 00 	lea    0x2735(%rip),%r13        # a051 <__PRETTY_FUNCTION__.1+0x9>
    791c:	b9 39 00 00 00       	mov    $0x39,%ecx
    7921:	31 c0                	xor    %eax,%eax
    7923:	68 ff ff ff 23       	push   $0x23ffffff
    7928:	4c 8d 25 39 27 00 00 	lea    0x2739(%rip),%r12        # a068 <__PRETTY_FUNCTION__.1+0x20>
    792f:	4c 89 ea             	mov    %r13,%rdx
    7932:	41 b9 00 00 00 1c    	mov    $0x1c000000,%r9d
    7938:	4c 8d 05 69 27 00 00 	lea    0x2769(%rip),%r8        # a0a8 <__func__.0>
    793f:	4c 89 e6             	mov    %r12,%rsi
    7942:	bf 01 00 00 00       	mov    $0x1,%edi
    7947:	e8 04 aa ff ff       	call   2350 <__printf_chk@plt>
    794c:	31 c0                	xor    %eax,%eax
    794e:	e8 bd fe ff ff       	call   7810 <log_enable>
    7953:	5a                   	pop    %rdx
    7954:	59                   	pop    %rcx
    7955:	84 c0                	test   %al,%al
    7957:	75 0b                	jne    7964 <init_mem+0x84>
    7959:	48 83 c4 08          	add    $0x8,%rsp
    795d:	5b                   	pop    %rbx
    795e:	5d                   	pop    %rbp
    795f:	41 5c                	pop    %r12
    7961:	41 5d                	pop    %r13
    7963:	c3                   	ret    
    7964:	68 ff ff ff 23       	push   $0x23ffffff
    7969:	4c 89 e9             	mov    %r13,%rcx
    796c:	4c 89 e2             	mov    %r12,%rdx
    796f:	be 01 00 00 00       	mov    $0x1,%esi
    7974:	68 00 00 00 1c       	push   $0x1c000000
    7979:	48 8b 3d e8 db 00 00 	mov    0xdbe8(%rip),%rdi        # 15568 <log_fp>
    7980:	41 b8 39 00 00 00    	mov    $0x39,%r8d
    7986:	31 c0                	xor    %eax,%eax
    7988:	4c 8d 0d 19 27 00 00 	lea    0x2719(%rip),%r9        # a0a8 <__func__.0>
    798f:	e8 6c ac ff ff       	call   2600 <__fprintf_chk@plt>
    7994:	48 8b 3d cd db 00 00 	mov    0xdbcd(%rip),%rdi        # 15568 <log_fp>
    799b:	48 83 c4 18          	add    $0x18,%rsp
    799f:	5b                   	pop    %rbx
    79a0:	5d                   	pop    %rbp
    79a1:	41 5c                	pop    %r12
    79a3:	41 5d                	pop    %r13
    79a5:	e9 56 ab ff ff       	jmp    2500 <fflush@plt>
    79aa:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

00000000000079b0 <paddr_read>:
    79b0:	f3 0f 1e fa          	endbr64 
    79b4:	8d 87 00 00 00 e4    	lea    -0x1c000000(%rdi),%eax
    79ba:	3d ff ff ff 07       	cmp    $0x7ffffff,%eax
    79bf:	77 3f                	ja     7a00 <paddr_read+0x50>
    79c1:	89 ff                	mov    %edi,%edi
    79c3:	48 8d 05 36 e6 00 00 	lea    0xe636(%rip),%rax        # 16000 <pmem>
    79ca:	48 8d 94 38 00 00 00 	lea    -0x1c000000(%rax,%rdi,1),%rdx
    79d1:	e4 
    79d2:	83 fe 02             	cmp    $0x2,%esi
    79d5:	74 11                	je     79e8 <paddr_read+0x38>
    79d7:	83 fe 04             	cmp    $0x4,%esi
    79da:	74 1c                	je     79f8 <paddr_read+0x48>
    79dc:	31 c0                	xor    %eax,%eax
    79de:	83 fe 01             	cmp    $0x1,%esi
    79e1:	74 0d                	je     79f0 <paddr_read+0x40>
    79e3:	c3                   	ret    
    79e4:	0f 1f 40 00          	nopl   0x0(%rax)
    79e8:	0f b7 02             	movzwl (%rdx),%eax
    79eb:	c3                   	ret    
    79ec:	0f 1f 40 00          	nopl   0x0(%rax)
    79f0:	0f b6 02             	movzbl (%rdx),%eax
    79f3:	c3                   	ret    
    79f4:	0f 1f 40 00          	nopl   0x0(%rax)
    79f8:	8b 02                	mov    (%rdx),%eax
    79fa:	c3                   	ret    
    79fb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
    7a00:	e9 1b 08 00 00       	jmp    8220 <mmio_read>
    7a05:	66 66 2e 0f 1f 84 00 	data16 cs nopw 0x0(%rax,%rax,1)
    7a0c:	00 00 00 00 

0000000000007a10 <sdb_paddr_read>:
    7a10:	f3 0f 1e fa          	endbr64 
    7a14:	8d 87 00 00 00 e4    	lea    -0x1c000000(%rdi),%eax
    7a1a:	3d ff ff ff 07       	cmp    $0x7ffffff,%eax
    7a1f:	77 3f                	ja     7a60 <sdb_paddr_read+0x50>
    7a21:	89 ff                	mov    %edi,%edi
    7a23:	48 8d 05 d6 e5 00 00 	lea    0xe5d6(%rip),%rax        # 16000 <pmem>
    7a2a:	48 8d 94 38 00 00 00 	lea    -0x1c000000(%rax,%rdi,1),%rdx
    7a31:	e4 
    7a32:	83 fe 02             	cmp    $0x2,%esi
    7a35:	74 11                	je     7a48 <sdb_paddr_read+0x38>
    7a37:	83 fe 04             	cmp    $0x4,%esi
    7a3a:	74 1c                	je     7a58 <sdb_paddr_read+0x48>
    7a3c:	31 c0                	xor    %eax,%eax
    7a3e:	83 fe 01             	cmp    $0x1,%esi
    7a41:	74 0d                	je     7a50 <sdb_paddr_read+0x40>
    7a43:	c3                   	ret    
    7a44:	0f 1f 40 00          	nopl   0x0(%rax)
    7a48:	0f b7 02             	movzwl (%rdx),%eax
    7a4b:	c3                   	ret    
    7a4c:	0f 1f 40 00          	nopl   0x0(%rax)
    7a50:	0f b6 02             	movzbl (%rdx),%eax
    7a53:	c3                   	ret    
    7a54:	0f 1f 40 00          	nopl   0x0(%rax)
    7a58:	8b 02                	mov    (%rdx),%eax
    7a5a:	c3                   	ret    
    7a5b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
    7a60:	e9 1b 08 00 00       	jmp    8280 <sdb_mmio_read>
    7a65:	66 66 2e 0f 1f 84 00 	data16 cs nopw 0x0(%rax,%rax,1)
    7a6c:	00 00 00 00 

0000000000007a70 <paddr_write>:
    7a70:	f3 0f 1e fa          	endbr64 
    7a74:	8d 87 00 00 00 e4    	lea    -0x1c000000(%rdi),%eax
    7a7a:	3d ff ff ff 07       	cmp    $0x7ffffff,%eax
    7a7f:	77 3f                	ja     7ac0 <paddr_write+0x50>
    7a81:	89 ff                	mov    %edi,%edi
    7a83:	48 8d 05 76 e5 00 00 	lea    0xe576(%rip),%rax        # 16000 <pmem>
    7a8a:	48 8d 84 38 00 00 00 	lea    -0x1c000000(%rax,%rdi,1),%rax
    7a91:	e4 
    7a92:	83 fe 02             	cmp    $0x2,%esi
    7a95:	74 11                	je     7aa8 <paddr_write+0x38>
    7a97:	83 fe 04             	cmp    $0x4,%esi
    7a9a:	74 1c                	je     7ab8 <paddr_write+0x48>
    7a9c:	83 fe 01             	cmp    $0x1,%esi
    7a9f:	74 0f                	je     7ab0 <paddr_write+0x40>
    7aa1:	c3                   	ret    
    7aa2:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
    7aa8:	66 89 10             	mov    %dx,(%rax)
    7aab:	c3                   	ret    
    7aac:	0f 1f 40 00          	nopl   0x0(%rax)
    7ab0:	88 10                	mov    %dl,(%rax)
    7ab2:	c3                   	ret    
    7ab3:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
    7ab8:	89 10                	mov    %edx,(%rax)
    7aba:	c3                   	ret    
    7abb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
    7ac0:	e9 1b 08 00 00       	jmp    82e0 <mmio_write>
    7ac5:	66 2e 0f 1f 84 00 00 	cs nopw 0x0(%rax,%rax,1)
    7acc:	00 00 00 
    7acf:	90                   	nop

0000000000007ad0 <new_space>:
    7ad0:	f3 0f 1e fa          	endbr64 
    7ad4:	8d 87 ff 0f 00 00    	lea    0xfff(%rdi),%eax
    7ada:	4c 8b 05 1f e5 00 08 	mov    0x800e51f(%rip),%r8        # 8016000 <p_space>
    7ae1:	25 00 f0 ff ff       	and    $0xfffff000,%eax
    7ae6:	48 98                	cltq   
    7ae8:	4c 01 c0             	add    %r8,%rax
    7aeb:	48 89 05 0e e5 00 08 	mov    %rax,0x800e50e(%rip)        # 8016000 <p_space>
    7af2:	48 2b 05 0f e5 00 08 	sub    0x800e50f(%rip),%rax        # 8016008 <io_space>
    7af9:	48 3d ff ff 1f 00    	cmp    $0x1fffff,%rax
    7aff:	7f 04                	jg     7b05 <new_space+0x35>
    7b01:	4c 89 c0             	mov    %r8,%rax
    7b04:	c3                   	ret    
    7b05:	50                   	push   %rax
    7b06:	48 8d 0d bb 27 00 00 	lea    0x27bb(%rip),%rcx        # a2c8 <__PRETTY_FUNCTION__.4>
    7b0d:	ba 22 00 00 00       	mov    $0x22,%edx
    7b12:	48 8d 35 98 25 00 00 	lea    0x2598(%rip),%rsi        # a0b1 <__func__.0+0x9>
    7b19:	48 8d 3d f0 25 00 00 	lea    0x25f0(%rip),%rdi        # a110 <__func__.0+0x68>
    7b20:	e8 db a8 ff ff       	call   2400 <__assert_fail@plt>
    7b25:	66 66 2e 0f 1f 84 00 	data16 cs nopw 0x0(%rax,%rax,1)
    7b2c:	00 00 00 00 

0000000000007b30 <init_map>:
    7b30:	f3 0f 1e fa          	endbr64 
    7b34:	48 83 ec 08          	sub    $0x8,%rsp
    7b38:	bf 00 00 20 00       	mov    $0x200000,%edi
    7b3d:	e8 2e aa ff ff       	call   2570 <malloc@plt>
    7b42:	48 89 05 bf e4 00 08 	mov    %rax,0x800e4bf(%rip)        # 8016008 <io_space>
    7b49:	48 85 c0             	test   %rax,%rax
    7b4c:	74 0c                	je     7b5a <init_map+0x2a>
    7b4e:	48 89 05 ab e4 00 08 	mov    %rax,0x800e4ab(%rip)        # 8016000 <p_space>
    7b55:	48 83 c4 08          	add    $0x8,%rsp
    7b59:	c3                   	ret    
    7b5a:	48 8d 0d 57 27 00 00 	lea    0x2757(%rip),%rcx        # a2b8 <__PRETTY_FUNCTION__.3>
    7b61:	ba 44 00 00 00       	mov    $0x44,%edx
    7b66:	48 8d 35 44 25 00 00 	lea    0x2544(%rip),%rsi        # a0b1 <__func__.0+0x9>
    7b6d:	48 8d 3d 51 25 00 00 	lea    0x2551(%rip),%rdi        # a0c5 <__func__.0+0x1d>
    7b74:	e8 87 a8 ff ff       	call   2400 <__assert_fail@plt>
    7b79:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000007b80 <map_read>:
    7b80:	f3 0f 1e fa          	endbr64 
    7b84:	8d 46 ff             	lea    -0x1(%rsi),%eax
    7b87:	41 54                	push   %r12
    7b89:	55                   	push   %rbp
    7b8a:	53                   	push   %rbx
    7b8b:	83 f8 03             	cmp    $0x3,%eax
    7b8e:	0f 87 70 01 00 00    	ja     7d04 <map_read+0x184>
    7b94:	41 89 fc             	mov    %edi,%r12d
    7b97:	48 89 d5             	mov    %rdx,%rbp
    7b9a:	48 85 d2             	test   %rdx,%rdx
    7b9d:	0f 84 ff 00 00 00    	je     7ca2 <map_read+0x122>
    7ba3:	89 f3                	mov    %esi,%ebx
    7ba5:	3b 7a 0c             	cmp    0xc(%rdx),%edi
    7ba8:	77 46                	ja     7bf0 <map_read+0x70>
    7baa:	8b 42 08             	mov    0x8(%rdx),%eax
    7bad:	39 c7                	cmp    %eax,%edi
    7baf:	72 3f                	jb     7bf0 <map_read+0x70>
    7bb1:	41 29 c4             	sub    %eax,%r12d
    7bb4:	48 8b 45 18          	mov    0x18(%rbp),%rax
    7bb8:	48 85 c0             	test   %rax,%rax
    7bbb:	74 09                	je     7bc6 <map_read+0x46>
    7bbd:	31 d2                	xor    %edx,%edx
    7bbf:	89 de                	mov    %ebx,%esi
    7bc1:	44 89 e7             	mov    %r12d,%edi
    7bc4:	ff d0                	call   *%rax
    7bc6:	4c 03 65 10          	add    0x10(%rbp),%r12
    7bca:	83 fb 02             	cmp    $0x2,%ebx
    7bcd:	0f 84 c5 00 00 00    	je     7c98 <map_read+0x118>
    7bd3:	83 fb 04             	cmp    $0x4,%ebx
    7bd6:	0f 84 ac 00 00 00    	je     7c88 <map_read+0x108>
    7bdc:	31 c0                	xor    %eax,%eax
    7bde:	83 fb 01             	cmp    $0x1,%ebx
    7be1:	0f 84 91 00 00 00    	je     7c78 <map_read+0xf8>
    7be7:	5b                   	pop    %rbx
    7be8:	5d                   	pop    %rbp
    7be9:	41 5c                	pop    %r12
    7beb:	c3                   	ret    
    7bec:	0f 1f 40 00          	nopl   0x0(%rax)
    7bf0:	48 8b 3d 09 74 00 00 	mov    0x7409(%rip),%rdi        # f000 <stdout@GLIBC_2.2.5>
    7bf7:	e8 04 a9 ff ff       	call   2500 <fflush@plt>
    7bfc:	8b 05 fe 89 00 00    	mov    0x89fe(%rip),%eax        # 10600 <cpu+0x80>
    7c02:	4c 8b 45 00          	mov    0x0(%rbp),%r8
    7c06:	48 8d 15 6b 25 00 00 	lea    0x256b(%rip),%rdx        # a178 <__func__.0+0xd0>
    7c0d:	48 8b 3d 2c 74 00 00 	mov    0x742c(%rip),%rdi        # f040 <stderr@GLIBC_2.2.5>
    7c14:	44 89 e1             	mov    %r12d,%ecx
    7c17:	be 01 00 00 00       	mov    $0x1,%esi
    7c1c:	50                   	push   %rax
    7c1d:	8b 45 0c             	mov    0xc(%rbp),%eax
    7c20:	50                   	push   %rax
    7c21:	44 8b 4d 08          	mov    0x8(%rbp),%r9d
    7c25:	31 c0                	xor    %eax,%eax
    7c27:	e8 d4 a9 ff ff       	call   2600 <__fprintf_chk@plt>
    7c2c:	48 8b 3d 35 d9 00 00 	mov    0xd935(%rip),%rdi        # 15568 <log_fp>
    7c33:	e8 c8 a8 ff ff       	call   2500 <fflush@plt>
    7c38:	31 c0                	xor    %eax,%eax
    7c3a:	e8 91 ce ff ff       	call   4ad0 <assert_fail_msg>
    7c3f:	58                   	pop    %rax
    7c40:	5a                   	pop    %rdx
    7c41:	44 3b 65 0c          	cmp    0xc(%rbp),%r12d
    7c45:	77 0c                	ja     7c53 <map_read+0xd3>
    7c47:	8b 45 08             	mov    0x8(%rbp),%eax
    7c4a:	41 39 c4             	cmp    %eax,%r12d
    7c4d:	0f 83 5e ff ff ff    	jae    7bb1 <map_read+0x31>
    7c53:	48 8d 0d 3e 26 00 00 	lea    0x263e(%rip),%rcx        # a298 <__PRETTY_FUNCTION__.1>
    7c5a:	ba 2a 00 00 00       	mov    $0x2a,%edx
    7c5f:	48 8d 35 4b 24 00 00 	lea    0x244b(%rip),%rsi        # a0b1 <__func__.0+0x9>
    7c66:	48 8d 3d 63 25 00 00 	lea    0x2563(%rip),%rdi        # a1d0 <__func__.0+0x128>
    7c6d:	e8 8e a7 ff ff       	call   2400 <__assert_fail@plt>
    7c72:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
    7c78:	41 0f b6 04 24       	movzbl (%r12),%eax
    7c7d:	5b                   	pop    %rbx
    7c7e:	5d                   	pop    %rbp
    7c7f:	41 5c                	pop    %r12
    7c81:	c3                   	ret    
    7c82:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
    7c88:	41 8b 04 24          	mov    (%r12),%eax
    7c8c:	5b                   	pop    %rbx
    7c8d:	5d                   	pop    %rbp
    7c8e:	41 5c                	pop    %r12
    7c90:	c3                   	ret    
    7c91:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    7c98:	41 0f b7 04 24       	movzwl (%r12),%eax
    7c9d:	5b                   	pop    %rbx
    7c9e:	5d                   	pop    %rbp
    7c9f:	41 5c                	pop    %r12
    7ca1:	c3                   	ret    
    7ca2:	48 8b 3d 57 73 00 00 	mov    0x7357(%rip),%rdi        # f000 <stdout@GLIBC_2.2.5>
    7ca9:	e8 52 a8 ff ff       	call   2500 <fflush@plt>
    7cae:	44 89 e1             	mov    %r12d,%ecx
    7cb1:	be 01 00 00 00       	mov    $0x1,%esi
    7cb6:	31 c0                	xor    %eax,%eax
    7cb8:	44 8b 05 41 89 00 00 	mov    0x8941(%rip),%r8d        # 10600 <cpu+0x80>
    7cbf:	48 8b 3d 7a 73 00 00 	mov    0x737a(%rip),%rdi        # f040 <stderr@GLIBC_2.2.5>
    7cc6:	48 8d 15 6b 24 00 00 	lea    0x246b(%rip),%rdx        # a138 <__func__.0+0x90>
    7ccd:	e8 2e a9 ff ff       	call   2600 <__fprintf_chk@plt>
    7cd2:	48 8b 3d 8f d8 00 00 	mov    0xd88f(%rip),%rdi        # 15568 <log_fp>
    7cd9:	e8 22 a8 ff ff       	call   2500 <fflush@plt>
    7cde:	31 c0                	xor    %eax,%eax
    7ce0:	e8 eb cd ff ff       	call   4ad0 <assert_fail_msg>
    7ce5:	48 8d 0d ac 25 00 00 	lea    0x25ac(%rip),%rcx        # a298 <__PRETTY_FUNCTION__.1>
    7cec:	ba 28 00 00 00       	mov    $0x28,%edx
    7cf1:	48 8d 35 b9 23 00 00 	lea    0x23b9(%rip),%rsi        # a0b1 <__func__.0+0x9>
    7cf8:	48 8d 3d e4 23 00 00 	lea    0x23e4(%rip),%rdi        # a0e3 <__func__.0+0x3b>
    7cff:	e8 fc a6 ff ff       	call   2400 <__assert_fail@plt>
    7d04:	48 8d 0d 9d 25 00 00 	lea    0x259d(%rip),%rcx        # a2a8 <__PRETTY_FUNCTION__.2>
    7d0b:	ba 49 00 00 00       	mov    $0x49,%edx
    7d10:	48 8d 35 9a 23 00 00 	lea    0x239a(%rip),%rsi        # a0b1 <__func__.0+0x9>
    7d17:	48 8d 3d b0 23 00 00 	lea    0x23b0(%rip),%rdi        # a0ce <__func__.0+0x26>
    7d1e:	e8 dd a6 ff ff       	call   2400 <__assert_fail@plt>
    7d23:	66 66 2e 0f 1f 84 00 	data16 cs nopw 0x0(%rax,%rax,1)
    7d2a:	00 00 00 00 
    7d2e:	66 90                	xchg   %ax,%ax

0000000000007d30 <sdb_map_read>:
    7d30:	f3 0f 1e fa          	endbr64 
    7d34:	53                   	push   %rbx
    7d35:	41 89 fa             	mov    %edi,%r10d
    7d38:	48 89 cb             	mov    %rcx,%rbx
    7d3b:	48 85 d2             	test   %rdx,%rdx
    7d3e:	74 50                	je     7d90 <sdb_map_read+0x60>
    7d40:	44 8b 4a 0c          	mov    0xc(%rdx),%r9d
    7d44:	44 8b 42 08          	mov    0x8(%rdx),%r8d
    7d48:	44 39 cf             	cmp    %r9d,%edi
    7d4b:	77 1b                	ja     7d68 <sdb_map_read+0x38>
    7d4d:	44 39 c7             	cmp    %r8d,%edi
    7d50:	72 16                	jb     7d68 <sdb_map_read+0x38>
    7d52:	48 8b 42 10          	mov    0x10(%rdx),%rax
    7d56:	45 29 c2             	sub    %r8d,%r10d
    7d59:	c6 01 01             	movb   $0x1,(%rcx)
    7d5c:	5b                   	pop    %rbx
    7d5d:	42 8b 04 10          	mov    (%rax,%r10,1),%eax
    7d61:	c3                   	ret    
    7d62:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
    7d68:	48 8b 0a             	mov    (%rdx),%rcx
    7d6b:	48 8d 35 b6 24 00 00 	lea    0x24b6(%rip),%rsi        # a228 <__func__.0+0x180>
    7d72:	44 89 d2             	mov    %r10d,%edx
    7d75:	31 c0                	xor    %eax,%eax
    7d77:	bf 01 00 00 00       	mov    $0x1,%edi
    7d7c:	e8 cf a5 ff ff       	call   2350 <__printf_chk@plt>
    7d81:	c6 03 00             	movb   $0x0,(%rbx)
    7d84:	31 c0                	xor    %eax,%eax
    7d86:	5b                   	pop    %rbx
    7d87:	c3                   	ret    
    7d88:	0f 1f 84 00 00 00 00 	nopl   0x0(%rax,%rax,1)
    7d8f:	00 
    7d90:	89 fa                	mov    %edi,%edx
    7d92:	48 8d 35 5f 24 00 00 	lea    0x245f(%rip),%rsi        # a1f8 <__func__.0+0x150>
    7d99:	bf 01 00 00 00       	mov    $0x1,%edi
    7d9e:	31 c0                	xor    %eax,%eax
    7da0:	e8 ab a5 ff ff       	call   2350 <__printf_chk@plt>
    7da5:	eb da                	jmp    7d81 <sdb_map_read+0x51>
    7da7:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
    7dae:	00 00 

0000000000007db0 <map_write>:
    7db0:	f3 0f 1e fa          	endbr64 
    7db4:	41 55                	push   %r13
    7db6:	8d 46 ff             	lea    -0x1(%rsi),%eax
    7db9:	41 54                	push   %r12
    7dbb:	55                   	push   %rbp
    7dbc:	53                   	push   %rbx
    7dbd:	48 83 ec 08          	sub    $0x8,%rsp
    7dc1:	83 f8 07             	cmp    $0x7,%eax
    7dc4:	0f 87 81 01 00 00    	ja     7f4b <map_write+0x19b>
    7dca:	41 89 fc             	mov    %edi,%r12d
    7dcd:	48 89 cb             	mov    %rcx,%rbx
    7dd0:	48 85 c9             	test   %rcx,%rcx
    7dd3:	0f 84 10 01 00 00    	je     7ee9 <map_write+0x139>
    7dd9:	89 f5                	mov    %esi,%ebp
    7ddb:	41 89 d5             	mov    %edx,%r13d
    7dde:	3b 79 0c             	cmp    0xc(%rcx),%edi
    7de1:	77 4d                	ja     7e30 <map_write+0x80>
    7de3:	8b 41 08             	mov    0x8(%rcx),%eax
    7de6:	39 c7                	cmp    %eax,%edi
    7de8:	72 46                	jb     7e30 <map_write+0x80>
    7dea:	44 89 e7             	mov    %r12d,%edi
    7ded:	29 c7                	sub    %eax,%edi
    7def:	89 f8                	mov    %edi,%eax
    7df1:	48 03 43 10          	add    0x10(%rbx),%rax
    7df5:	83 fd 02             	cmp    $0x2,%ebp
    7df8:	0f 84 e2 00 00 00    	je     7ee0 <map_write+0x130>
    7dfe:	83 fd 04             	cmp    $0x4,%ebp
    7e01:	0f 84 c9 00 00 00    	je     7ed0 <map_write+0x120>
    7e07:	83 fd 01             	cmp    $0x1,%ebp
    7e0a:	0f 84 b8 00 00 00    	je     7ec8 <map_write+0x118>
    7e10:	48 8b 43 18          	mov    0x18(%rbx),%rax
    7e14:	48 85 c0             	test   %rax,%rax
    7e17:	0f 84 9b 00 00 00    	je     7eb8 <map_write+0x108>
    7e1d:	48 83 c4 08          	add    $0x8,%rsp
    7e21:	89 ee                	mov    %ebp,%esi
    7e23:	ba 01 00 00 00       	mov    $0x1,%edx
    7e28:	5b                   	pop    %rbx
    7e29:	5d                   	pop    %rbp
    7e2a:	41 5c                	pop    %r12
    7e2c:	41 5d                	pop    %r13
    7e2e:	ff e0                	jmp    *%rax
    7e30:	48 8b 3d c9 71 00 00 	mov    0x71c9(%rip),%rdi        # f000 <stdout@GLIBC_2.2.5>
    7e37:	e8 c4 a6 ff ff       	call   2500 <fflush@plt>
    7e3c:	8b 05 be 87 00 00    	mov    0x87be(%rip),%eax        # 10600 <cpu+0x80>
    7e42:	44 89 e1             	mov    %r12d,%ecx
    7e45:	be 01 00 00 00       	mov    $0x1,%esi
    7e4a:	48 8b 3d ef 71 00 00 	mov    0x71ef(%rip),%rdi        # f040 <stderr@GLIBC_2.2.5>
    7e51:	48 8d 15 20 23 00 00 	lea    0x2320(%rip),%rdx        # a178 <__func__.0+0xd0>
    7e58:	50                   	push   %rax
    7e59:	8b 43 0c             	mov    0xc(%rbx),%eax
    7e5c:	50                   	push   %rax
    7e5d:	44 8b 4b 08          	mov    0x8(%rbx),%r9d
    7e61:	31 c0                	xor    %eax,%eax
    7e63:	4c 8b 03             	mov    (%rbx),%r8
    7e66:	e8 95 a7 ff ff       	call   2600 <__fprintf_chk@plt>
    7e6b:	48 8b 3d f6 d6 00 00 	mov    0xd6f6(%rip),%rdi        # 15568 <log_fp>
    7e72:	e8 89 a6 ff ff       	call   2500 <fflush@plt>
    7e77:	31 c0                	xor    %eax,%eax
    7e79:	e8 52 cc ff ff       	call   4ad0 <assert_fail_msg>
    7e7e:	58                   	pop    %rax
    7e7f:	5a                   	pop    %rdx
    7e80:	44 3b 63 0c          	cmp    0xc(%rbx),%r12d
    7e84:	77 0c                	ja     7e92 <map_write+0xe2>
    7e86:	8b 43 08             	mov    0x8(%rbx),%eax
    7e89:	41 39 c4             	cmp    %eax,%r12d
    7e8c:	0f 83 58 ff ff ff    	jae    7dea <map_write+0x3a>
    7e92:	48 8d 0d ff 23 00 00 	lea    0x23ff(%rip),%rcx        # a298 <__PRETTY_FUNCTION__.1>
    7e99:	ba 2a 00 00 00       	mov    $0x2a,%edx
    7e9e:	48 8d 35 0c 22 00 00 	lea    0x220c(%rip),%rsi        # a0b1 <__func__.0+0x9>
    7ea5:	48 8d 3d 24 23 00 00 	lea    0x2324(%rip),%rdi        # a1d0 <__func__.0+0x128>
    7eac:	e8 4f a5 ff ff       	call   2400 <__assert_fail@plt>
    7eb1:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    7eb8:	48 83 c4 08          	add    $0x8,%rsp
    7ebc:	5b                   	pop    %rbx
    7ebd:	5d                   	pop    %rbp
    7ebe:	41 5c                	pop    %r12
    7ec0:	41 5d                	pop    %r13
    7ec2:	c3                   	ret    
    7ec3:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
    7ec8:	44 88 28             	mov    %r13b,(%rax)
    7ecb:	e9 40 ff ff ff       	jmp    7e10 <map_write+0x60>
    7ed0:	44 89 28             	mov    %r13d,(%rax)
    7ed3:	e9 38 ff ff ff       	jmp    7e10 <map_write+0x60>
    7ed8:	0f 1f 84 00 00 00 00 	nopl   0x0(%rax,%rax,1)
    7edf:	00 
    7ee0:	66 44 89 28          	mov    %r13w,(%rax)
    7ee4:	e9 27 ff ff ff       	jmp    7e10 <map_write+0x60>
    7ee9:	48 8b 3d 10 71 00 00 	mov    0x7110(%rip),%rdi        # f000 <stdout@GLIBC_2.2.5>
    7ef0:	e8 0b a6 ff ff       	call   2500 <fflush@plt>
    7ef5:	44 89 e1             	mov    %r12d,%ecx
    7ef8:	be 01 00 00 00       	mov    $0x1,%esi
    7efd:	31 c0                	xor    %eax,%eax
    7eff:	44 8b 05 fa 86 00 00 	mov    0x86fa(%rip),%r8d        # 10600 <cpu+0x80>
    7f06:	48 8b 3d 33 71 00 00 	mov    0x7133(%rip),%rdi        # f040 <stderr@GLIBC_2.2.5>
    7f0d:	48 8d 15 24 22 00 00 	lea    0x2224(%rip),%rdx        # a138 <__func__.0+0x90>
    7f14:	e8 e7 a6 ff ff       	call   2600 <__fprintf_chk@plt>
    7f19:	48 8b 3d 48 d6 00 00 	mov    0xd648(%rip),%rdi        # 15568 <log_fp>
    7f20:	e8 db a5 ff ff       	call   2500 <fflush@plt>
    7f25:	31 c0                	xor    %eax,%eax
    7f27:	e8 a4 cb ff ff       	call   4ad0 <assert_fail_msg>
    7f2c:	48 8d 0d 65 23 00 00 	lea    0x2365(%rip),%rcx        # a298 <__PRETTY_FUNCTION__.1>
    7f33:	ba 28 00 00 00       	mov    $0x28,%edx
    7f38:	48 8d 35 72 21 00 00 	lea    0x2172(%rip),%rsi        # a0b1 <__func__.0+0x9>
    7f3f:	48 8d 3d 9d 21 00 00 	lea    0x219d(%rip),%rdi        # a0e3 <__func__.0+0x3b>
    7f46:	e8 b5 a4 ff ff       	call   2400 <__assert_fail@plt>
    7f4b:	48 8d 0d 36 23 00 00 	lea    0x2336(%rip),%rcx        # a288 <__PRETTY_FUNCTION__.0>
    7f52:	ba 5d 00 00 00       	mov    $0x5d,%edx
    7f57:	48 8d 35 53 21 00 00 	lea    0x2153(%rip),%rsi        # a0b1 <__func__.0+0x9>
    7f5e:	48 8d 3d 91 21 00 00 	lea    0x2191(%rip),%rdi        # a0f6 <__func__.0+0x4e>
    7f65:	e8 96 a4 ff ff       	call   2400 <__assert_fail@plt>
    7f6a:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

0000000000007f70 <report_mmio_overlap>:
    7f70:	41 57                	push   %r15
    7f72:	45 89 cf             	mov    %r9d,%r15d
    7f75:	41 56                	push   %r14
    7f77:	45 89 c6             	mov    %r8d,%r14d
    7f7a:	41 55                	push   %r13
    7f7c:	49 89 cd             	mov    %rcx,%r13
    7f7f:	41 54                	push   %r12
    7f81:	49 89 fc             	mov    %rdi,%r12
    7f84:	55                   	push   %rbp
    7f85:	89 d5                	mov    %edx,%ebp
    7f87:	53                   	push   %rbx
    7f88:	89 f3                	mov    %esi,%ebx
    7f8a:	48 83 ec 08          	sub    $0x8,%rsp
    7f8e:	48 8b 3d 6b 70 00 00 	mov    0x706b(%rip),%rdi        # f000 <stdout@GLIBC_2.2.5>
    7f95:	e8 66 a5 ff ff       	call   2500 <fflush@plt>
    7f9a:	48 83 ec 08          	sub    $0x8,%rsp
    7f9e:	4c 89 e1             	mov    %r12,%rcx
    7fa1:	41 89 e9             	mov    %ebp,%r9d
    7fa4:	41 57                	push   %r15
    7fa6:	48 8b 3d 93 70 00 00 	mov    0x7093(%rip),%rdi        # f040 <stderr@GLIBC_2.2.5>
    7fad:	be 01 00 00 00       	mov    $0x1,%esi
    7fb2:	31 c0                	xor    %eax,%eax
    7fb4:	41 56                	push   %r14
    7fb6:	48 8d 15 1b 23 00 00 	lea    0x231b(%rip),%rdx        # a2d8 <__PRETTY_FUNCTION__.4+0x10>
    7fbd:	41 89 d8             	mov    %ebx,%r8d
    7fc0:	41 55                	push   %r13
    7fc2:	e8 39 a6 ff ff       	call   2600 <__fprintf_chk@plt>
    7fc7:	48 8b 3d 9a d5 00 00 	mov    0xd59a(%rip),%rdi        # 15568 <log_fp>
    7fce:	48 83 c4 20          	add    $0x20,%rsp
    7fd2:	e8 29 a5 ff ff       	call   2500 <fflush@plt>
    7fd7:	31 c0                	xor    %eax,%eax
    7fd9:	e8 f2 ca ff ff       	call   4ad0 <assert_fail_msg>
    7fde:	48 8d 0d fb 23 00 00 	lea    0x23fb(%rip),%rcx        # a3e0 <__PRETTY_FUNCTION__.0>
    7fe5:	ba 1f 00 00 00       	mov    $0x1f,%edx
    7fea:	48 8d 35 c1 23 00 00 	lea    0x23c1(%rip),%rsi        # a3b2 <__PRETTY_FUNCTION__.4+0xea>
    7ff1:	48 8d 3d 38 10 00 00 	lea    0x1038(%rip),%rdi        # 9030 <_IO_stdin_used+0x30>
    7ff8:	e8 03 a4 ff ff       	call   2400 <__assert_fail@plt>
    7ffd:	0f 1f 00             	nopl   (%rax)

0000000000008000 <add_mmio_map>:
    8000:	f3 0f 1e fa          	endbr64 
    8004:	41 55                	push   %r13
    8006:	41 89 f2             	mov    %esi,%r10d
    8009:	41 54                	push   %r12
    800b:	55                   	push   %rbp
    800c:	53                   	push   %rbx
    800d:	48 83 ec 08          	sub    $0x8,%rsp
    8011:	48 63 35 08 e0 00 08 	movslq 0x800e008(%rip),%rsi        # 8016020 <nr_map>
    8018:	83 fe 0f             	cmp    $0xf,%esi
    801b:	0f 8f 7c 01 00 00    	jg     819d <add_mmio_map+0x19d>
    8021:	41 8d 04 0a          	lea    (%r10,%rcx,1),%eax
    8025:	49 89 d1             	mov    %rdx,%r9
    8028:	66 41 0f 6e c2       	movd   %r10d,%xmm0
    802d:	44 8d 60 ff          	lea    -0x1(%rax),%r12d
    8031:	41 8d 92 00 00 00 e4 	lea    -0x1c000000(%r10),%edx
    8038:	66 41 0f 6e cc       	movd   %r12d,%xmm1
    803d:	66 0f 62 c1          	punpckldq %xmm1,%xmm0
    8041:	81 fa ff ff ff 07    	cmp    $0x7ffffff,%edx
    8047:	0f 86 32 01 00 00    	jbe    817f <add_mmio_map+0x17f>
    804d:	2d 01 00 00 1c       	sub    $0x1c000001,%eax
    8052:	3d ff ff ff 07       	cmp    $0x7ffffff,%eax
    8057:	0f 86 22 01 00 00    	jbe    817f <add_mmio_map+0x17f>
    805d:	48 8d 2d e4 df 00 08 	lea    0x800dfe4(%rip),%rbp        # 8016048 <maps+0x8>
    8064:	31 d2                	xor    %edx,%edx
    8066:	48 89 e8             	mov    %rbp,%rax
    8069:	85 f6                	test   %esi,%esi
    806b:	7e 22                	jle    808f <add_mmio_map+0x8f>
    806d:	0f 1f 00             	nopl   (%rax)
    8070:	8b 48 04             	mov    0x4(%rax),%ecx
    8073:	44 39 d1             	cmp    %r10d,%ecx
    8076:	72 0c                	jb     8084 <add_mmio_map+0x84>
    8078:	44 8b 18             	mov    (%rax),%r11d
    807b:	45 39 e3             	cmp    %r12d,%r11d
    807e:	0f 86 d8 00 00 00    	jbe    815c <add_mmio_map+0x15c>
    8084:	83 c2 01             	add    $0x1,%edx
    8087:	48 83 c0 20          	add    $0x20,%rax
    808b:	39 d6                	cmp    %edx,%esi
    808d:	75 e1                	jne    8070 <add_mmio_map+0x70>
    808f:	48 c1 e6 05          	shl    $0x5,%rsi
    8093:	48 8d 1d a6 df 00 08 	lea    0x800dfa6(%rip),%rbx        # 8016040 <maps>
    809a:	b9 32 00 00 00       	mov    $0x32,%ecx
    809f:	48 8d 04 33          	lea    (%rbx,%rsi,1),%rax
    80a3:	4c 8d 2d 08 23 00 00 	lea    0x2308(%rip),%r13        # a3b2 <__PRETTY_FUNCTION__.4+0xea>
    80aa:	48 89 38             	mov    %rdi,(%rax)
    80ad:	4c 89 ea             	mov    %r13,%rdx
    80b0:	66 0f d6 44 35 00    	movq   %xmm0,0x0(%rbp,%rsi,1)
    80b6:	4c 89 48 10          	mov    %r9,0x10(%rax)
    80ba:	49 89 f9             	mov    %rdi,%r9
    80bd:	bf 01 00 00 00       	mov    $0x1,%edi
    80c2:	4c 89 40 18          	mov    %r8,0x18(%rax)
    80c6:	4c 8d 05 2b 23 00 00 	lea    0x232b(%rip),%r8        # a3f8 <__func__.1>
    80cd:	31 c0                	xor    %eax,%eax
    80cf:	41 54                	push   %r12
    80d1:	4c 8d 25 58 22 00 00 	lea    0x2258(%rip),%r12        # a330 <__PRETTY_FUNCTION__.4+0x68>
    80d8:	41 52                	push   %r10
    80da:	4c 89 e6             	mov    %r12,%rsi
    80dd:	e8 6e a2 ff ff       	call   2350 <__printf_chk@plt>
    80e2:	31 c0                	xor    %eax,%eax
    80e4:	e8 27 f7 ff ff       	call   7810 <log_enable>
    80e9:	5a                   	pop    %rdx
    80ea:	59                   	pop    %rcx
    80eb:	84 c0                	test   %al,%al
    80ed:	75 19                	jne    8108 <add_mmio_map+0x108>
    80ef:	83 05 2a df 00 08 01 	addl   $0x1,0x800df2a(%rip)        # 8016020 <nr_map>
    80f6:	48 83 c4 08          	add    $0x8,%rsp
    80fa:	5b                   	pop    %rbx
    80fb:	5d                   	pop    %rbp
    80fc:	41 5c                	pop    %r12
    80fe:	41 5d                	pop    %r13
    8100:	c3                   	ret    
    8101:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    8108:	48 83 ec 08          	sub    $0x8,%rsp
    810c:	41 b8 32 00 00 00    	mov    $0x32,%r8d
    8112:	4c 89 e9             	mov    %r13,%rcx
    8115:	4c 89 e2             	mov    %r12,%rdx
    8118:	48 63 05 01 df 00 08 	movslq 0x800df01(%rip),%rax        # 8016020 <nr_map>
    811f:	48 8b 3d 42 d4 00 00 	mov    0xd442(%rip),%rdi        # 15568 <log_fp>
    8126:	be 01 00 00 00       	mov    $0x1,%esi
    812b:	4c 8d 0d c6 22 00 00 	lea    0x22c6(%rip),%r9        # a3f8 <__func__.1>
    8132:	48 c1 e0 05          	shl    $0x5,%rax
    8136:	48 01 c3             	add    %rax,%rbx
    8139:	8b 43 0c             	mov    0xc(%rbx),%eax
    813c:	50                   	push   %rax
    813d:	8b 43 08             	mov    0x8(%rbx),%eax
    8140:	50                   	push   %rax
    8141:	31 c0                	xor    %eax,%eax
    8143:	ff 33                	push   (%rbx)
    8145:	e8 b6 a4 ff ff       	call   2600 <__fprintf_chk@plt>
    814a:	48 8b 3d 17 d4 00 00 	mov    0xd417(%rip),%rdi        # 15568 <log_fp>
    8151:	48 83 c4 20          	add    $0x20,%rsp
    8155:	e8 a6 a3 ff ff       	call   2500 <fflush@plt>
    815a:	eb 93                	jmp    80ef <add_mmio_map+0xef>
    815c:	48 63 c2             	movslq %edx,%rax
    815f:	48 8d 15 da de 00 08 	lea    0x800deda(%rip),%rdx        # 8016040 <maps>
    8166:	41 89 c9             	mov    %ecx,%r9d
    8169:	45 89 d8             	mov    %r11d,%r8d
    816c:	48 c1 e0 05          	shl    $0x5,%rax
    8170:	44 89 d6             	mov    %r10d,%esi
    8173:	48 8b 0c 02          	mov    (%rdx,%rax,1),%rcx
    8177:	44 89 e2             	mov    %r12d,%edx
    817a:	e8 f1 fd ff ff       	call   7f70 <report_mmio_overlap>
    817f:	41 b9 ff ff ff 23    	mov    $0x23ffffff,%r9d
    8185:	41 b8 00 00 00 1c    	mov    $0x1c000000,%r8d
    818b:	44 89 e2             	mov    %r12d,%edx
    818e:	44 89 d6             	mov    %r10d,%esi
    8191:	48 8d 0d 3f 22 00 00 	lea    0x223f(%rip),%rcx        # a3d7 <__PRETTY_FUNCTION__.4+0x10f>
    8198:	e8 d3 fd ff ff       	call   7f70 <report_mmio_overlap>
    819d:	48 8d 0d 64 22 00 00 	lea    0x2264(%rip),%rcx        # a408 <__PRETTY_FUNCTION__.2>
    81a4:	ba 25 00 00 00       	mov    $0x25,%edx
    81a9:	48 8d 35 02 22 00 00 	lea    0x2202(%rip),%rsi        # a3b2 <__PRETTY_FUNCTION__.4+0xea>
    81b0:	48 8d 3d 10 22 00 00 	lea    0x2210(%rip),%rdi        # a3c7 <__PRETTY_FUNCTION__.4+0xff>
    81b7:	e8 44 a2 ff ff       	call   2400 <__assert_fail@plt>
    81bc:	0f 1f 40 00          	nopl   0x0(%rax)

00000000000081c0 <display_mmio_map>:
    81c0:	f3 0f 1e fa          	endbr64 
    81c4:	8b 05 56 de 00 08    	mov    0x800de56(%rip),%eax        # 8016020 <nr_map>
    81ca:	85 c0                	test   %eax,%eax
    81cc:	7e 4a                	jle    8218 <display_mmio_map+0x58>
    81ce:	41 54                	push   %r12
    81d0:	4c 8d 25 99 21 00 00 	lea    0x2199(%rip),%r12        # a370 <__PRETTY_FUNCTION__.4+0xa8>
    81d7:	55                   	push   %rbp
    81d8:	31 ed                	xor    %ebp,%ebp
    81da:	53                   	push   %rbx
    81db:	48 8d 1d 5e de 00 08 	lea    0x800de5e(%rip),%rbx        # 8016040 <maps>
    81e2:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
    81e8:	8b 4b 08             	mov    0x8(%rbx),%ecx
    81eb:	44 8b 43 0c          	mov    0xc(%rbx),%r8d
    81ef:	31 c0                	xor    %eax,%eax
    81f1:	4c 89 e6             	mov    %r12,%rsi
    81f4:	48 8b 13             	mov    (%rbx),%rdx
    81f7:	bf 01 00 00 00       	mov    $0x1,%edi
    81fc:	83 c5 01             	add    $0x1,%ebp
    81ff:	48 83 c3 20          	add    $0x20,%rbx
    8203:	e8 48 a1 ff ff       	call   2350 <__printf_chk@plt>
    8208:	39 2d 12 de 00 08    	cmp    %ebp,0x800de12(%rip)        # 8016020 <nr_map>
    820e:	7f d8                	jg     81e8 <display_mmio_map+0x28>
    8210:	5b                   	pop    %rbx
    8211:	5d                   	pop    %rbp
    8212:	41 5c                	pop    %r12
    8214:	c3                   	ret    
    8215:	0f 1f 00             	nopl   (%rax)
    8218:	c3                   	ret    
    8219:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000008220 <mmio_read>:
    8220:	f3 0f 1e fa          	endbr64 
    8224:	8b 15 f6 dd 00 08    	mov    0x800ddf6(%rip),%edx        # 8016020 <nr_map>
    822a:	85 d2                	test   %edx,%edx
    822c:	7e 3b                	jle    8269 <mmio_read+0x49>
    822e:	48 8d 05 0b de 00 08 	lea    0x800de0b(%rip),%rax        # 8016040 <maps>
    8235:	83 ea 01             	sub    $0x1,%edx
    8238:	48 c1 e2 05          	shl    $0x5,%rdx
    823c:	48 8d 48 20          	lea    0x20(%rax),%rcx
    8240:	48 01 ca             	add    %rcx,%rdx
    8243:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
    8248:	49 89 c0             	mov    %rax,%r8
    824b:	3b 78 08             	cmp    0x8(%rax),%edi
    824e:	72 10                	jb     8260 <mmio_read+0x40>
    8250:	3b 78 0c             	cmp    0xc(%rax),%edi
    8253:	77 0b                	ja     8260 <mmio_read+0x40>
    8255:	4c 89 c2             	mov    %r8,%rdx
    8258:	e9 23 f9 ff ff       	jmp    7b80 <map_read>
    825d:	0f 1f 00             	nopl   (%rax)
    8260:	48 83 c0 20          	add    $0x20,%rax
    8264:	48 39 c2             	cmp    %rax,%rdx
    8267:	75 df                	jne    8248 <mmio_read+0x28>
    8269:	45 31 c0             	xor    %r8d,%r8d
    826c:	4c 89 c2             	mov    %r8,%rdx
    826f:	e9 0c f9 ff ff       	jmp    7b80 <map_read>
    8274:	66 66 2e 0f 1f 84 00 	data16 cs nopw 0x0(%rax,%rax,1)
    827b:	00 00 00 00 
    827f:	90                   	nop

0000000000008280 <sdb_mmio_read>:
    8280:	f3 0f 1e fa          	endbr64 
    8284:	48 89 d1             	mov    %rdx,%rcx
    8287:	8b 15 93 dd 00 08    	mov    0x800dd93(%rip),%edx        # 8016020 <nr_map>
    828d:	85 d2                	test   %edx,%edx
    828f:	7e 40                	jle    82d1 <sdb_mmio_read+0x51>
    8291:	44 8d 42 ff          	lea    -0x1(%rdx),%r8d
    8295:	48 8d 05 a4 dd 00 08 	lea    0x800dda4(%rip),%rax        # 8016040 <maps>
    829c:	49 c1 e0 05          	shl    $0x5,%r8
    82a0:	48 8d 50 20          	lea    0x20(%rax),%rdx
    82a4:	49 01 d0             	add    %rdx,%r8
    82a7:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
    82ae:	00 00 
    82b0:	48 89 c2             	mov    %rax,%rdx
    82b3:	3b 78 08             	cmp    0x8(%rax),%edi
    82b6:	72 10                	jb     82c8 <sdb_mmio_read+0x48>
    82b8:	3b 78 0c             	cmp    0xc(%rax),%edi
    82bb:	77 0b                	ja     82c8 <sdb_mmio_read+0x48>
    82bd:	e9 6e fa ff ff       	jmp    7d30 <sdb_map_read>
    82c2:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
    82c8:	48 83 c0 20          	add    $0x20,%rax
    82cc:	49 39 c0             	cmp    %rax,%r8
    82cf:	75 df                	jne    82b0 <sdb_mmio_read+0x30>
    82d1:	31 d2                	xor    %edx,%edx
    82d3:	e9 58 fa ff ff       	jmp    7d30 <sdb_map_read>
    82d8:	0f 1f 84 00 00 00 00 	nopl   0x0(%rax,%rax,1)
    82df:	00 

00000000000082e0 <mmio_write>:
    82e0:	f3 0f 1e fa          	endbr64 
    82e4:	8b 0d 36 dd 00 08    	mov    0x800dd36(%rip),%ecx        # 8016020 <nr_map>
    82ea:	85 c9                	test   %ecx,%ecx
    82ec:	7e 3b                	jle    8329 <mmio_write+0x49>
    82ee:	48 8d 05 4b dd 00 08 	lea    0x800dd4b(%rip),%rax        # 8016040 <maps>
    82f5:	83 e9 01             	sub    $0x1,%ecx
    82f8:	48 c1 e1 05          	shl    $0x5,%rcx
    82fc:	4c 8d 40 20          	lea    0x20(%rax),%r8
    8300:	4c 01 c1             	add    %r8,%rcx
    8303:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
    8308:	49 89 c0             	mov    %rax,%r8
    830b:	3b 78 08             	cmp    0x8(%rax),%edi
    830e:	72 10                	jb     8320 <mmio_write+0x40>
    8310:	3b 78 0c             	cmp    0xc(%rax),%edi
    8313:	77 0b                	ja     8320 <mmio_write+0x40>
    8315:	4c 89 c1             	mov    %r8,%rcx
    8318:	e9 93 fa ff ff       	jmp    7db0 <map_write>
    831d:	0f 1f 00             	nopl   (%rax)
    8320:	48 83 c0 20          	add    $0x20,%rax
    8324:	48 39 c1             	cmp    %rax,%rcx
    8327:	75 df                	jne    8308 <mmio_write+0x28>
    8329:	45 31 c0             	xor    %r8d,%r8d
    832c:	4c 89 c1             	mov    %r8,%rcx
    832f:	e9 7c fa ff ff       	jmp    7db0 <map_write>
    8334:	66 2e 0f 1f 84 00 00 	cs nopw 0x0(%rax,%rax,1)
    833b:	00 00 00 
    833e:	66 90                	xchg   %ax,%ax

0000000000008340 <add_pio_map>:
    8340:	f3 0f 1e fa          	endbr64 
    8344:	48 63 05 f5 de 00 08 	movslq 0x800def5(%rip),%rax        # 8016240 <nr_map>
    834b:	41 55                	push   %r13
    834d:	41 54                	push   %r12
    834f:	53                   	push   %rbx
    8350:	83 f8 0f             	cmp    $0xf,%eax
    8353:	0f 8f 0d 01 00 00    	jg     8466 <add_pio_map+0x126>
    8359:	0f b7 f6             	movzwl %si,%esi
    835c:	01 f1                	add    %esi,%ecx
    835e:	81 f9 ff ff 00 00    	cmp    $0xffff,%ecx
    8364:	0f 87 dd 00 00 00    	ja     8447 <add_pio_map+0x107>
    836a:	83 e9 01             	sub    $0x1,%ecx
    836d:	48 c1 e0 05          	shl    $0x5,%rax
    8371:	66 0f 6e c6          	movd   %esi,%xmm0
    8375:	49 89 f9             	mov    %rdi,%r9
    8378:	66 0f 6e c9          	movd   %ecx,%xmm1
    837c:	48 8d 1d dd de 00 08 	lea    0x800dedd(%rip),%rbx        # 8016260 <maps>
    8383:	4c 8d 2d 8b 20 00 00 	lea    0x208b(%rip),%r13        # a415 <__PRETTY_FUNCTION__.2+0xd>
    838a:	48 8d 3c 03          	lea    (%rbx,%rax,1),%rdi
    838e:	66 0f 62 c1          	punpckldq %xmm1,%xmm0
    8392:	4c 8d 25 c7 20 00 00 	lea    0x20c7(%rip),%r12        # a460 <__PRETTY_FUNCTION__.2+0x58>
    8399:	4c 89 0f             	mov    %r9,(%rdi)
    839c:	66 0f d6 44 18 08    	movq   %xmm0,0x8(%rax,%rbx,1)
    83a2:	31 c0                	xor    %eax,%eax
    83a4:	48 89 57 10          	mov    %rdx,0x10(%rdi)
    83a8:	4c 89 ea             	mov    %r13,%rdx
    83ab:	4c 89 47 18          	mov    %r8,0x18(%rdi)
    83af:	4c 8d 05 32 21 00 00 	lea    0x2132(%rip),%r8        # a4e8 <__func__.2>
    83b6:	bf 01 00 00 00       	mov    $0x1,%edi
    83bb:	51                   	push   %rcx
    83bc:	b9 1e 00 00 00       	mov    $0x1e,%ecx
    83c1:	56                   	push   %rsi
    83c2:	4c 89 e6             	mov    %r12,%rsi
    83c5:	e8 86 9f ff ff       	call   2350 <__printf_chk@plt>
    83ca:	31 c0                	xor    %eax,%eax
    83cc:	e8 3f f4 ff ff       	call   7810 <log_enable>
    83d1:	5a                   	pop    %rdx
    83d2:	59                   	pop    %rcx
    83d3:	84 c0                	test   %al,%al
    83d5:	75 11                	jne    83e8 <add_pio_map+0xa8>
    83d7:	5b                   	pop    %rbx
    83d8:	83 05 61 de 00 08 01 	addl   $0x1,0x800de61(%rip)        # 8016240 <nr_map>
    83df:	41 5c                	pop    %r12
    83e1:	41 5d                	pop    %r13
    83e3:	c3                   	ret    
    83e4:	0f 1f 40 00          	nopl   0x0(%rax)
    83e8:	48 83 ec 08          	sub    $0x8,%rsp
    83ec:	4c 89 e9             	mov    %r13,%rcx
    83ef:	4c 89 e2             	mov    %r12,%rdx
    83f2:	41 b8 1e 00 00 00    	mov    $0x1e,%r8d
    83f8:	48 63 05 41 de 00 08 	movslq 0x800de41(%rip),%rax        # 8016240 <nr_map>
    83ff:	48 8b 3d 62 d1 00 00 	mov    0xd162(%rip),%rdi        # 15568 <log_fp>
    8406:	be 01 00 00 00       	mov    $0x1,%esi
    840b:	4c 8d 0d d6 20 00 00 	lea    0x20d6(%rip),%r9        # a4e8 <__func__.2>
    8412:	48 c1 e0 05          	shl    $0x5,%rax
    8416:	48 01 c3             	add    %rax,%rbx
    8419:	8b 43 0c             	mov    0xc(%rbx),%eax
    841c:	50                   	push   %rax
    841d:	8b 43 08             	mov    0x8(%rbx),%eax
    8420:	50                   	push   %rax
    8421:	31 c0                	xor    %eax,%eax
    8423:	ff 33                	push   (%rbx)
    8425:	e8 d6 a1 ff ff       	call   2600 <__fprintf_chk@plt>
    842a:	48 8b 3d 37 d1 00 00 	mov    0xd137(%rip),%rdi        # 15568 <log_fp>
    8431:	48 83 c4 20          	add    $0x20,%rsp
    8435:	e8 c6 a0 ff ff       	call   2500 <fflush@plt>
    843a:	5b                   	pop    %rbx
    843b:	83 05 fe dd 00 08 01 	addl   $0x1,0x800ddfe(%rip)        # 8016240 <nr_map>
    8442:	41 5c                	pop    %r12
    8444:	41 5d                	pop    %r13
    8446:	c3                   	ret    
    8447:	48 8d 0d aa 20 00 00 	lea    0x20aa(%rip),%rcx        # a4f8 <__PRETTY_FUNCTION__.3>
    844e:	ba 1b 00 00 00       	mov    $0x1b,%edx
    8453:	48 8d 35 bb 1f 00 00 	lea    0x1fbb(%rip),%rsi        # a415 <__PRETTY_FUNCTION__.2+0xd>
    845a:	48 8d 3d df 1f 00 00 	lea    0x1fdf(%rip),%rdi        # a440 <__PRETTY_FUNCTION__.2+0x38>
    8461:	e8 9a 9f ff ff       	call   2400 <__assert_fail@plt>
    8466:	48 8d 0d 8b 20 00 00 	lea    0x208b(%rip),%rcx        # a4f8 <__PRETTY_FUNCTION__.3>
    846d:	ba 1a 00 00 00       	mov    $0x1a,%edx
    8472:	48 8d 35 9c 1f 00 00 	lea    0x1f9c(%rip),%rsi        # a415 <__PRETTY_FUNCTION__.2+0xd>
    8479:	48 8d 3d 47 1f 00 00 	lea    0x1f47(%rip),%rdi        # a3c7 <__PRETTY_FUNCTION__.4+0xff>
    8480:	e8 7b 9f ff ff       	call   2400 <__assert_fail@plt>
    8485:	66 66 2e 0f 1f 84 00 	data16 cs nopw 0x0(%rax,%rax,1)
    848c:	00 00 00 00 

0000000000008490 <pio_read>:
    8490:	f3 0f 1e fa          	endbr64 
    8494:	0f b7 ff             	movzwl %di,%edi
    8497:	48 83 ec 08          	sub    $0x8,%rsp
    849b:	8d 04 37             	lea    (%rdi,%rsi,1),%eax
    849e:	3d ff ff 00 00       	cmp    $0xffff,%eax
    84a3:	7f 63                	jg     8508 <pio_read+0x78>
    84a5:	8b 05 95 dd 00 08    	mov    0x800dd95(%rip),%eax        # 8016240 <nr_map>
    84ab:	85 c0                	test   %eax,%eax
    84ad:	7e 3a                	jle    84e9 <pio_read+0x59>
    84af:	48 8d 15 aa dd 00 08 	lea    0x800ddaa(%rip),%rdx        # 8016260 <maps>
    84b6:	83 e8 01             	sub    $0x1,%eax
    84b9:	48 c1 e0 05          	shl    $0x5,%rax
    84bd:	48 8d 4a 20          	lea    0x20(%rdx),%rcx
    84c1:	48 01 c8             	add    %rcx,%rax
    84c4:	0f 1f 40 00          	nopl   0x0(%rax)
    84c8:	3b 7a 08             	cmp    0x8(%rdx),%edi
    84cb:	72 13                	jb     84e0 <pio_read+0x50>
    84cd:	3b 7a 0c             	cmp    0xc(%rdx),%edi
    84d0:	77 0e                	ja     84e0 <pio_read+0x50>
    84d2:	48 83 c4 08          	add    $0x8,%rsp
    84d6:	e9 a5 f6 ff ff       	jmp    7b80 <map_read>
    84db:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
    84e0:	48 83 c2 20          	add    $0x20,%rdx
    84e4:	48 39 d0             	cmp    %rdx,%rax
    84e7:	75 df                	jne    84c8 <pio_read+0x38>
    84e9:	48 8d 0d e8 1f 00 00 	lea    0x1fe8(%rip),%rcx        # a4d8 <__PRETTY_FUNCTION__.1>
    84f0:	ba 28 00 00 00       	mov    $0x28,%edx
    84f5:	48 8d 35 19 1f 00 00 	lea    0x1f19(%rip),%rsi        # a415 <__PRETTY_FUNCTION__.2+0xd>
    84fc:	48 8d 3d 2a 1f 00 00 	lea    0x1f2a(%rip),%rdi        # a42d <__PRETTY_FUNCTION__.2+0x25>
    8503:	e8 f8 9e ff ff       	call   2400 <__assert_fail@plt>
    8508:	48 8d 0d c9 1f 00 00 	lea    0x1fc9(%rip),%rcx        # a4d8 <__PRETTY_FUNCTION__.1>
    850f:	ba 26 00 00 00       	mov    $0x26,%edx
    8514:	48 8d 35 fa 1e 00 00 	lea    0x1efa(%rip),%rsi        # a415 <__PRETTY_FUNCTION__.2+0xd>
    851b:	48 8d 3d 7e 1f 00 00 	lea    0x1f7e(%rip),%rdi        # a4a0 <__PRETTY_FUNCTION__.2+0x98>
    8522:	e8 d9 9e ff ff       	call   2400 <__assert_fail@plt>
    8527:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
    852e:	00 00 

0000000000008530 <pio_write>:
    8530:	f3 0f 1e fa          	endbr64 
    8534:	0f b7 ff             	movzwl %di,%edi
    8537:	48 83 ec 08          	sub    $0x8,%rsp
    853b:	8d 04 37             	lea    (%rdi,%rsi,1),%eax
    853e:	3d ff ff 00 00       	cmp    $0xffff,%eax
    8543:	7f 63                	jg     85a8 <pio_write+0x78>
    8545:	8b 05 f5 dc 00 08    	mov    0x800dcf5(%rip),%eax        # 8016240 <nr_map>
    854b:	85 c0                	test   %eax,%eax
    854d:	7e 3a                	jle    8589 <pio_write+0x59>
    854f:	48 8d 0d 0a dd 00 08 	lea    0x800dd0a(%rip),%rcx        # 8016260 <maps>
    8556:	83 e8 01             	sub    $0x1,%eax
    8559:	48 c1 e0 05          	shl    $0x5,%rax
    855d:	4c 8d 41 20          	lea    0x20(%rcx),%r8
    8561:	4c 01 c0             	add    %r8,%rax
    8564:	0f 1f 40 00          	nopl   0x0(%rax)
    8568:	3b 79 08             	cmp    0x8(%rcx),%edi
    856b:	72 13                	jb     8580 <pio_write+0x50>
    856d:	3b 79 0c             	cmp    0xc(%rcx),%edi
    8570:	77 0e                	ja     8580 <pio_write+0x50>
    8572:	48 83 c4 08          	add    $0x8,%rsp
    8576:	e9 35 f8 ff ff       	jmp    7db0 <map_write>
    857b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
    8580:	48 83 c1 20          	add    $0x20,%rcx
    8584:	48 39 c8             	cmp    %rcx,%rax
    8587:	75 df                	jne    8568 <pio_write+0x38>
    8589:	48 8d 0d 38 1f 00 00 	lea    0x1f38(%rip),%rcx        # a4c8 <__PRETTY_FUNCTION__.0>
    8590:	ba 2f 00 00 00       	mov    $0x2f,%edx
    8595:	48 8d 35 79 1e 00 00 	lea    0x1e79(%rip),%rsi        # a415 <__PRETTY_FUNCTION__.2+0xd>
    859c:	48 8d 3d 8a 1e 00 00 	lea    0x1e8a(%rip),%rdi        # a42d <__PRETTY_FUNCTION__.2+0x25>
    85a3:	e8 58 9e ff ff       	call   2400 <__assert_fail@plt>
    85a8:	48 8d 0d 19 1f 00 00 	lea    0x1f19(%rip),%rcx        # a4c8 <__PRETTY_FUNCTION__.0>
    85af:	ba 2d 00 00 00       	mov    $0x2d,%edx
    85b4:	48 8d 35 5a 1e 00 00 	lea    0x1e5a(%rip),%rsi        # a415 <__PRETTY_FUNCTION__.2+0xd>
    85bb:	48 8d 3d de 1e 00 00 	lea    0x1ede(%rip),%rdi        # a4a0 <__PRETTY_FUNCTION__.2+0x98>
    85c2:	e8 39 9e ff ff       	call   2400 <__assert_fail@plt>
    85c7:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
    85ce:	00 00 

00000000000085d0 <engine_start>:
    85d0:	f3 0f 1e fa          	endbr64 
    85d4:	31 c0                	xor    %eax,%eax
    85d6:	e9 d5 d0 ff ff       	jmp    56b0 <sdb_mainloop>
    85db:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000085e0 <set_nemu_state>:
    85e0:	f3 0f 1e fa          	endbr64 
    85e4:	66 0f 6e c6          	movd   %esi,%xmm0
    85e8:	66 0f 6e ca          	movd   %edx,%xmm1
    85ec:	89 3d 46 5b 00 00    	mov    %edi,0x5b46(%rip)        # e138 <nemu_state>
    85f2:	66 0f 62 c1          	punpckldq %xmm1,%xmm0
    85f6:	66 0f d6 05 3e 5b 00 	movq   %xmm0,0x5b3e(%rip)        # e13c <nemu_state+0x4>
    85fd:	00 
    85fe:	c3                   	ret    
    85ff:	90                   	nop

0000000000008600 <invalid_inst>:
    8600:	f3 0f 1e fa          	endbr64 
    8604:	55                   	push   %rbp
    8605:	be 04 00 00 00       	mov    $0x4,%esi
    860a:	89 fd                	mov    %edi,%ebp
    860c:	53                   	push   %rbx
    860d:	48 83 ec 08          	sub    $0x8,%rsp
    8611:	e8 2a f2 ff ff       	call   7840 <vaddr_ifetch>
    8616:	8d 7d 04             	lea    0x4(%rbp),%edi
    8619:	be 04 00 00 00       	mov    $0x4,%esi
    861e:	89 c3                	mov    %eax,%ebx
    8620:	e8 1b f2 ff ff       	call   7840 <vaddr_ifetch>
    8625:	48 83 ec 08          	sub    $0x8,%rsp
    8629:	0f b6 cf             	movzbl %bh,%ecx
    862c:	41 89 d9             	mov    %ebx,%r9d
    862f:	89 c2                	mov    %eax,%edx
    8631:	50                   	push   %rax
    8632:	41 89 c8             	mov    %ecx,%r8d
    8635:	0f b6 cb             	movzbl %bl,%ecx
    8638:	c1 ea 18             	shr    $0x18,%edx
    863b:	53                   	push   %rbx
    863c:	c1 eb 18             	shr    $0x18,%ebx
    863f:	48 8d 35 c2 1e 00 00 	lea    0x1ec2(%rip),%rsi        # a508 <__PRETTY_FUNCTION__.3+0x10>
    8646:	52                   	push   %rdx
    8647:	89 c2                	mov    %eax,%edx
    8649:	41 c1 e9 10          	shr    $0x10,%r9d
    864d:	bf 01 00 00 00       	mov    $0x1,%edi
    8652:	c1 ea 10             	shr    $0x10,%edx
    8655:	45 0f b6 c9          	movzbl %r9b,%r9d
    8659:	0f b6 d2             	movzbl %dl,%edx
    865c:	52                   	push   %rdx
    865d:	0f b6 d4             	movzbl %ah,%edx
    8660:	0f b6 c0             	movzbl %al,%eax
    8663:	52                   	push   %rdx
    8664:	89 ea                	mov    %ebp,%edx
    8666:	50                   	push   %rax
    8667:	31 c0                	xor    %eax,%eax
    8669:	53                   	push   %rbx
    866a:	e8 e1 9c ff ff       	call   2350 <__printf_chk@plt>
    866f:	48 83 c4 40          	add    $0x40,%rsp
    8673:	89 ea                	mov    %ebp,%edx
    8675:	bf 01 00 00 00       	mov    $0x1,%edi
    867a:	48 8d 35 e7 1e 00 00 	lea    0x1ee7(%rip),%rsi        # a568 <__PRETTY_FUNCTION__.3+0x70>
    8681:	31 c0                	xor    %eax,%eax
    8683:	e8 c8 9c ff ff       	call   2350 <__printf_chk@plt>
    8688:	89 ea                	mov    %ebp,%edx
    868a:	48 8d 35 7f 1f 00 00 	lea    0x1f7f(%rip),%rsi        # a610 <__PRETTY_FUNCTION__.3+0x118>
    8691:	31 c0                	xor    %eax,%eax
    8693:	bf 01 00 00 00       	mov    $0x1,%edi
    8698:	e8 b3 9c ff ff       	call   2350 <__printf_chk@plt>
    869d:	48 8d 15 7c 5a 00 00 	lea    0x5a7c(%rip),%rdx        # e120 <isa_logo>
    86a4:	48 8d 35 bd 1f 00 00 	lea    0x1fbd(%rip),%rsi        # a668 <__PRETTY_FUNCTION__.3+0x170>
    86ab:	31 c0                	xor    %eax,%eax
    86ad:	bf 01 00 00 00       	mov    $0x1,%edi
    86b2:	e8 99 9c ff ff       	call   2350 <__printf_chk@plt>
    86b7:	89 2d 7f 5a 00 00    	mov    %ebp,0x5a7f(%rip)        # e13c <nemu_state+0x4>
    86bd:	c7 05 71 5a 00 00 03 	movl   $0x3,0x5a71(%rip)        # e138 <nemu_state>
    86c4:	00 00 00 
    86c7:	c7 05 6f 5a 00 00 ff 	movl   $0xffffffff,0x5a6f(%rip)        # e140 <nemu_state+0x8>
    86ce:	ff ff ff 
    86d1:	48 83 c4 08          	add    $0x8,%rsp
    86d5:	5b                   	pop    %rbx
    86d6:	5d                   	pop    %rbp
    86d7:	c3                   	ret    

Disassembly of section .fini:

00000000000086d8 <_fini>:
    86d8:	f3 0f 1e fa          	endbr64 
    86dc:	48 83 ec 08          	sub    $0x8,%rsp
    86e0:	48 83 c4 08          	add    $0x8,%rsp
    86e4:	c3                   	ret    
