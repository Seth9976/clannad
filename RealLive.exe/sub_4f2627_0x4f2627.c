// 函数: sub_4f2627
// 地址: 0x4f2627
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

arg7 f- arg9
int16_t top = 1
int16_t ds
bool o

if (o)
    uint32_t var_4 = zx.d(ds)
    bool c_1 = unimplemented  {shr edi, cl}
    *(arg5 - 0x2fd0da88)
    
    if (arg6 u>> arg3 == 0 || c_1)
        return sub_4f2617(arg3, arg2, arg6 u>> arg3.b) __tailcall
    
    return sub_4f2637() __tailcall

void* edx = arg2 + 1
void** eax = arg1 ^ 0x1066a
int32_t esp

while (true)
    *(esp - 4) = eax
    *(esp - 8) = arg3
    *(esp - 0xc) = edx
    uint864_t* entry_ebx
    *(esp - 0x10) = entry_ebx
    *(esp - 0x14) = esp - 0x10
    *(esp - 0x18) = arg4
    *(esp - 0x1c) = arg5
    *(esp - 0x20) = arg6
    *arg5 u>>= 1
    entry_ebx += 1
    *arg6
    void*** edi_3 = &arg6[4]
    char temp2_1 = eax.b
    eax.b -= 0x28
    int32_t eflags
    void* esi = __outsb((edx + 1).w, *arg5, arg5, eflags)
    
    if (temp2_1 == 0x28 || temp2_1 u>= 0x28)
        break
    
    top -= 1
    unimplemented  {fild st0, word [0xa019a42]}
    *(esi - 0x4de19045) s>>= 1
    char temp0_1
    temp0_1, eflags = __daa(eax.b, eflags)
    eax.b = temp0_1
    edx.b = (edx + 1).b | eax[-0xd52d65d].b
    void** temp0_2 = arg4
    arg4 = eax
    eax = temp0_2
    arg5 = 0x5b6010c2
    *edi_3 = eax
    uint8_t* edi_2
    uint8_t temp0_3
    temp0_3, edi_2 = __insb(&edi_3[1], edx.w, eflags)
    *edi_2 = temp0_3
    __frstor_memmem108(*(entry_ebx + edx))
    *(esp - 0x24) = arg4
    uint8_t temp0_4
    temp0_4, arg6 = __insb(edi_2, edx.w, eflags)
    *arg6 = temp0_4
    *(edx + 0x35) -= eax
    *(esp - 0x28) = 6
    esp -= 0x28
    *eax += eax

*(esp - 0x24) = zx.d(ds)
eax.b &= 0x2f
*(eax + 0x20cfe077) <<= 1
undefined
