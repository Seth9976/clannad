// 函数: sub_65db30
// 地址: 0x65db30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebp
int32_t var_4 = ebp
int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c4c3b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t eax_2 = __security_cookie ^ &var_4
int32_t var_14 = eax_2
int32_t ebx
int32_t var_1a8 = ebx
int32_t esi
int32_t var_1ac = esi
int32_t edi
int32_t var_1b0 = edi
int32_t var_1b4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
*(data_bac4a0 + 0x248) = 0
int32_t* ebp_1 = sub_62fa60(esi, edi)
int32_t eax_6 = sub_6980b0(data_bac45c, data_bac4a0 + 0xac)
char result

if (eax_6 s>= 0)
    void* var_18_4 = 0xf
    ebp_1[-5] = 7
    void* const var_1c_1 = &data_af8124
    ebp_1[-6] = 0
    ebp_1[-0xa].w = 0
    sub_52e720(&ebp_1[-0xa], var_1c_1, var_18_4)
    ebp_1[-1] = 1
    sub_684160(data_bac424, 5, &ebp_1[-0xa])
    ebp_1[-1] = 0xffffffff
    
    if (ebp_1[-5] u>= 8)
        j__free(ebp_1[-0xa])
    
    void* edx_2 = data_bac45c
    ebp_1[-0xa].w = 0
    void* eax_9 = data_bac4a0
    ebp_1[-5] = 7
    ebp_1[-6] = 0
    int32_t edi_1 = *(eax_9 + 0xc4)
    
    if (edi_1 u<= 0x3e7)
        *(edx_2 + 0x64) = eax_6
        void* ecx_6 = eax_6 * 0x54 + *(edx_2 + 0x54)
        *(edx_2 + 0x60) = *(ecx_6 + 8) + *(*(ecx_6 + 0x10) + (edi_1 << 2))
    
    sub_676610(1)
    sub_54aed0(&ebp_1[-0x66])
    ebp_1[-1] = 2
    ebp_1[-0x66] = 0x2d
    ebp_1[-0x15] = 0
    void var_16c
    sub_54cf80(&var_16c, &ebp_1[-0x66])
    sub_6766e0()
    sub_54ae40(&ebp_1[-0x43])
    result = 1
else
    sub_676610(0)
    int16_t* eax_7 = sub_532b80(0, data_bac4a0 + 0xac, &ebp_1[-0x10], &data_af80c4)
    ebp_1[-1] = 0
    ebx.b = sub_684160(data_bac424, 9, eax_7)
    
    if (ebp_1[-0xb] u>= 8)
        j__free(ebp_1[-0x10])
    
    result = ebx.b

fsbase->NtTib.ExceptionList = ebp_1[-3]
sub_745f2b(ebp_1[-4] ^ ebp_1)
*ebp_1
return result
