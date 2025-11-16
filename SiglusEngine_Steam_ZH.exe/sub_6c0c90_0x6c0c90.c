// 函数: sub_6c0c90
// 地址: 0x6c0c90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax = arg2[2]
void* ebx = *arg3
void* result = ebx - 0x10

if (arg2[2] s> result)
    void* eax_1 = arg3[3]
    int32_t* ecx = arg2[1]
    result = eax_1 + 0x10
    
    if (ecx s< result)
        void* eax_2 = arg3[1]
        int32_t ecx_1 = arg2[3]
        result = eax_2 - 0x10
        
        if (ecx_1 s> result)
            if (data_4ebe458 != 0)
                int32_t esi_1 = *arg2
                
                if (ebx - esi_1 + 0x10 u<= 0x20)
                    if (arg1 != 0)
                        *arg4 = arg1
                    else
                        arg4[4].b = 1
                    
                    arg4[2] = 0
                
                result = arg3[2] - esi_1 + 0x10
                
                if (result u<= 0x20)
                    if (arg1 != 0)
                        *arg4 = arg1
                    else
                        arg4[4].b = 1
                    
                    arg4[2] = 1
            
            if (data_4ebe459 != 0)
                if (ebx - eax + 0x10 u<= 0x20)
                    if (arg1 != 0)
                        *arg4 = arg1
                    else
                        arg4[4].b = 1
                    
                    arg4[2] = 2
                
                result = arg3[2] - eax + 0x10
                
                if (result u<= 0x20)
                    if (arg1 != 0)
                        *arg4 = arg1
                    else
                        arg4[4].b = 1
                    
                    arg4[2] = 3
            
            void* ebx_2
            void* esi_3
            
            if (data_4ebe45a == 0)
                ebx_2 = eax_1
                esi_3 = eax_2
            else
                esi_3 = arg3[1]
                
                if (esi_3 - ecx + 0x10 u<= 0x20)
                    if (arg1 != 0)
                        arg4[1] = arg1
                    else
                        *(arg4 + 0x11) = 1
                    
                    arg4[3] = 0
                
                ebx_2 = arg3[3]
                result = ebx_2 - ecx + 0x10
                
                if (result u<= 0x20)
                    if (arg1 != 0)
                        arg4[1] = arg1
                        arg4[3] = 1
                    else
                        *(arg4 + 0x11) = 1
                        arg4[3] = 1
            
            if (data_4ebe45b != 0)
                if (esi_3 - ecx_1 + 0x10 u<= 0x20)
                    if (arg1 != 0)
                        arg4[1] = arg1
                    else
                        *(arg4 + 0x11) = 1
                    
                    arg4[3] = 2
                
                result = ebx_2 - ecx_1 + 0x10
                
                if (result u<= 0x20)
                    if (arg1 == 0)
                        *(arg4 + 0x11) = 1
                        arg4[3] = 3
                        return result
                    
                    arg4[1] = arg1
                    arg4[3] = 3

return result
