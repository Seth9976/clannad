// 函数: sub_6f7330
// 地址: 0x6f7330
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cd9f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int16_t* var_58_1
void var_54
int32_t* var_3c
int16_t* eax_6
void* ecx_1
struct _EXCEPTION_REGISTRATION_RECORD** ecx_2
int32_t edx_2
struct _EXCEPTION_REGISTRATION_RECORD** edi_1

if (*(arg1 + 0x17c) != 0)
    int32_t var_28_1 = *(arg1 + 0x180)
    int32_t* edx_1 = data_4ebee38
    int32_t var_2c_1 = 1
    int32_t var_30_1 = 2
    int32_t var_34_1 = *(arg1 + 0x14)
    int32_t eax_4 = *edx_1
    int32_t var_38_1 = *(arg1 + 0x18)
    var_3c = *(arg1 + 4)
    edi_1 = (*(eax_4 + 0x28))(edx_1, var_3c, var_38_1, var_34_1, var_30_1, var_2c_1, var_28_1)
    
    if (edi_1 s< 0)
        int32_t* var_14_1 = &var_3c
        sub_52e820(&var_3c, u"CheckDeviceFormat")
        int32_t var_8_1 = 0
        ecx_1 = &var_54
        var_58_1 = &data_b074f0
    label_6f73ae:
        eax_6, edx_2 = sub_52e820(ecx_1, var_58_1)
        ecx_2 = edi_1
    label_6f73b5:
        int32_t var_8_2 = 0xffffffff
        sub_6f1ae0(eax_6, edx_2, ecx_2)
        int32_t eax_7
        eax_7.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_7
    
    int32_t var_28_2 = *(arg1 + 0x180)
    int32_t* eax_8 = data_4ebee38
    int32_t var_2c_2 = *(arg1 + 0x160)
    int32_t var_30_2 = *(arg1 + 0x14)
    int32_t ecx_5 = *eax_8
    int32_t var_34_2 = *(arg1 + 0x18)
    int32_t var_38_2 = *(arg1 + 4)
    var_3c = eax_8
    edi_1 = (*(ecx_5 + 0x30))(var_3c, var_38_2, var_34_2, var_30_2, var_2c_2, var_28_2)
    
    if (edi_1 s< 0)
        int32_t** var_18_1 = &var_3c
        sub_52e820(&var_3c, u"CheckDepthStencilMatch")
        int32_t var_8_3 = 1
        ecx_1 = &var_54
        var_58_1 = &data_b075c8
        goto label_6f73ae

struct _EXCEPTION_REGISTRATION_RECORD** eax_3

if (*(arg1 + 0x1b4) != 0)
    int32_t var_28_3 = *(arg1 + 0x1b8)
    int32_t* ecx_7 = data_4ebee38
    int32_t var_2c_3 = 1
    int32_t var_30_3 = 2
    int32_t var_34_3 = *(arg1 + 0x198)
    int32_t eax_9 = *ecx_7
    int32_t var_38_3 = *(arg1 + 0x18)
    var_3c = *(arg1 + 4)
    edi_1 = (*(eax_9 + 0x28))(ecx_7, var_3c, var_38_3, var_34_3, var_30_3, var_2c_3, var_28_3)
    
    if (edi_1 s< 0)
        int32_t** var_18_2 = &var_3c
        sub_52e820(&var_3c, u"CheckDeviceFormat")
        int32_t var_8_4 = 2
        ecx_1 = &var_54
        var_58_1 = &data_b07558
        goto label_6f73ae
    
    int32_t var_28_4 = *(arg1 + 0x1b8)
    int32_t eax_11 = *(arg1 + 0x198)
    int32_t* edx_3 = data_4ebee38
    int32_t var_34_4 = *(arg1 + 0x18)
    int32_t ecx_9 = *edx_3
    int32_t var_38_4 = *(arg1 + 4)
    var_3c = edx_3
    eax_3 = (*(ecx_9 + 0x30))(var_3c, var_38_4, var_34_4, eax_11, eax_11, var_28_4)
    
    if (eax_3 s< 0)
        int32_t** var_18_3 = &var_3c
        sub_52e820(&var_3c, u"CheckDepthStencilMatch")
        int32_t var_8_5 = 3
        eax_6, edx_2 = sub_52e820(&var_54, 0xb076a0)
        ecx_2 = eax_3
        goto label_6f73b5

eax_3.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
