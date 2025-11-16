// 函数: sub_6f68e0
// 地址: 0x6f68e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cd8c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t ebx
int32_t var_18 = ebx
int32_t esi
int32_t var_1c = esi
int32_t edi
int32_t var_20 = edi
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_3 = *arg1
*arg1 = 0

if (eax_3 != 0)
    (*(*eax_3 + 8))(eax_3)

_memset(&arg1[0x56], 0, 0x38)
void* edi_1 = &arg1[0x64]
_memset(edi_1, 0, 0x38)
arg1[0x79] = arg2
arg1[0x7c] = arg3
arg1[0x7d] = arg4
arg1[0x54] = arg6
int32_t eax_8
eax_8.b = arg8
arg1[0x74].b = 0
arg1[0x7a].b = 1
arg1[0x7b] = 0
arg1[0x7e] = 0
arg1[0x7f] = 0x3f800000
*(arg1 + 0x1d2) = eax_8.b
*(arg1 + 0x1d3) = 0
int32_t* eax_9 = data_4ebee38
int32_t ebx_1 = arg5

if (ebx_1 s< 0 || ebx_1 s>= (*(*eax_9 + 0x10))(eax_9, eax_2))
    ebx_1 = 0

arg1[1] = ebx_1
int32_t* ecx_1 = data_4ebee38
int32_t eax_12 = (*(*ecx_1 + 0x20))(ecx_1, ebx_1, &arg1[2])

if (eax_12 s>= 0)
    _memset(&arg1[0x56], 0, 0x38)
    _memset(edi_1, 0, 0x38)
    arg1[0x63] = arg7
    int32_t eax_16 = arg1[0x79]
    arg1[0x59] = 1
    arg1[0x58] = 0x16
    arg1[0x5c] = 1
    arg1[0x5f] = 1
    arg1[0x60] = 0x4b
    arg1[0x5a] = 0
    int128_t xmm0_1 = *(arg1 + 0x158)
    arg1[0x72] = 0x16
    arg1[0x73] = 0x16
    *edi_1 = xmm0_1
    *(edi_1 + 0x10) = *(arg1 + 0x168)
    *(edi_1 + 0x20) = *(arg1 + 0x178)
    *(edi_1 + 0x30) = *(arg1 + 0x188)
    arg1[0x5e] = 1
    arg1[0x5d] = eax_16
    arg1[0x6c] = 0
    
    if (sub_6f6ca0(arg1) != 0 && sub_6f6d50(arg1) != 0)
        if (arg1[0x7a].b != 0)
            edi_1 = &arg1[0x56]
        
        arg1[0x55] = edi_1
        
        if (sub_6f7db0(arg1) != 0)
            int32_t* eax_17 = *arg1
            arg1[0x53] = (*(*eax_17 + 0x10))(eax_17)
            int32_t* eax_19 = arg1[0x55]
            bool result = sub_6f6c00(arg1, 0, 0, *eax_19, eax_19[1]) != 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
else
    void var_4c
    arg8.d = &var_4c
    sub_52e820(&var_4c, u"GetAdapterDisplayMode")
    int32_t var_8_1 = 0
    void var_64
    int16_t* eax_13
    int32_t edx_3
    eax_13, edx_3 = sub_52e820(&var_64, 0xb07160)
    int32_t var_8_2 = 0xffffffff
    sub_6f1ae0(eax_13, edx_3, eax_12)

fsbase->NtTib.ExceptionList = ExceptionList
return false
