// 函数: sub_6f76b0
// 地址: 0x6f76b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cd9f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edx = data_4ebee38
int32_t var_28 = 0
int32_t var_2c = *(arg1 + 0x168)
int32_t eax_3 = *edx
int32_t var_30 = 1
int32_t var_34 = *(arg1 + 0x160)
int32_t var_38 = *(arg1 + 0x18)
int32_t var_3c = *(arg1 + 4)
int32_t edi = (*(eax_3 + 0x2c))(edx, var_3c, var_38, var_34, var_30, var_2c, var_28)
int16_t* eax_5
int32_t ecx_2
int32_t edx_1
void var_54

if (edi s>= 0)
    if (*(arg1 + 0x17c) != 0)
        int32_t* eax_7 = data_4ebee38
        int32_t var_28_1 = 0
        int32_t var_2c_1 = *(arg1 + 0x168)
        int32_t ecx_5 = *eax_7
        int32_t var_30_1 = 1
        int32_t var_34_1 = *(arg1 + 0x180)
        int32_t var_38_1 = *(arg1 + 0x18)
        var_3c = *(arg1 + 4)
        edi = (*(ecx_5 + 0x2c))(eax_7, var_3c, var_38_1, var_34_1, var_30_1, var_2c_1, var_28_1)
    
    if (*(arg1 + 0x17c) == 0 || edi s>= 0)
        int32_t* ecx_7 = data_4ebee38
        int32_t var_28_2 = 0
        int32_t var_2c_2 = *(arg1 + 0x1a0)
        int32_t eax_9 = *ecx_7
        int32_t var_30_2 = 0
        int32_t var_34_2 = *(arg1 + 0x198)
        int32_t var_38_2 = *(arg1 + 0x18)
        var_3c = *(arg1 + 4)
        edi = (*(eax_9 + 0x2c))(ecx_7, var_3c, var_38_2, var_34_2, var_30_2, var_2c_2, var_28_2)
        
        if (edi s>= 0)
            int32_t eax_10
            
            if (*(arg1 + 0x17c) != 0)
                int32_t* eax_11 = data_4ebee38
                int32_t var_28_3 = 0
                int32_t var_2c_3 = *(arg1 + 0x1a0)
                int32_t ecx_9 = *eax_11
                int32_t var_30_3 = 0
                int32_t var_34_3 = *(arg1 + 0x1b8)
                int32_t var_38_3 = *(arg1 + 0x18)
                var_3c = *(arg1 + 4)
                eax_10 = (*(ecx_9 + 0x2c))(eax_11, var_3c, var_38_3, var_34_3, var_30_3, var_2c_3, 
                    var_28_3)
            
            if (*(arg1 + 0x17c) == 0 || eax_10 s>= 0)
                eax_10.b = 1
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_10
            
            int32_t* var_18_3 = &var_3c
            sub_52e820(&var_3c, u"CheckDeviceMultiSampleType")
            int32_t var_8_5 = 3
            eax_5, edx_1 = sub_52e820(&var_54, 0xb079a0)
            ecx_2 = eax_10
        else
            int32_t* var_18_2 = &var_3c
            sub_52e820(&var_3c, u"CheckDeviceMultiSampleType")
            int32_t var_8_4 = 2
            eax_5, edx_1 = sub_52e820(&var_54, &data_b07a28)
            ecx_2 = edi
    else
        int32_t* var_18_1 = &var_3c
        sub_52e820(&var_3c, u"CheckDeviceMultiSampleType")
        int32_t var_8_3 = 1
        eax_5, edx_1 = sub_52e820(&var_54, &data_b078a8)
        ecx_2 = edi
else
    int32_t* var_14_1 = &var_3c
    sub_52e820(&var_3c, u"CheckDeviceMultiSampleType")
    int32_t var_8_1 = 0
    eax_5, edx_1 = sub_52e820(&var_54, &data_b07928)
    ecx_2 = edi
int32_t var_8_2 = 0xffffffff
sub_6f1ae0(eax_5, edx_1, ecx_2)
int32_t eax_6
eax_6.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_6
