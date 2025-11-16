// 函数: sub_587230
// 地址: 0x587230
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
                int32_t eax_4 = data_1cd44c8
                int32_t eax_6
                eax_6.b = *edi
                *edi = eax_6.b + (
                    *(((eax_4 + *(((ebx_11 - eax_4) << 2) + data_1cd4384) - eax_6) << 2) + esi_1)).b
                int32_t ebx_19
                ebx_19.b = edi[1]
                int32_t eax_8 = data_1cd44c4
                int32_t eax_10
                eax_10.b = edi[1]
                edi[1] = eax_10.b + (
                    *(((eax_8 + *(((ebx_19 - eax_8) << 2) + data_1cd438c) - eax_10) << 2) + esi_1)).b
                int32_t ebx_27
                ebx_27.b = edi[2]
                int32_t eax_12 = data_1cd44c0
                int32_t eax_14
                eax_14.b = edi[2]
                edi[2] = eax_14.b + (*
                    (((eax_12 + *(((ebx_27 - eax_12) << 2) + data_1cd4394) - eax_14) << 2) + esi_1)).b
        
        int32_t eax_17 = data_1cd44ec + 1
        
        if (eax_17 s>= data_1cd44dc)
            eax_17 = 0
        
        data_1cd44ec = eax_17
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
