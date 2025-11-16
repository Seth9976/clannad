// 函数: sub_58b660
// 地址: 0x58b660
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
                int32_t eax_11 = eax_10 + *(((ebx_17 - eax_10) << 2) + data_1cd4444)
                int32_t ebx_21 = eax_11
                eax_11.b = not.b(eax_11.b)
                int32_t eax_13 = data_1cd44bc
                int32_t eax_15 = data_1cd44c8
                int32_t eax_17
                eax_17.b = *edi
                int32_t ebx_34 = eax_15 + *(((eax_13 + *(((eax_11
                    + *(((ebx_21 - eax_11) << 2) + data_1cd43c8) - eax_13) << 2) + data_1cd43b0)
                    - eax_15) << 2) + data_1cd4384) - eax_17
                *edi = eax_17.b + (*((ebx_34 << 2) + esi_1)).b
                int32_t eax_19 = data_1cd44cc
                int32_t ebx_37
                ebx_37.b = edi[1]
                int32_t eax_20 = eax_19 + *(((ebx_37 - eax_19) << 2) + data_1cd4444)
                int32_t ebx_41 = eax_20
                eax_20.b = not.b(eax_20.b)
                int32_t eax_22 = data_1cd44b8
                int32_t eax_24 = data_1cd44c4
                int32_t eax_26
                eax_26.b = edi[1]
                int32_t ebx_54 = eax_24 + *(((eax_22 + *(((eax_20
                    + *(((ebx_41 - eax_20) << 2) + data_1cd43c8) - eax_22) << 2) + data_1cd43b0)
                    - eax_24) << 2) + data_1cd438c) - eax_26
                edi[1] = eax_26.b + (*((ebx_54 << 2) + esi_1)).b
                int32_t eax_28 = data_1cd44cc
                int32_t ebx_57
                ebx_57.b = edi[2]
                int32_t eax_29 = eax_28 + *(((ebx_57 - eax_28) << 2) + data_1cd4444)
                int32_t ebx_61 = eax_29
                eax_29.b = not.b(eax_29.b)
                int32_t eax_31 = data_1cd44b4
                int32_t eax_33 = data_1cd44c0
                int32_t eax_35
                eax_35.b = edi[2]
                int32_t ebx_74 = eax_33 + *(((eax_31 + *(((eax_29
                    + *(((ebx_61 - eax_29) << 2) + data_1cd43c8) - eax_31) << 2) + data_1cd43b0)
                    - eax_33) << 2) + data_1cd4394) - eax_35
                edi[2] = eax_35.b + (*((ebx_74 << 2) + esi_1)).b
        
        int32_t eax_38 = data_1cd44ec + 1
        
        if (eax_38 s>= data_1cd44dc)
            eax_38 = 0
        
        data_1cd44ec = eax_38
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
