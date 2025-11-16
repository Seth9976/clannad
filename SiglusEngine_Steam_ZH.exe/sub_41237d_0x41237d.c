// 函数: sub_41237d
// 地址: 0x41237d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_10 = edi

if ((arg3 & 0xfffe3000) == 0 && arg5 != 0 && arg6 != 0)
    int32_t var_14_1 = 0
    
    if (sub_40b60c(arg4) != 0 && arg1 != 0 && arg2 != 0)
        *arg6 = 0
        int32_t result
        void*** esi_2
        
        if ((arg3.b & 1) != 0)
            void*** eax_2 = sub_745f3f(0x27c)
            
            if (eax_2 == 0)
                esi_2 = nullptr
            else
                esi_2 = sub_41166f(eax_2, arg5, arg4, arg3)
            
            if (esi_2 == 0)
                return 0x8007000e
            
            result = sub_40ea72(esi_2, arg1, arg2)
        label_412454:
            
            if (result s>= 0)
                *arg6 = esi_2
            
            return result
        
        if (arg1 u<= 0xffff && arg2 u<= 0xffff)
            void*** eax_4 = sub_745f3f(0x27c)
            
            if (eax_4 == 0)
                esi_2 = nullptr
            else
                esi_2 = sub_4111ca(eax_4, arg5, arg4, arg3)
            
            if (esi_2 == 0)
                return 0x8007000e
            
            result = sub_40dd7c(esi_2, arg1, arg2)
            goto label_412454

return 0x8876086c
