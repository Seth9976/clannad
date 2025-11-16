// 函数: sub_58af40
// 地址: 0x58af40
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
                int32_t eax_4
                eax_4.b = *edi
                int32_t eax_6
                eax_6.b = edi[1]
                int32_t eax_8
                eax_8.b = edi[2]
                data_1cd44cc = (*(data_1cd4334 + (eax_4 << 2)) + *(data_1cd4330 + (eax_6 << 2))
                    + *(data_1cd432c + (eax_8 << 2))) u>> 8
                int32_t eax_10 = data_1cd44cc
                int32_t ebx_17
                ebx_17.b = *edi
                int32_t eax_12 = data_1cd44bc
                int32_t eax_14 = data_1cd44c8
                int32_t eax_16
                eax_16.b = *edi
                int32_t ebx_30 = eax_14 + *(((eax_12 + *(((eax_10
                    + *(((ebx_17 - eax_10) << 2) + data_1cd4444) - eax_12) << 2) + data_1cd43b0)
                    - eax_14) << 2) + data_1cd4384) - eax_16
                *edi = eax_16.b + (*((ebx_30 << 2) + esi_1)).b
                int32_t eax_18 = data_1cd44cc
                int32_t ebx_33
                ebx_33.b = edi[1]
                int32_t eax_20 = data_1cd44b8
                int32_t eax_22 = data_1cd44c4
                int32_t eax_24
                eax_24.b = edi[1]
                int32_t ebx_46 = eax_22 + *(((eax_20 + *(((eax_18
                    + *(((ebx_33 - eax_18) << 2) + data_1cd4444) - eax_20) << 2) + data_1cd43b0)
                    - eax_22) << 2) + data_1cd438c) - eax_24
                edi[1] = eax_24.b + (*((ebx_46 << 2) + esi_1)).b
                int32_t eax_26 = data_1cd44cc
                int32_t ebx_49
                ebx_49.b = edi[2]
                int32_t eax_28 = data_1cd44b4
                int32_t eax_30 = data_1cd44c0
                int32_t eax_32
                eax_32.b = edi[2]
                int32_t ebx_62 = eax_30 + *(((eax_28 + *(((eax_26
                    + *(((ebx_49 - eax_26) << 2) + data_1cd4444) - eax_28) << 2) + data_1cd43b0)
                    - eax_30) << 2) + data_1cd4394) - eax_32
                edi[2] = eax_32.b + (*((ebx_62 << 2) + esi_1)).b
        
        int32_t eax_35 = data_1cd44ec + 1
        
        if (eax_35 s>= data_1cd44dc)
            eax_35 = 0
        
        data_1cd44ec = eax_35
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
