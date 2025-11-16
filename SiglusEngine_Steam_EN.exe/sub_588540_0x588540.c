// 函数: sub_588540
// 地址: 0x588540
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* edi = data_1cd4500
int32_t edx = data_1cd44fc
int32_t i_1 = data_1cd44f8
int32_t result
int32_t i

do
    int32_t j_1 = data_1cd44f4
    int32_t j
    
    do
        int32_t eax_1
        eax_1.b = *(data_1cd44f0 + data_1cd44ec)
        
        if (data_1cd44e8 != 0)
            eax_1.b = not.b(eax_1.b)
        
        int32_t eax_3 = (eax_1 << (data_1cd44e4).b) + data_1cd44e0
        
        if (eax_3 s< 0)
            eax_3 = 0
        else if (eax_3 s> 0xff)
            eax_3 = 0xff
        
        int32_t ebx_3
        ebx_3.b = eax_3.b
        
        if (ebx_3.b != 0)
            int32_t ebx_8
            ebx_8.b = (*(*((ebx_3 << 2) + data_1cd4328) + 0x3fc)).b
            
            if (ebx_8.b != 0)
                int32_t esi_1 = *((ebx_8 << 2) + data_1cd4328)
                int32_t ebx_11
                ebx_11.b = *edi
                int32_t eax_4
                eax_4.b = not.b(ebx_11.b)
                int32_t eax_6 = data_1cd44bc
                int32_t eax_8
                eax_8.b = *edi
                *edi = eax_8.b + (*(((eax_6 + *(((eax_4 + *(((ebx_11 - eax_4) << 2) + data_1cd43c8)
                    - eax_6) << 2) + data_1cd43b0) - eax_8) << 2) + esi_1)).b
                int32_t ebx_23
                ebx_23.b = edi[1]
                int32_t eax_10
                eax_10.b = not.b(ebx_23.b)
                int32_t eax_12 = data_1cd44b8
                int32_t eax_14
                eax_14.b = edi[1]
                edi[1] = eax_14.b + (*(((eax_12 + *(((eax_10
                    + *(((ebx_23 - eax_10) << 2) + data_1cd43c8) - eax_12) << 2) + data_1cd43b0)
                    - eax_14) << 2) + esi_1)).b
                int32_t ebx_35
                ebx_35.b = edi[2]
                int32_t eax_16
                eax_16.b = not.b(ebx_35.b)
                int32_t eax_18 = data_1cd44b4
                int32_t eax_20
                eax_20.b = edi[2]
                edi[2] = eax_20.b + (*(((eax_18 + *(((eax_16
                    + *(((ebx_35 - eax_16) << 2) + data_1cd43c8) - eax_18) << 2) + data_1cd43b0)
                    - eax_20) << 2) + esi_1)).b
        
        int32_t eax_23 = data_1cd44ec + 1
        
        if (eax_23 s>= data_1cd44dc)
            eax_23 = 0
        
        data_1cd44ec = eax_23
        edi = &edi[4]
        j = j_1
        j_1 -= 1
    while (j != 1)
    result = data_1cd44f0 + data_1cd44dc
    
    if (result s>= data_1cd44d8)
        result = data_1cd44d4
    
    data_1cd44f0 = result
    edi = &edi[edx]
    i = i_1
    i_1 -= 1
while (i != 1)
return result
