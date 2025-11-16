// 函数: sub_676d20
// 地址: 0x676d20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* edi_1 = data_bac468 + 0x2f0
int32_t var_18 = arg3
int32_t var_10 = 0
int32_t result = (edi_1[1] - *edi_1) s/ 0x250

if (result s> 0)
    void* esi_2 = nullptr
    void* var_c_1 = nullptr
    
    do
        void* var_14_1
        void* ebx_2
        
        if (arg3 == 0)
            ebx_2 = *edi_1 + esi_2
            var_14_1 = ebx_2
            
            if (*(ebx_2 + 0xef) != arg3.b)
            label_676d9a:
                int32_t ecx = *(ebx_2 + 0xd8)
                int32_t esi_3 = 0xff
                
                if (ecx + 1 u<= 5)
                    switch (ecx)
                        case 0
                            esi_3 = data_b5b480
                        case 1
                            esi_3 = data_b5b474
                        case 2
                            esi_3 = data_b5b46c
                        case 3
                            esi_3 = data_b5b470
                        case 4
                            esi_3 = data_b5b468
                        case 0xffffffff
                            esi_3 = data_b5b47c
                else if (ecx - 0x10 u<= 0xf)
                    int32_t eax_5 = data_bac4e4
                    
                    if (*(eax_5 + ecx + 0xed) == 0)
                        esi_3 = 0
                    else
                        esi_3 = *(eax_5 + (ecx << 2) + 0x6c) * data_b5b47c s/ 0xff
                
                if (*(ebx_2 + 0xed) != 0)
                    esi_3 = *(data_bac4a0 + 0x140) * esi_3 s/ 0xff
                
                if (*(ebx_2 + 0xee) != 0)
                    esi_3 = *(data_bac4a0 + 0x150) * esi_3 s/ 0xff
                
                int32_t ebx_4 = *(ebx_2 + 0xdc)
                int32_t edi_3 = sub_620e30(ebx_4) * esi_3
                int32_t ebx_5 = 0
                
                if (sub_620d90(ebx_4) != 0)
                    ebx_5 = edi_3 s/ 0xff
                
                int32_t esi_14
                
                if (arg2 == 0)
                    HANDLE edi_4 = *(var_14_1 + 0xf4)
                    
                    if (edi_4 != 0)
                        WaitForSingleObject(edi_4, 0xffffffff)
                    
                    esi_14 = *(var_14_1 + 0x154)
                    
                    if (edi_4 != 0)
                        ReleaseSemaphore(edi_4, 1, nullptr)
                
                if (arg2 == 0 && ebx_5 == esi_14)
                    esi_2 = var_c_1
                else
                    esi_2 = var_c_1
                    Concurrency::details::GlobalNode::`vector deleting destructor'(
                        esi_2 + 0xf4 + *(data_bac468 + 0x2f0), ebx_5)
                
                if (arg4 != 0 && var_18 == 0 && ebx_5 s> 0
                        && sub_5fefc0(*(data_bac468 + 0x2f0) + 0xf4 + esi_2) != 0)
                    *arg4 = 1
        else if (arg3 == 1)
            ebx_2 = *edi_1 + esi_2
            var_14_1 = ebx_2
            
            if (*(ebx_2 + 0xef) == 0)
                goto label_676d9a
        var_10 += 1
        edi_1 = data_bac468 + 0x2f0
        esi_2 += 0x250
        var_c_1 = esi_2
        arg3 = var_18
        result = (edi_1[1] - *edi_1) s/ 0x250
    while (var_10 s< result)

return result
