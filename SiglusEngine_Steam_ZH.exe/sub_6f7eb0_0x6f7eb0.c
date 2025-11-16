// 函数: sub_6f7eb0
// 地址: 0x6f7eb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
int32_t* ecx = *arg1
arg1[0x74].w = 0

if (ecx != 0)
    int32_t eax_3 = (*(*ecx + 0x40))(ecx, arg1[0x55])
    void var_44
    
    if (eax_3 s>= 0)
        int32_t* ecx_7 = arg1[0x55]
        int32_t var_10_1 = arg1[0x7e]
        int32_t xmm0_2 = arg1[0x7f]
        int32_t var_18_1 = *ecx_7
        int32_t var_14_1 = ecx_7[1]
        int32_t* eax_7 = *arg1
        int32_t var_20 = 0
        int32_t var_1c_1 = 0
        int32_t var_c_1 = xmm0_2
        eax_3 = (*(*eax_7 + 0xbc))(eax_7, &var_20)
        
        if (eax_3 s>= 0)
            goto label_6f7ef6
        
        int16_t* eax_8
        int32_t edx_2
        eax_8, edx_2 = sub_52e820(&var_44, u"SetViewport")
        sub_6f1a40(eax_8, edx_2, eax_3, var_44)
        int32_t eax_9
        eax_9.b = 0
        sub_745f2b(var_8 ^ &__saved_ebp)
        return eax_9
    
    if (eax_3 == 0x88760868)
        arg1[0x74].w = 1
    label_6f7ef6:
        eax_3.b = 1
        sub_745f2b(var_8 ^ &__saved_ebp)
        return eax_3
    
    int16_t* eax_4
    int32_t edx_1
    eax_4, edx_1 = sub_52e820(&var_44, u"Reset")
    sub_6f1a40(eax_4, edx_1, eax_3, var_44)

int32_t eax_1
eax_1.b = 0
sub_745f2b(var_8 ^ &__saved_ebp)
return eax_1
