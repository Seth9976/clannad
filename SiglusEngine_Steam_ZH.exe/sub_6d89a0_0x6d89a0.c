// 函数: sub_6d89a0
// 地址: 0x6d89a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t esi = *arg4
*(arg3 + 0x84) = arg2
int32_t ebx = *arg6
int32_t ecx_1 = arg5
*(arg3 + 0x88) = 0
*(arg3 + 0x94) = 0

if (ecx_1 != 0)
    *(arg3 + 0x90) = ecx_1

do
    int32_t esi_1 = esi + *(arg3 + 0x88)
    int32_t eax_3 = 0xffffffff
    
    if (esi_1 u< 0xffffffff)
        eax_3 = esi_1
    
    int32_t ebx_1 = ebx + *(arg3 + 0x94)
    esi = esi_1 - eax_3
    *(arg3 + 0x88) = eax_3
    int32_t eax_4 = 0xffffffff
    
    if (ecx_1 == 0)
        void var_408
        *(arg3 + 0x90) = &var_408
        eax_4 = 0x400
    
    if (ebx_1 u< eax_4)
        eax_4 = ebx_1
    
    ebx = ebx_1 - eax_4
    *(arg3 + 0x94) = eax_4
    ecx_1 = arg5
    arg2 = sub_724e00(arg3 + 0x84, (sbb.d(arg2, arg2, 0 u< ebx) & 0xfffffffc) + 4)
while (arg2 == 0)

if (ecx_1 == 0)
    *(arg3 + 0x90) = ecx_1

int32_t esi_2 = esi + *(arg3 + 0x88)

if (ebx != neg.d(*(arg3 + 0x94)))
    *arg6 -= ebx + *(arg3 + 0x94)

if (esi_2 != 0)
    *arg4 -= esi_2

sub_6cb6b0(arg3, arg2)
sub_745f2b(eax_1 ^ &__saved_ebp)
return arg2
