// 函数: sub_4e3d4f
// 地址: 0x4e3d4f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
int32_t ebx = 0
uint16_t ecx = 0
int32_t i = 1
void var_26
void* result = arg3 - &var_26

do
    void var_28
    uint32_t esi_2
    esi_2.w = *(&var_28 + result + (i << 1)) + ecx
    ecx = (esi_2 << 1).w
    *(&var_28 + (i << 1)) = ecx
    i += 1
while (i s<= 0xf)

if (arg2 s>= 0)
    do
        uint32_t i_1 = zx.d(*(arg1 + (ebx << 2) + 2))
        
        if (i_1 != 0)
            int32_t __saved_ebp
            int16_t ecx_1 = *(&__saved_ebp + (i_1 << 1) - 0x24)
            uint32_t esi_4 = zx.d(ecx_1)
            *(&__saved_ebp + (i_1 << 1) - 0x24) = ecx_1 + 1
            int32_t eax_2 = 0
            
            do
                int32_t eax_3 = eax_2 | (esi_4 & 1)
                esi_4 u>>= 1
                eax_2 = eax_3 << 1
                i_1 -= 1
            while (i_1 s> 0)
            
            result = eax_2 u>> 1
            *(arg1 + (ebx << 2)) = result.w
        
        ebx += 1
    while (ebx s<= arg2)

sub_745f2b(__security_cookie_1)
return result
