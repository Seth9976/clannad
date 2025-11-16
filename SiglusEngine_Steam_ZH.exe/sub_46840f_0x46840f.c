// 函数: sub_46840f
// 地址: 0x46840f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ecx
void* var_8 = ecx
void* var_c = ecx
int32_t ebx
int32_t var_10 = ebx
int32_t* esi = arg1
ecx.b = esi[2].b
void* result = *esi
int32_t edi
int32_t var_18 = edi

if (ecx.b == 0)
    int32_t ebx_1 = 0
    
    if (arg3 != 0)
        ebx_1.w = *(arg3 + 8)
    
    ecx.b = *(esi + 9)
    void* edi_1 = arg2
    int32_t var_8_1 = ebx_1
    
    if (ecx.b u< 8)
        uint32_t ecx_1 = zx.d(ecx.b)
        
        if (ecx_1 == 1)
            var_8_1 = ebx_1 * 0xff
            arg1 = result + edi_1 - 1
            ecx = 7 - ((result - 1) & 7)
            char* edx_9 = ((result - 1) u>> 3) + edi_1
            arg2 = ecx
            
            if (result u> 0)
                void* var_c_3 = result
                void* i
                
                do
                    void* ebx_16
                    ebx_16.b = *edx_9
                    ebx_16.b u>>= ecx.b
                    ebx_16.b &= 1
                    char temp4_1 = ebx_16.b
                    ebx_16.b = neg.b(ebx_16.b)
                    ebx_16.b = sbb.b(ebx_16.b, ebx_16.b, temp4_1 != 0)
                    *arg1 = (ebx_16 & 0xff).b
                    
                    if (arg2 != 7)
                        ecx = arg2 + 1
                    else
                        ecx = nullptr
                        edx_9 -= 1
                    
                    arg1 -= 1
                    i = var_c_3
                    var_c_3 -= 1
                    arg2 = ecx
                while (i != 1)
        else if (ecx_1 == 2)
            var_8_1 = ebx_1 * 0x55
            arg1 = result + edi_1 - 1
            ecx = (3 - ((result - 1) & 3)) << 1
            char* edx_6 = ((result - 1) u>> 2) + edi_1
            arg2 = ecx
            
            if (result u> 0)
                void* var_c_2 = result
                void* i_1
                
                do
                    char ebx_12 = (zx.d(*edx_6) u>> ecx.b).b & 3
                    ecx.b = ebx_12
                    ecx.b <<= 2
                    ecx.b |= ebx_12
                    ecx.b <<= 2
                    ecx.b |= ebx_12
                    ecx.b <<= 2
                    ecx.b |= ebx_12
                    *arg1 = ecx.b
                    
                    if (arg2 != 6)
                        ecx = arg2 + 2
                    else
                        ecx = nullptr
                        edx_6 -= 1
                    
                    arg1 -= 1
                    i_1 = var_c_2
                    var_c_2 -= 1
                    arg2 = ecx
                while (i_1 != 1)
        else if (ecx_1 == 4)
            var_8_1 = ebx_1 * 0x11
            arg1 = result + edi_1 - 1
            ecx = 4 - (((result - 1) & 1) << 2)
            char* edx_3 = ((result - 1) u>> 1) + edi_1
            arg2 = ecx
            
            if (result u> 0)
                void* var_c_1 = result
                void* i_2
                
                do
                    char ebx_5 = (zx.d(*edx_3) u>> ecx.b).b & 0xf
                    ecx.b = ebx_5
                    ecx.b <<= 4
                    ecx.b |= ebx_5
                    *arg1 = ecx.b
                    ecx = 4
                    
                    if (arg2 == 4)
                        ecx = nullptr
                        edx_3 -= 1
                    
                    arg1 -= 1
                    i_2 = var_c_1
                    var_c_1 -= 1
                    arg2 = ecx
                while (i_2 != 1)
        
        ebx_1 = var_8_1
        *(esi + 9) = 8
        *(esi + 0xb) = 8
        esi[1] = result
    
    if (arg3 != 0)
        ecx.b = *(esi + 9)
        
        if (ecx.b == 8)
            ecx = result + edi_1 - 1
            char* edi_2 = edi_1 + (result << 1) - 1
            
            if (result u> 0)
                void* edx_10 = result
                void* i_3
                
                do
                    ebx_1.w = zx.w(*ecx)
                    
                    if (ebx_1.w != var_8_1.w)
                        *edi_2 = 0xff
                    else
                        *edi_2 = 0
                    
                    ebx_1.b = *ecx
                    *(edi_2 - 1) = ebx_1.b
                    edi_2 -= 2
                    ecx -= 1
                    i_3 = edx_10
                    edx_10 -= 1
                while (i_3 != 1)
        else if (ecx.b == 0x10)
            int32_t edx_11 = esi[1]
            ecx = edx_11 + edi_1 - 1
            void* edi_4 = edi_1 + (edx_11 << 1) - 1
            
            if (result u> 0)
                arg3 = result
                void* i_4
                
                do
                    int32_t ebx_17
                    ebx_17:1.b = *(ecx - 1)
                    arg1 = ecx - 1
                    ebx_17.b = *ecx
                    void* edi_5
                    
                    if (ebx_17 != zx.d(ebx_1.w))
                        *edi_4 = 0xff
                        edi_5 = edi_4 - 1
                        *edi_5 = 0xff
                    else
                        *edi_4 = 0
                        edi_5 = edi_4 - 1
                        *edi_5 = 0
                    
                    ecx.b = *ecx
                    *(edi_5 - 1) = ecx.b
                    void* edx_13
                    edx_13.b = *arg1
                    *(edi_5 - 2) = edx_13.b
                    edi_4 = edi_5 - 3
                    ecx = arg1 - 1
                    i_4 = arg3
                    arg3 -= 1
                while (i_4 != 1)
        
        ecx.b = *(esi + 9)
        esi[2].b = 4
        *(esi + 0xa) = 2
        ecx.b <<= 1
        *(esi + 0xb) = ecx.b
        esi[1] = (zx.d(ecx.b) * result) u>> 3
