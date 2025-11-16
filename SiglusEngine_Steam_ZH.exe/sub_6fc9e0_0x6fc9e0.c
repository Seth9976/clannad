// 函数: sub_6fc9e0
// 地址: 0x6fc9e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9ce358
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t esi
int32_t var_34 = esi
void* edi
void* var_38 = edi
int32_t eax_2 = __security_cookie ^ &var_38
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = *arg1
int32_t* esi_1 = *(ecx + (arg2 << 3) + 4)
int32_t* edx = *(ecx + (arg2 << 3))
int32_t* var_20 = edx
int32_t* var_1c = esi_1

if (esi_1 != 0)
    esi_1[1]
    esi_1[1] += 1

int32_t var_c_1 = 0
void* edi_1 = *(arg1[0xd] + 0x44)
int32_t* eax_6 = *edx
void* var_2c = edi_1
(*(*eax_6 + 0x18))(eax_6, eax_2)
int32_t ecx_3 = *(edi_1 + 0x38)

if (ecx_3 == *(edi_1 + 0x3c))
    ecx_3 = 0

void* entry_ebx
int32_t eax_8 = (*(*arg3 + 0xa0))(arg3, "mWorldMatrixArray", ecx_3, *(entry_ebx + 0x34))
int32_t var_3c_1 = eax_8
int32_t result
int32_t* ebx
void var_80
void var_68

if (eax_8 s>= 0)
    int32_t eax_12 = (*(*arg3 + 0x98))(arg3, "mWorld", arg1[0xd] + 0x50)
    var_3c_1 = eax_12
    
    if (eax_12 s< 0)
        var_38 = &var_68
        sub_52e820(&var_68, u"SetMatrix")
        var_20.b = 2
        goto label_6fca9b
    
    int32_t* eax_15 = (*(*arg3 + 0x98))(arg3, "mLocal", arg1[0xd] + 4)
    
    if (eax_15 s>= 0)
        result = (*(*arg3 + 0x68))(arg3, "CurNumBones", eax_6[0xa])
        
        if (result s>= 0)
            ebx.b = 1
        else
            var_38 = &var_68
            sub_52e820(&var_68, u"SetInt")
            var_20.b = 4
            int16_t* eax_18
            int32_t edx_4
            eax_18, edx_4 = sub_52e820(&var_80, &data_b07ddc)
            var_20.b = 0
            sub_6f1ae0(eax_18, edx_4, result)
            ebx.b = 0
    else
        var_38 = &var_68
        sub_52e820(&var_68, u"SetMatrix")
        var_20.b = 3
        int16_t* eax_16
        int32_t edx_3
        eax_16, edx_3 = sub_52e820(&var_80, &data_b07ddc)
        var_20.b = 0
        sub_6f1ae0(eax_16, edx_3, eax_15)
        ebx.b = 0
else
    void* var_40_1 = &var_68
    sub_52e820(&var_68, u"SetMatrixArray")
    var_20.b = 1
label_6fca9b:
    int16_t* eax_9
    int32_t edx_2
    eax_9, edx_2 = sub_52e820(&var_80, &data_b07ddc)
    var_20.b = 0
    sub_6f1ae0(eax_9, edx_2, var_3c_1)
    ebx.b = 0
int32_t var_20_1 = 0xffffffff

if (esi_1 != 0)
    bool cond:1_1 = esi_1[1] != 1
    esi_1[1]
    esi_1[1] -= 1
    
    if (not(cond:1_1))
        (*(*esi_1 + 4))()
        int32_t edi_4 = esi_1[2]
        esi_1[2] -= 1
        
        if (edi_4 == 1)
            (*(*esi_1 + 8))()

result.b = ebx.b
int32_t var_28
fsbase->NtTib.ExceptionList = var_28
return result
