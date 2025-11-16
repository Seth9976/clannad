// 函数: sub_6fe2d0
// 地址: 0x6fe2d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9ce598
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_74
int32_t var_1c = __security_cookie ^ &var_74
int32_t ebx
int32_t var_78 = ebx
void* edi
void* var_80 = edi
int32_t eax_4 = __security_cookie ^ &var_80
fsbase->NtTib.ExceptionList = &ExceptionList
var_74 = arg1
int32_t* var_70 = arg3
int32_t edx = *arg3
int32_t* esi = *(edx + (arg4 << 3) + 4)
int32_t* ecx = *(edx + (arg4 << 3))
int32_t* var_6c = ecx
int32_t* var_68 = ecx
int32_t* var_64 = esi

if (esi != 0)
    esi[1] += 1
    ecx = var_6c

int32_t var_c_1 = 0
void* ebx_2 = *(arg3[0xd] + 0x44)
int32_t* eax_8 = *ecx
(*(*eax_8 + 0x18))(eax_8, eax_4)
int32_t eax_10 = (*(*arg5 + 0xf0))(arg5, "tech")
char var_18
int32_t result
void var_c0
void var_a8

if (eax_10 s< 0)
    var_80 = &var_a8
    sub_52e820(&var_a8, u"SetTechnique")
    char var_18_1 = 1
    int16_t* eax_11
    int32_t edx_1
    eax_11, edx_1 = sub_52e820(&var_c0, &data_b07e20)
    var_18 = 0
    sub_6f1ae0(eax_11, edx_1, eax_10)
    ebx_2.b = 0
else if (*(ebx_2 + 0x1c) == 0)
    ebx_2 = (*(*arg5 + 0xa0))(arg5, "mWorldMatrixArray", *(arg2 + 0x34) + 0x50, 1)
    
    if (ebx_2 s>= 0)
        ebx_2 = (*(*arg5 + 0x68))(arg5, "CurNumBones", 1)
        
        if (ebx_2 s< 0)
            var_80 = &var_a8
            sub_52e820(&var_a8, u"SetInt")
            char var_18_5 = 5
            goto label_6fe463
        
    label_6fe4f6:
        int32_t eax_25 = *(var_80 + 0x14)
        j_sub_4021aa(&var_6c, eax_25 + 0x190c, eax_25 + 0x194c)
        result = (*(*arg5 + 0x98))(arg5, "mLightVP", &var_6c)
        
        if (result s>= 0)
            ebx_2.b = 1
        else
            var_80 = &var_a8
            sub_52e820(&var_a8, u"SetMatrix")
            char var_18_6 = 6
            int16_t* eax_28
            int32_t edx_4
            eax_28, edx_4 = sub_52e820(&var_c0, &data_b07ddc)
            var_18 = 0
            sub_6f1ae0(eax_28, edx_4, result)
            ebx_2.b = 0
    else
        var_80 = &var_a8
        sub_52e820(&var_a8, u"SetMatrixArray")
        char var_18_4 = 4
    label_6fe463:
        int16_t* eax_17
        int32_t edx_3
        eax_17, edx_3 = sub_52e820(&var_c0, &data_b07ddc)
        var_18 = 0
        sub_6f1ae0(eax_17, edx_3, ebx_2)
        ebx_2.b = 0
else
    int32_t ecx_5 = *(ebx_2 + 0x38)
    
    if (ecx_5 == *(ebx_2 + 0x3c))
        ecx_5 = 0
    
    int32_t eax_13 = (*(*arg5 + 0xa0))(arg5, "mWorldMatrixArray", ecx_5, *(ebx_2 + 0x34))
    
    if (eax_13 s>= 0)
        ebx_2 = (*(*arg5 + 0x68))(arg5, "CurNumBones", *(ebx_2 + 0x28))
        
        if (ebx_2 s>= 0)
            goto label_6fe4f6
        
        var_80 = &var_a8
        sub_52e820(&var_a8, u"SetInt")
        char var_18_3 = 3
        goto label_6fe463
    
    var_80 = &var_a8
    sub_52e820(&var_a8, u"SetMatrixArray")
    char var_18_2 = 2
    int16_t* eax_14
    int32_t edx_2
    eax_14, edx_2 = sub_52e820(&var_c0, &data_b07ddc)
    var_18 = 0
    sub_6f1ae0(eax_14, edx_2, eax_13)
    ebx_2.b = 0
var_18.d = 0xffffffff

if (esi != 0)
    bool cond:1_1 = esi[1] != 1
    esi[1]
    esi[1] -= 1
    
    if (not(cond:1_1))
        (*(*esi + 4))()
        int32_t edi_3 = esi[2]
        esi[2] -= 1
        
        if (edi_3 == 1)
            (*(*esi + 8))()

result.b = ebx_2.b
int32_t var_20
fsbase->NtTib.ExceptionList = var_20
int32_t var_28
sub_745f2b(var_28 ^ &var_80)
return result
