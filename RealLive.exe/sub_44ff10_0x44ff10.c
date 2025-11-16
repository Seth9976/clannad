// 函数: sub_44ff10
// 地址: 0x44ff10
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

bool c
*(arg4 + 0x3599eec1) = rlc.b(*(arg4 + 0x3599eec1), arg3.b, c)
int16_t es
uint32_t var_4 = zx.d(es)
uint32_t* esp = &var_4
*(arg1 - 0x1c270f54)
int32_t temp1 = *arg6
bool c_2 = arg1 u< temp1
bool p = unimplemented  {scasd dword [edi]}
bool a = unimplemented  {scasd dword [edi]}
bool z = arg1 == temp1
bool s = arg1 - temp1 s< 0
void* edi = &arg6[1]
void* entry_ebx

while (true)
    arg1:1.b =
        (s ? 1 : 0) << 7 | (z ? 1 : 0) << 6 | (a ? 1 : 0) << 4 | (p ? 1 : 0) << 2 | (c_2 ? 1 : 0)
    bool d
    
    if (d)
        *edi = *arg5
        edi -= 4
        arg5 -= 4
    else
        *edi = *arg5
        edi += 4
        arg5 += 4
    
    d = test_bit(*esp, 0xa)
    *(esp + 1) = arg5
    *(esp - 3) = arg5
    esp -= 3
    arg3 -= 1
    
    if ((arg1 & 0xc2719d7b) == 0 || arg3 == 0)
        break
    
    arg1.b = sbb.b(arg1.b, 0xdb, false)
    bool c_1 = unimplemented  {sbb al, 0xdb}
    *(entry_ebx - 1)
    *(entry_ebx - 1) = (esp[arg5 * 2]).b
    int32_t eflags
    char temp0_2
    temp0_2, eflags = __daa(arg1.b, eflags)
    arg1.b = temp0_2
    arg7 = float.t(*(arg4 + 0x5ea2d341)) / arg7
    int32_t temp3_1 = *(adc.d(arg1, 0x7ab7415, c_1) - 0x50c61854)
    c_2 = false
    p = unimplemented  {test dword [eax-0x50c61854], esp}
    a = undefined
    z = (temp3_1 & esp) == 0
    s = (temp3_1 & esp) s< 0

char temp4 = *(arg4 - 0x7c116a60)
bool c_3 = entry_ebx:1.b u< temp4

if (entry_ebx:1.b - temp4 s< 0)
    *(arg3 - 0x193b8ac) = rrc.b(*(arg3 - 0x193b8ac), arg3.b, c_3)
    undefined

*esp

if (entry_ebx:1.b != temp4 && not(c_3))
    jump(0x44ff98)

jump(0x44fff5)
