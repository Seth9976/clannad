// 函数: sub_58a920
// 地址: 0x58a920
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
                int32_t eax_8 = data_1cd44c8
                int32_t eax_10
                eax_10.b = *edi
                int32_t ebx_24 = eax_8 + *(((eax_6 + *(((eax_4
                    + *(((ebx_11 - eax_4) << 2) + data_1cd43c8) - eax_6) << 2) + data_1cd43b0) - eax_8)
                    << 2) + data_1cd4384) - eax_10
                *edi = eax_10.b + (*((ebx_24 << 2) + esi_1)).b
                int32_t ebx_27
                ebx_27.b = edi[1]
                int32_t eax_12
                eax_12.b = not.b(ebx_27.b)
                int32_t eax_14 = data_1cd44b8
                int32_t eax_16 = data_1cd44c4
                int32_t eax_18
                eax_18.b = edi[1]
                int32_t ebx_40 = eax_16 + *(((eax_14 + *(((eax_12
                    + *(((ebx_27 - eax_12) << 2) + data_1cd43c8) - eax_14) << 2) + data_1cd43b0)
                    - eax_16) << 2) + data_1cd438c) - eax_18
                edi[1] = eax_18.b + (*((ebx_40 << 2) + esi_1)).b
                int32_t ebx_43
                ebx_43.b = edi[2]
                int32_t eax_20
                eax_20.b = not.b(ebx_43.b)
                int32_t eax_22 = data_1cd44b4
                int32_t eax_24 = data_1cd44c0
                int32_t eax_26
                eax_26.b = edi[2]
                int32_t ebx_56 = eax_24 + *(((eax_22 + *(((eax_20
                    + *(((ebx_43 - eax_20) << 2) + data_1cd43c8) - eax_22) << 2) + data_1cd43b0)
                    - eax_24) << 2) + data_1cd4394) - eax_26
                edi[2] = eax_26.b + (*((ebx_56 << 2) + esi_1)).b
        
        int32_t eax_29 = data_1cd44ec + 1
        
        if (eax_29 s>= data_1cd44dc)
            eax_29 = 0
        
        data_1cd44ec = eax_29
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
