// 函数: sub_496a9f
// 地址: 0x496a9f
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int16_t es = __return_addr.w
void* esp = &__return_addr:2
void* entry_ebx
int32_t eax = *(entry_ebx - 0x541c27d9)
int32_t eflags
__out_dx_al(arg2.w, eax.b, eflags)
bool z

if (not(z) && arg1 == 1)
    int32_t eax_1 = eax ^ 0x515041ff
    arg2.b |= eax_1.b
    char temp0_1 = *(entry_ebx - 3)
    *(entry_ebx - 3) = arg2.b
    arg2.b = temp0_1
    bool p = unimplemented  {sbb esp, edi}
    *(sbb.d(&__return_addr:3, arg4, false) - 4) = zx.d(es)
    
    if (p)
        arg2 = *(arg1 + 0x5435c7b9)
    
    eax_1.b &= 0x10
    *(arg4 + 7) &= 0x8b
    *0xf5d9d827 = eax_1
    *arg2 += 0xa
    undefined

char temp1_1 = arg2[0x60]
arg2[0x60] += (arg1 - 1):1.b
bool c = temp1_1 + (arg1 - 1):1.b u< temp1_1
bool o = add_overflow(temp1_1, (arg1 - 1):1.b)

while (not(o))
    void* eax_2
    arg2:eax_2 = sx.q(eax)
    *(arg3 - 0x7f89476b) = fconvert.d(unimplemented  {fst qword [ebp-0x7f89476b], st0})
    *(arg1 - 1) = rol.d(*(arg1 - 1), 1)
    *(eax_2 + 0x13) = arg3
    *esp
    int32_t eflags_1
    char temp0_2
    temp0_2, eflags_1 = __daa(eax_2.b, eflags)
    eax_2.b = temp0_2
    unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1}
    unimplemented  {fcomp st0, st1}
    int16_t top = top + 1
    int32_t ds
    *(ds + entry_ebx + 0x40280148)
    c = false
    o = false
    arg3 = eax_2
    char temp0_4
    char temp1
    temp0_4, temp1, eflags = __aam_immb(0, entry_ebx.b)
    eax.b = temp0_4
    eax:1.b = temp1
    *(esp - 2) = 0x60
    esp -= 2

entry_ebx:1.b = adc.b(entry_ebx:1.b, (arg1 - 1).b, c)
int32_t eflags_2
char temp0_5
temp0_5, eflags_2 = __daa(eax.b, eflags)
eax.b = temp0_5
unimplemented  {fadd dword [edx]}
*esp
*arg2 = es
undefined
