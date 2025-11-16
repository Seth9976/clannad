// 函数: sub_6ddf40
// 地址: 0x6ddf40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = arg1
void* result

if (*(esi + 2) == 0)
    void* result_1 = *(esi + 0xc)
    
    if (result_1 s> 0)
        result = *(esi + 8)
        
        if (result s< result_1)
            result_1 = result
    else
        result_1 = *(esi + 0x70)
    
    if (result_1 s> 0)
        result = esi + 0x10
        void* result_2 = result_1
        void* i_1 = result_1
        void* i
        
        do
            void* var_1c_1 = arg1
            arg1 = sub_728860(result, *(esi + 0x29c))
            int32_t j = 0
            void* edx_2 = **(esi + 0x29c)
            
            if (*(esi + 0x2b0) s> 0)
                do
                    edx_2 += 3
                    j += 1
                    **(esi + 0x2b8) = *(edx_2 - 1)
                    *(*(esi + 0x2b8) + 1) = *(edx_2 - 2)
                    arg1 = *(esi + 0x2b8)
                    *(arg1 + 2) = *(edx_2 - 3)
                    *(*(esi + 0x2b8) + 3) = 0xff
                    *(esi + 0x2b8) += 4
                while (j s< *(esi + 0x2b0))
            
            result = esi + 0x10
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    *(esi + 4) += result_1
    *(esi + 8) -= result_1
    
    if (*(esi + 8) s> 0)
        result.b = 0
        return result
    
    *(esi + 1) = 0x100
    sub_728ee0(esi + 0x10)
    result = *(esi + 0x14)
    
    if (result != 0)
        (*(result + 0x28))(esi + 0x10)
    
    *(esi + 0x14) = 0
    *(esi + 0x24) = 0

result.b = 1
return result
