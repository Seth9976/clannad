// 函数: sub_497320
// 地址: 0x497320
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void* edi = arg2
uint8_t* eax_3 = sub_495490(arg3)

if (eax_3 != 0)
    int32_t esi_1 = arg4
    
    if (esi_1 s> 0)
        if (esi_1 s> 0x20)
            esi_1 = 0x20
        
        void* eax_4 = &eax_3[0x748]
        
        if (edi == 0)
            void var_8c
            sub_4d1ba0(eax_4, esi_1 << 2, &var_8c, edi.b)
            edi = &var_8c
            eax_4 = &eax_3[0x748]
        
        int32_t esi_2 = esi_1 << 2
        int32_t eax_5 = sub_4d1be0(eax_4, edi, eax_4, esi_2)
        
        if (eax_5 != 0)
            sub_4d1c30(eax_5, edi, &eax_3[0x748], esi_2)
            sub_496f80(arg3, eax_3)
        
        eax_5.b = 1
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_5

eax_3.b = 0
sub_5f02dd(eax_1 ^ &__saved_ebp)
return eax_3
