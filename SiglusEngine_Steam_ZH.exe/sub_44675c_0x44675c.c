// 函数: sub_44675c
// 地址: 0x44675c
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_1c = edi
int32_t* edi_1 = arg1
int32_t* eax = *edi_1
int32_t* var_10 = nullptr
int32_t i_6 = eax[4]
int32_t* ecx = eax[1]
int32_t edx = *eax
int32_t result = 0
int32_t i_5 = i_6

if (arg5 != 0)
    i_5 = 1
    i_6 = 1
else if (i_6 u< 1)
    i_5 = 1
    i_6 = 1

if (ecx s< 0)
label_4469c2:
    result = 0x80004005
label_4469c9:
    int32_t* eax_29 = var_10
    
    if (eax_29 != 0)
        (*(*eax_29 + 8))(eax_29)
    
    return result

if (ecx s> 3)
    if (ecx != 4)
        if (ecx != 5)
            goto label_4469c2
        
        int32_t ebx = eax[5]
        *edi_1 = &eax[6]
        
        if (i_5 == 0)
            return result
        
        int32_t i
        
        do
            arg1 = nullptr
            *edi_1 = &eax[6]
            
            if (ebx u> 0)
                do
                    int32_t result_1 = sub_44675c(edi_1, arg2, arg3, arg4, 0)
                    result = result_1
                    
                    if (result_1 s< 0)
                        goto label_4469c9
                    
                    arg1 += 1
                while (arg1 u< ebx)
            
            i = i_5
            i_5 -= 1
        while (i != 1)
        goto label_4469c9
    
    if (edx == 4)
        if (i_6 != 0)
            int32_t i_1
            
            do
                if (*arg3 != 0)
                    char* esi_5 = **arg2
                    
                    if (esi_5 != 0)
                        char* eax_18 = esi_5
                        void* edx_1 = &eax_18[1]
                        
                        do
                            ecx.b = *eax_18
                            eax_18 = &eax_18[1]
                        while (ecx.b != 0)
                        
                        int32_t** var_20_4 = &var_10
                        void* var_24_2 = eax_18 - edx_1 + 1
                        int32_t result_2 = sub_458de2()
                        result = result_2
                        
                        if (result_2 s< 0)
                            return result
                        
                        int32_t* eax_21 = var_10
                        int32_t esi_6
                        int32_t edi_6
                        edi_6, esi_6 = __builtin_memcpy((*(*eax_21 + 0xc))(eax_21), esi_5, 
                            (eax_18 - edx_1 + 1) u>> 2 << 2)
                        __builtin_memcpy(edi_6, esi_6, (eax_18 - edx_1 + 1) & 3)
                        edi_1 = arg1
                    
                    **arg3 = 4
                    *(*arg3 + 4) = var_10
                    var_10 = nullptr
                    *arg3 += 8
                
                if (arg4 != 0)
                    *arg4 += 1
                
                *arg2 += 4
                i_1 = i_5
                i_5 -= 1
            while (i_1 != 1)
        
        goto label_446994
    
    if (edx s> 4)
        if (edx s<= 9)
            if (i_6 == 0)
                goto label_446994
            
            arg5 = i_6
            int32_t i_2
            
            do
                if (*arg3 != 0)
                    int32_t* ebx_3 = **arg2
                    
                    if (ebx_3 != 0)
                        (*(*ebx_3 + 4))(ebx_3)
                    
                    **arg3 = 5
                    *(*arg3 + 4) = ebx_3
                    *arg3 += 8
                
                if (arg4 != 0)
                    *arg4 += 1
                
                *arg2 += 4
                i_2 = arg5
                arg5 -= 1
            while (i_2 != 1)
        label_4468b5:
            edi_1 = arg1
        label_446994:
            *edi_1 += 0x14
            goto label_4469c9
        
        if (edx == 0xf)
            if (i_6 == 0)
                goto label_446994
            
            arg5 = i_6
            int32_t i_3
            
            do
                if (*arg3 != 0)
                    int32_t* ebx_2 = **arg2
                    
                    if (ebx_2 != 0)
                        (*(*ebx_2 + 4))(ebx_2)
                    
                    **arg3 = 0xf
                    *(*arg3 + 4) = ebx_2
                    *arg3 += 8
                
                if (arg4 != 0)
                    *arg4 += 1
                
                *arg2 += 4
                i_3 = arg5
                arg5 -= 1
            while (i_3 != 1)
            goto label_4468b5
        
        if (edx == 0x10)
            if (i_6 == 0)
                goto label_446994
            
            arg5 = i_6
            int32_t i_4
            
            do
                if (*arg3 != 0)
                    int32_t* ebx_1 = **arg2
                    
                    if (ebx_1 != 0)
                        (*(*ebx_1 + 4))(ebx_1)
                    
                    **arg3 = 0x10
                    *(*arg3 + 4) = ebx_1
                    *arg3 += 8
                
                if (arg4 != 0)
                    *arg4 += 1
                
                *arg2 += 4
                i_4 = arg5
                arg5 -= 1
            while (i_4 != 1)
            goto label_4468b5
else if (edx == 1 || edx == 2 || edx == 3)
    *arg2 += (eax[6] * eax[5] * i_6) << 2
    *edi_1 += 0x1c
    goto label_4469c9

return 0x80004005
