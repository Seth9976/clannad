// 函数: sub_527110
// 地址: 0x527110
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 0x34) s>= 0x20)
    return 

sub_415620(sub_415010(&data_131d2d0), *(arg1 + 0x38), *(arg1 + 0x34), *(arg1 + 0x3c))
int32_t edx_2 = 0
int32_t var_8_1 = 0
int32_t i = 0

if (data_13130c0:8 s> 0)
    int32_t eax_2 = data_1333e48
    int32_t* esi_2 = data_13130c0:4 + 0x14
    
    do
        int32_t ecx_1 = *esi_2
        
        if (ecx_1 == 0 || ecx_1 == 1)
        label_527175:
            char* edx_3 = esi_2[4]
            
            if (edx_3 == 0)
                goto label_5271ab
            
            sub_4158f0(eax_2, edx_3, var_8_1, esi_2[2], ecx_1, esi_2[1], esi_2[-1])
            
            if (data_702fc0 == 0)
                eax_2 = data_1333e48
                edx_2 = var_8_1 + 1
                var_8_1 = edx_2
            else
                sub_41bcf0(esi_2[4])
                eax_2 = data_1333e48
            label_5271ab:
                edx_2 = var_8_1
            label_5271ae:
                
                if (data_702fc0 == 0)
                    edx_2 += 1
                    var_8_1 = edx_2
                else
                    if (eax_2 s< 0x18ffd)
                        *(eax_2 + &data_1333e4c:3) = 0xa0d
                        data_1333e48 = eax_2 + 1
                        
                        if (eax_2 + 1 u>= 0x19000)
                            ___report_rangecheckfailure()
                            noreturn
                        
                        *(eax_2 + 0x1333e51) = 0
                        eax_2 += 2
                        data_1333e48 = eax_2
                    
                    edx_2 += 1
                    var_8_1 = edx_2
        else if (ecx_1 == 3)
            if (ecx_1 != 1)
                goto label_5271ae
            
            goto label_527175
        
        i += 1
        esi_2 = &esi_2[0xb]
    while (i s< data_13130c0:8)

sub_4156e0()
int32_t* ecx_4 = data_13130c0:4
int32_t i_1 = 0

if (data_13130c0:8 s<= 0)
    return 

int32_t esi_3 = 0
void* edx_4 = &data_131d35c

do
    int32_t* eax = ecx_4[5]
    
    if (eax == 0)
    label_52722f:
        
        if (ecx_4[9] == 0)
            esi_3 += 1
            edx_4 += 0x3b4
        else
        label_527241:
            
            if (data_131d2d0 != 0xffffffff && esi_3 u<= 0xf)
                *ecx_4 = *(edx_4 - 4)
                ecx_4[1] = *edx_4
                ecx_4[2] = *(edx_4 + 4)
                ecx_4[3] = *(edx_4 + 8)
            
            esi_3 += 1
            edx_4 += 0x3b4
    else if (eax == 1 || eax == 3)
        if (eax == 0)
            goto label_52722f
        
        if (eax == 1 && ecx_4[9] != 0)
            goto label_527241
        
        esi_3 += 1
        edx_4 += 0x3b4
    
    i_1 += 1
    ecx_4 = &ecx_4[0xb]
while (i_1 s< data_13130c0:8)
