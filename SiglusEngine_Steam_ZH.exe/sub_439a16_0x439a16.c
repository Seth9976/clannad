// 函数: sub_439a16
// 地址: 0x439a16
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t edi
int32_t var_14 = edi

if (arg3 != 0 && arg4 != 0)
    *arg3 = 0
    *arg4 = 0
    
    if (arg5 != 0)
        *arg5 = 0
    
    void*** arg_8
    
    if (arg2 != 0)
        void*** ebx_1 = arg_8
        
        if (ebx_1 != 0)
            int32_t eax_3 = sub_4377a1(arg1, arg2)
            int32_t eax_4 = sub_4377a1(arg1, ebx_1)
            int32_t eax_5
            
            if (eax_3 u>= eax_4)
                eax_5 = sub_4392fd(arg1, arg2, ebx_1, 0)
            
            void*** esi_2
            
            if (eax_3 u>= eax_4 && eax_5 != 0)
            label_439aae:
                esi_2 = arg2
                goto label_439ab9
            
            if (sub_4392fd(arg1, ebx_1, arg2, 0) != 0)
                esi_2 = ebx_1
            label_439ab9:
                int32_t result = sub_437ca7(arg2, ebx_1, &arg_8)
                
                if (result s< 0)
                    return result
                
                void*** edi_3 = arg_8
                
                if (esi_2[5] == edi_3)
                    goto label_439adf
                
                void*** eax_9 = (*esi_2)[1]()
                
                if (eax_9 == 0)
                    return 0x8007000e
                
                eax_9[5] = edi_3
                esi_2 = eax_9
            label_439adf:
                
                if (arg5 != 0)
                    void* eax_11 = (*esi_2)[1]()
                    *arg5 = eax_11
                    
                    if (eax_11 == 0)
                        return 0x8007000e
                    
                    sub_437571(arg1, eax_11, 1)
                
                *arg3 = esi_2
                *arg4 = esi_2
                return 0
            
            if (sub_4392fd(arg1, arg2, ebx_1, 0) != 0)
                goto label_439aae
    else if (arg_8 == 0)
        return 0

return 0x80004005
