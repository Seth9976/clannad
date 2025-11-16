// 函数: sub_6fb6e0
// 地址: 0x6fb6e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9ce109
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t edi
int32_t var_50 = edi
int32_t eax_2 = __security_cookie ^ &var_50
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_34 = 0
int32_t var_c_1 = 0
int32_t ebx = 1
char var_3d_1
void var_28

if (*sub_6f7ff0(arg2, &var_28) == 0)
    var_3d_1 = 1
else
    ebx = 3
    var_3d_1 = 0
    void var_30
    
    if (*sub_6f8020(arg2, &var_30) == 0)
        var_3d_1 = 1

if ((ebx.b & 2) != 0)
    ebx &= 0xfffffffd
    int32_t var_34_1 = ebx
    int32_t* var_2c
    
    if (var_2c != 0)
        bool cond:0_1 = var_2c[1] != 1
        var_2c[1]
        var_2c[1] -= 1
        
        if (not(cond:0_1))
            (*(*var_2c + 4))(eax_2)
            bool cond:2_1 = var_2c[2] != 1
            var_2c[2]
            var_2c[2] -= 1
            
            if (not(cond:2_1))
                (*(*var_2c + 8))()

int32_t var_c_2 = 0xffffffff
int32_t* var_24

if ((ebx.b & 1) != 0 && var_24 != 0)
    bool cond:1_1 = var_24[1] != 1
    var_24[1]
    var_24[1] -= 1
    
    if (not(cond:1_1))
        (*(*var_24 + 4))(eax_2)
        bool cond:3_1 = var_24[2] != 1
        var_24[2]
        var_24[2] -= 1
        
        if (not(cond:3_1))
            (*(*var_24 + 8))()

if (var_3d_1 != 0)
    int32_t* eax_3
    eax_3.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

int32_t var_38
int32_t* var_58_2 = &var_38
void* eax_8 = *arg1
var_38 = 0

if ((*(eax_8 + 0x14))(arg2, arg3, var_58_2) != 0)
    int32_t* esi_3 = data_4ebe4b0
    int32_t* eax_11 = sub_6f7ff0(arg2, &var_28)
    int32_t var_c_3 = 1
    void* edx_3 = *(arg2 + 0xa4)
    int32_t edx_4
    
    if (edx_3 == 0)
        edx_4 = 0
    else
        edx_4 = *(edx_3 + 0xc)
    
    (*(*esi_3 + 0x190))(esi_3, 0, **eax_11, 0, edx_4)
    int32_t var_c_4 = 0xffffffff
    
    if (var_24 != 0)
        bool cond:4_1 = var_24[1] != 1
        var_24[1]
        var_24[1] -= 1
        
        if (not(cond:4_1))
            (*(*var_24 + 4))(eax_2)
            bool cond:6_1 = var_24[2] != 1
            var_24[2]
            var_24[2] -= 1
            
            if (not(cond:6_1))
                (*(*var_24 + 8))()
    
    int32_t* esi_5 = data_4ebe4b0
    int32_t var_c_5 = 2
    void var_20
    (*(*esi_5 + 0x1a0))(esi_5, **sub_6f8020(arg2, &var_20))
    int32_t var_c_6 = 0xffffffff
    int32_t* var_1c
    
    if (var_1c != 0)
        bool cond:5_1 = var_1c[1] != 1
        var_1c[1]
        var_1c[1] -= 1
        
        if (not(cond:5_1))
            (*(*var_1c + 4))(eax_2)
            int32_t edi_2 = var_1c[2]
            var_1c[2] -= 1
            
            if (edi_2 == 1)
                (*(*var_1c + 8))()
    
    void* eax_23 = *(arg2 + 0xa4)
    int32_t* edx_6 = data_4ebe4b0
    int32_t ecx_21
    
    if (eax_23 == 0)
        ecx_21 = 0
    else
        ecx_21 = *(eax_23 + 8)
    
    (*(*edx_6 + 0x164))(edx_6, ecx_21)
    int32_t* ecx_22 = data_4ebe4b0
    int32_t var_5c_4 = *(arg2 + 0xbc)
    int32_t eax_25 = *ecx_22
    int32_t var_64_2 = *(arg2 + 0xb4)
    int32_t var_68_2 = 0
    int32_t var_6c = 4
    int32_t eax_26 = (*(eax_25 + 0x148))(ecx_22, var_6c, var_68_2, var_64_2, arg4, var_5c_4, arg5)
    
    if (eax_26 s>= 0)
        bool eax_30 = (*(*arg1 + 0x28))(arg2, var_38, eax_2) != 0
        fsbase->NtTib.ExceptionList = var_1c
        return eax_30
    
    int16_t* eax_27
    int32_t edx_7
    eax_27, edx_7 = sub_52e820(&var_6c, u"DrawIndexedPrimitive")
    sub_6f1a40(eax_27, edx_7, eax_26, var_6c)

fsbase->NtTib.ExceptionList = ExceptionList
return 0