else if (ecx.b == 2)
    void* edx_14 = arg3
    
    if (edx_14 != 0)
        ecx.b = *(esi + 9)
        
        if (ecx.b == 8)
            ecx = esi[1] + arg2 - 1
            void* edi_9 = arg2 + (result << 2) - 1
            
            if (result u> 0)
                arg3 = result
                void* i_5
                
                do
                    ebx.w = zx.w(*(ecx - 2))
                    
                    if (ebx.w != *(edx_14 + 2))
                        *edi_9 = 0xff
                    else
                        ebx.w = zx.w(*(ecx - 1))
                        
                        if (ebx.w != *(edx_14 + 4))
                            *edi_9 = 0xff
                        else
                            ebx.w = zx.w(*ecx)
                            
                            if (ebx.w != *(edx_14 + 6))
                                *edi_9 = 0xff
                            else
                                *edi_9 = 0
                    
                    ebx.b = *ecx
                    *(edi_9 - 1) = ebx.b
                    ebx.b = *(ecx - 1)
                    *(edi_9 - 2) = ebx.b
                    ebx.b = *(ecx - 2)
                    *(edi_9 - 3) = ebx.b
                    edi_9 -= 4
                    ecx -= 3
                    i_5 = arg3
                    arg3 -= 1
                while (i_5 != 1)
        else if (ecx.b == 0x10)
            ecx = esi[1] + arg2 - 1
            void* edi_14 = arg2 + (result << 3) - 1
            
            if (result u> 0)
                arg2 = result
                
                while (true)
                    int32_t ebx_18
                    ebx_18:1.b = *(ecx - 5)
                    ebx_18.b = *(ecx - 4)
                    uint32_t edx_15
                    void* edi_15
                    
                    if (ebx_18 != zx.d(*(edx_14 + 2)))
                    label_468713:
                        *edi_14 = 0xff
                        edi_15 = edi_14 - 1
                        *edi_15 = 0xff
                    else
                        edx_15:1.b = *(ecx - 3)
                        edx_15.b = *(ecx - 2)
                        
                        if (edx_15 != zx.d(*(arg3 + 4)))
                            goto label_468713
                        
                        edx_15:1.b = *(ecx - 1)
                        edx_15.b = *ecx
                        
                        if (edx_15 != zx.d(*(arg3 + 6)))
                            goto label_468713
                        
                        *edi_14 = 0
                        edi_15 = edi_14 - 1
                        *edi_15 = 0
                    
                    edx_15.b = *ecx
                    *(edi_15 - 1) = edx_15.b
                    edx_15.b = *(ecx - 1)
                    *(edi_15 - 2) = edx_15.b
                    edx_15.b = *(ecx - 2)
                    *(edi_15 - 3) = edx_15.b
                    edx_15.b = *(ecx - 3)
                    *(edi_15 - 4) = edx_15.b
                    edx_15.b = *(ecx - 4)
                    *(edi_15 - 5) = edx_15.b
                    edx_15.b = *(ecx - 5)
                    *(edi_15 - 6) = edx_15.b
                    edi_14 = edi_15 - 7
                    ecx -= 6
                    void* temp7_1 = arg2
                    arg2 -= 1
                    
                    if (temp7_1 == 1)
                        break
                    
                    edx_14 = arg3
        
        ecx.b = *(esi + 9)
        esi[2].b = 6
        *(esi + 0xa) = 4
        ecx.b <<= 2
        *(esi + 0xb) = ecx.b
        esi[1] = (zx.d(ecx.b) * result) u>> 3

return result
