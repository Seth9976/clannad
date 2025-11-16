// 函数: sub_556530
// 地址: 0x556530
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
LRESULT result = arg4 - 1

if (result u<= 0x270e && arg5 s>= 0)
    int32_t edi_1 = arg4 * 9
    
    if (arg5 s< *((edi_1 << 2) + &data_1b8c8a8))
        int32_t eax_2 = sub_494940(arg4, arg5)
        void var_408
        void* ecx_1 = &var_408
        
        if (arg7 == 0)
            void* const edx_1 = &data_620e4c
            
            if (eax_2 == 0)
                edx_1 = &data_620e50
            
            sub_4cfd70(ecx_1, edx_1)
            void var_406
            ecx_1 = &var_406
        
        int32_t eax_3 = *((edi_1 << 2) + &data_1b8c8a4)
        
        if (eax_3 == 0)
            WPARAM var_41c_5 = arg5
            ecx_1 = sub_4c84d0(ecx_1, "%05d (?)")
        else
            int32_t eax_4 = *(eax_3 + (arg5 << 2))
            
            if (eax_4 s< 0xf4240)
                int32_t var_41c_1 = eax_4
                WPARAM var_420_1 = arg5
                ecx_1 = sub_4c84d0(ecx_1, "%05d (%d)")
            else if (eax_4 - 0xf4240 u<= 0x63)
                int32_t var_41c_2 = eax_4 - 0xf4240
                WPARAM var_420_2 = arg5
                ecx_1 = sub_4c84d0(ecx_1, "%05d (#Z%02d)")
            else if (eax_4 == 0xf4628)
                WPARAM var_41c_3 = arg5
                ecx_1 = sub_4c84d0(ecx_1, "%05d (#IN)")
            else if (eax_4 == 0xf4629)
                WPARAM var_41c_4 = arg5
                ecx_1 = sub_4c84d0(ecx_1, "%05d (#OUT)")
        
        result = data_1333e40
        
        if (arg6 == 0)
            result = data_1333e3c
        
        if (result != 0)
            result, ecx_1 = result(0, &var_408, arg5, arg5, arg3, 0x4f33)
        
        if (arg7 != 0)
            int32_t var_41c_6 = eax_2
            result = sub_4c1760(result, arg3, arg5, ecx_1)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
