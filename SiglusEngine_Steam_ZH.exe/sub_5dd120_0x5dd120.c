// 函数: sub_5dd120
// 地址: 0x5dd120
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0
int32_t result = (*(arg1 + 0x1b0) - *(arg1 + 0x1ac)) s/ 0x3b4

if (result s> 0)
    int32_t ebx_1 = 0
    void* edi_1 = arg1
    int32_t esi_5
    
    do
        void* esi_3 = *(edi_1 + 0x1ac) + ebx_1
        *(esi_3 + 0xfc) = 0
        int32_t* edi_2 = *(esi_3 + 0x100)
        *(esi_3 + 0x100) = 0
        
        if (edi_2 != 0)
            bool cond:0_1 = edi_2[1] != 1
            edi_2[1] -= 1
            
            if (not(cond:0_1))
                (*(*edi_2 + 4))()
                bool cond:2_1 = edi_2[2] != 1
                edi_2[2]
                edi_2[2] -= 1
                
                if (not(cond:2_1))
                    (*(*edi_2 + 8))()
        
        *(esi_3 + 0x22c) = 0
        int32_t* edi_3 = *(esi_3 + 0x230)
        *(esi_3 + 0x230) = 0
        
        if (edi_3 != 0)
            bool cond:1_1 = edi_3[1] != 1
            edi_3[1] -= 1
            
            if (not(cond:1_1))
                (*(*edi_3 + 4))()
                bool cond:4_1 = edi_3[2] != 1
                edi_3[2]
                edi_3[2] -= 1
                
                if (not(cond:4_1))
                    (*(*edi_3 + 8))()
        
        *(esi_3 + 0x35c) = 0
        int32_t* edi_4 = *(esi_3 + 0x360)
        *(esi_3 + 0x360) = 0
        
        if (edi_4 != 0)
            bool cond:3_1 = edi_4[1] != 1
            edi_4[1]
            edi_4[1] -= 1
            
            if (not(cond:3_1))
                (*(*edi_4 + 4))()
                bool cond:5_1 = edi_4[2] != 1
                edi_4[2]
                edi_4[2] -= 1
                
                if (not(cond:5_1))
                    (*(*edi_4 + 8))()
        
        edi_1 = arg1
        ebx_1 += 0x3b4
        esi_5 = var_8 + 1
        var_8 = esi_5
        result = (*(edi_1 + 0x1b0) - *(edi_1 + 0x1ac)) s/ 0x3b4
    while (esi_5 s< result)

return result
