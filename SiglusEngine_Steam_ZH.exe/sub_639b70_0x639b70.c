// 函数: sub_639b70
// 地址: 0x639b70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c248e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
void* result = *(arg1 + 0x1a48)

if (result != 0)
    result = j__free(result)
    *(arg1 + 0x1a48) = 0
    *(arg1 + 0x1a4c) = 0
    *(arg1 + 0x1a50) = 0

*(arg1 + 0x19e4) = &NT3::C_d3d_render_interface::`vftable'
*(arg1 + 0x19f8) = 0
*(arg1 + 0x19cc) = &NT3::C_d3d_render_interface::`vftable'
*(arg1 + 0x19e0) = 0
void* ecx = *(arg1 + 0x18f0)

if (ecx != 0)
    void* var_28_2 = arg1
    void* var_2c_1 = ecx
    sub_579a70(ecx, *(arg1 + 0x18f4))
    result = j__free(*(arg1 + 0x18f0))
    *(arg1 + 0x18f0) = 0
    *(arg1 + 0x18f4) = 0
    *(arg1 + 0x18f8) = 0

int32_t* edi = *(arg1 + 0x18ec)

if (edi != 0)
    bool cond:0_1 = edi[1] != 1
    result = edi[1]
    edi[1] -= 1
    
    if (not(cond:0_1))
        (*(*edi + 4))(eax_2)
        result = &edi[2]
        int32_t ebx_1 = *result
        *result -= 1
        
        if (ebx_1 == 1)
            result = (*(*edi + 8))()

int32_t var_8_2 = 0xffffffff
int32_t* ecx_4 = *(arg1 + 0x98)

if (ecx_4 != 0)
    result = (*(*ecx_4 + 8))(ecx_4)

fsbase->NtTib.ExceptionList = ExceptionList
return result
