// 函数: sub_623860
// 地址: 0x623860
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* result

if (*(arg1 + 0x4a684) == 0 && *(arg1 + 0x56c9c) == 0)
    result = sub_5cb350(arg1 + 0x62538)
    
    if (result != 2 && result != 3 && *(data_bac498 + 2) == 0 && *(arg1 + 0x4ae4f) == 0)
        result = data_bac510
        int32_t i = 0
        
        if (*(result + 0x3d84) s> 0)
            void* edi_1 = nullptr
            int32_t* esi_1 = 0x4188
            
            do
                int32_t ecx_1 = *(esi_1 + result - 0x400)
                
                if (ecx_1 u<= 0xff)
                    int32_t edx_1 = *(esi_1 + result)
                    
                    if (edx_1 == 0)
                        if (sub_635890(result, edx_1, ecx_1, 2) != 0)
                        label_623914:
                            result = data_bac510
                            void* ecx_2 = edi_1 + result
                            
                            if (*(edi_1 + result + 0x4598) != 0)
                                if (*(edi_1 + result + 0x6198) == 0)
                                    sub_65d6a0(result, *(esi_1 + result + 0x1c00), ecx_2 + 0x4588, 
                                        0, 1, 0)
                                else
                                    sub_65d910(ecx_2 + 0x4588, ecx_2 + 0x6188)
                                
                                result = data_bac510
                        else
                            result = data_bac510
                    else if (edx_1 == 1)
                        if (sub_635890(result, 2, ecx_1, 2) != 0)
                            goto label_623914
                        
                        result = data_bac510
                
                i += 1
                esi_1 = &esi_1[1]
                edi_1 += 0x18
            while (i s< *(result + 0x3d84))

result.b = 1
return result
