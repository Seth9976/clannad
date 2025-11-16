// 函数: sub_586310
// 地址: 0x586310
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* edi = data_1cd4490
int32_t edx = data_1cd4488
int32_t i_1 = data_1cd4484
int32_t result
int32_t i

do
    int32_t j_1 = data_1cd4480
    int32_t j
    
    do
        int32_t eax_1
        eax_1.b = *(data_1cd4470 + data_1cd446c)
        
        if (data_1cd4468 != 0)
            eax_1.b = not.b(eax_1.b)
        
        int32_t eax_3 = (eax_1 << (data_1cd4464).b) + data_1cd4460
        
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
                if (ebx_8 != 0xff)
                    int32_t esi_1 = *((ebx_8 << 2) + data_1cd4328)
                    int32_t eax_5
                    eax_5.b = *edi
                    *edi = eax_5.b + (*(((data_1cd447c - eax_5) << 2) + esi_1)).b
                    int32_t eax_7
                    eax_7.b = *(edi + 1)
                    *(edi + 1) = eax_7.b + (*(((data_1cd4478 - eax_7) << 2) + esi_1)).b
                    int32_t eax_9
                    eax_9.b = *(edi + 2)
                    *(edi + 2) = eax_9.b + (*(((data_1cd4474 - eax_9) << 2) + esi_1)).b
                else
                    *edi = data_1cd448c
        
        int32_t eax_12 = data_1cd446c + 1
        
        if (eax_12 s>= data_1cd445c)
            eax_12 = 0
        
        data_1cd446c = eax_12
        edi = &edi[1]
        j = j_1
        j_1 -= 1
    while (j != 1)
    result = data_1cd4470 + data_1cd445c
    
    if (result s>= data_1cd4458)
        result = data_1cd4454
    
    data_1cd4470 = result
    edi += edx
    i = i_1
    i_1 -= 1
while (i != 1)
return result
