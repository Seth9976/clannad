// 函数: sub_4c40ad
// 地址: 0x4c40ad
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

*(arg1 - 0x4fd75a45)
void* const __return_addr_1 = __return_addr
int32_t* esi = arg3
void* edx = arg6
void arg_20
void* esp = &arg_20
void* ecx
ecx:1.b = 0x41
*(edx + 0x40758b20) = fconvert.s(arg2)
void* eax_1
eax_1:1.b = *(ecx - 0x29)

while (true)
    eax_1:1.b = 0xe7
    *(esp - 4) = ecx - 1
    *0x80c1c35e = eax_1.b
    
    if (not(add_overflow(ecx, 0xffffffff)))
        break
    
    __return_addr_1 = *(esp - 4)
    esi = *esp
    *(esp + 4)
    void* ebx_1 = *(esp + 0xc)
    edx = *(esp + 0x10)
    ecx = *(esp + 0x14)
    eax_1 = *(esp + 0x18)
    esp += 0x1c
    eax_1.b = *(ebx_1 + eax_1)

*__return_addr_1
void* ecx_1
ecx_1:1.b = 0x88
eax_1.b = edx.b - 1
*esi = ror.d(*esi, 0xb5)
undefined
