// 函数: sub_468204
// 地址: 0x468204
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t* esi = arg1
int32_t result = *esi

if (esi[2].b == 3)
    ecx.b = *(esi + 9)
    int32_t ebx
    int32_t var_10_1 = ebx
    int32_t edi
    int32_t var_14_1 = edi
    char* edi_1 = arg2
    
    if (ecx.b u< 8)
        uint32_t ecx_1 = zx.d(ecx.b)
        
        if (ecx_1 == 1)
            arg2 = &edi_1[result - 1]
            int32_t ecx_19 = 7 - ((result - 1) & 7)
            char* edx_9 = &edi_1[(result - 1) u>> 3]
            arg1 = ecx_19
            
            if (result u> 0)
                int32_t var_8_3 = result
                int32_t i
                
                do
                    int32_t ebx_4
                    ebx_4.b = *edx_9
                    ebx_4.b u>>= ecx_19.b
                    ebx_4.b &= 1
                    *arg2 = ebx_4.b
                    
                    if (arg1 != 7)
                        ecx_19 = arg1 + 1
                    else
                        ecx_19 = 0
                        edx_9 -= 1
                    
                    arg2 -= 1
                    i = var_8_3
                    var_8_3 -= 1
                    arg1 = ecx_19
                while (i != 1)
        else if (ecx_1 == 2)
            arg2 = &edi_1[result - 1]
            int32_t ecx_14 = (3 - ((result - 1) & 3)) << 1
            char* edx_6 = &edi_1[(result - 1) u>> 2]
            arg1 = ecx_14
            
            if (result u> 0)
                int32_t var_8_2 = result
                int32_t i_1
                
                do
                    int32_t ebx_2
                    ebx_2.b = *edx_6
                    ebx_2.b u>>= ecx_14.b
                    ebx_2.b &= 3
                    *arg2 = ebx_2.b
                    
                    if (arg1 != 6)
                        ecx_14 = arg1 + 2
                    else
                        ecx_14 = 0
                        edx_6 -= 1
                    
                    arg2 -= 1
                    i_1 = var_8_2
                    var_8_2 -= 1
                    arg1 = ecx_14
                while (i_1 != 1)
        else if (ecx_1 == 4)
            arg2 = &edi_1[result - 1]
            int32_t ecx_9 = (result & 1) << 2
            char* edx_3 = &edi_1[(result - 1) u>> 1]
            arg1 = ecx_9
            
            if (result u> 0)
                int32_t var_8_1 = result
                int32_t i_2
                
                do
                    ebx.b = *edx_3
                    ebx.b u>>= ecx_9.b
                    ebx.b &= 0xf
                    *arg2 = ebx.b
                    
                    if (arg1 != 4)
                        ecx_9 = arg1 + 4
                    else
                        ecx_9 = 0
                        edx_3 -= 1
                    
                    arg2 -= 1
                    i_2 = var_8_1
                    var_8_1 -= 1
                    arg1 = ecx_9
                while (i_2 != 1)
        
        *(esi + 9) = 8
        *(esi + 0xb) = 8
        esi[1] = result
    
    if (*(esi + 9) == 8)
        char* edx_10 = &edi_1[result - 1]
        char* ebx_6
        
        if (arg4 == 0)
            ebx_6 = result * 3
            void* ecx_26 = ebx_6 + edi_1 - 1
            
            if (result u> 0)
                arg4 = result
                result = arg3
                int32_t i_3
                
                do
                    int32_t ebx_11
                    ebx_11.b = *(zx.d(*edx_10) * 3 + result + 2)
                    *ecx_26 = ebx_11.b
                    int32_t ebx_12
                    ebx_12.b = *(zx.d(*edx_10) * 3 + result + 1)
                    *(ecx_26 - 1) = ebx_12.b
                    int32_t ebx_13
                    ebx_13.b = *(zx.d(*edx_10) * 3 + result)
                    *(ecx_26 - 2) = ebx_13.b
                    ecx_26 -= 3
                    edx_10 -= 1
                    i_3 = arg4
                    arg4 -= 1
                while (i_3 != 1)
            
            *(esi + 0xb) = 0x18
            esi[2].b = 2
            *(esi + 0xa) = 3
        else
            ebx_6 = result << 2
            void* ecx_22 = ebx_6 + edi_1 - 1
            
            if (result u> 0)
                arg1 = result
                result = arg3
                int32_t i_4
                
                do
                    if (zx.d(*edx_10) s< arg5)
                        int32_t ebx_7
                        ebx_7.b = *(zx.d(*edx_10) + arg4)
                        *ecx_22 = ebx_7.b
                    else
                        *ecx_22 = 0xff
                    
                    int32_t ebx_8
                    ebx_8.b = *(zx.d(*edx_10) * 3 + result + 2)
                    *(ecx_22 - 1) = ebx_8.b
                    int32_t ebx_9
                    ebx_9.b = *(zx.d(*edx_10) * 3 + result + 1)
                    *(ecx_22 - 2) = ebx_9.b
                    int32_t ebx_10
                    ebx_10.b = (zx.d(*edx_10) * 3)[result]
                    *(ecx_22 - 3) = ebx_10.b
                    ecx_22 -= 4
                    edx_10 -= 1
                    i_4 = arg1
                    arg1 -= 1
                while (i_4 != 1)
            
            *(esi + 0xb) = 0x20
            esi[2].b = 6
            *(esi + 0xa) = 4
        
        *(esi + 9) = 8
        esi[1] = ebx_6

return result
