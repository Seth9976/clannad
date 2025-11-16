// 函数: sub_477bb0
// 地址: 0x477bb0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* result = sub_4679d0(arg4)
enum MESSAGEBOX_RESULT esi = *arg5

if (arg5[2] != 0 && esi s> 0)
    sub_467a30(arg4, esi)
    result = arg5[2]
    enum MESSAGEBOX_RESULT ebx_1 = 0
    
    if (esi s> 0)
        void* edi_2 = arg4[2] + 0x208
        void* esi_1 = result + 0x1dc
        void* var_10_1 = edi_2
        
        do
            int32_t eax = *(esi_1 - 0x4c)
            
            if (eax u> 9)
                sub_477010(esi_1 - 0x48, arg2, arg3, ebx_1, *(esi_1 - 0x50), esi_1 - 0x48, 
                    *(esi_1 + 0x24), esi_1 - 0x24, esi_1)
            else
                uint32_t eax_1 = zx.d(lookup_table_477d7c[eax])
                
                switch (eax_1)
                    case 1, 4
                        sub_477010(esi_1 - 0x48, arg2, arg3, ebx_1, *(esi_1 - 0x50), esi_1 - 0x48, 
                            *(esi_1 + 0x24), esi_1 - 0x24, esi_1)
                    case 2
                        sub_477440(eax_1, arg2, arg3, ebx_1, *(esi_1 - 0x50))
                    case 3
                        sub_477370(eax_1, arg2, arg3, ebx_1, *(esi_1 - 0x50), *(esi_1 + 0x28))
            
            int32_t eax_4 = *(esi_1 + 0x5f8)
            *(edi_2 + 0x5cc) = eax_4
            sub_4d1c30(eax_4, esi_1 + 0x2c, edi_2, 0xc8)
            sub_4d1c30(eax_4, esi_1 + 0xf4, edi_2 + 0xc8, 0xfc)
            sub_4d1c30(eax_4, esi_1 + 0x1f0, edi_2 + 0x1c4, 0x78)
            sub_4d1c30(eax_4, esi_1 + 0x268, edi_2 + 0x23c, 0x378)
            sub_4d1c30(eax_4, esi_1 + 0x5e0, edi_2 + 0x5b4, 0x18)
            sub_4d6c40(edi_2 - 0x1f0, edi_2 - 0x1ec)
            result = *(esi_1 - 0x1c0)
            void* result_1 = result
            
            if (result != 0)
                uint32_t eax_6 = sub_4cfc80(result)
                sub_4d6960(eax_6, edi_2 - 0x1ec, edi_2 - 0x1f0, eax_6, "objmoji08")
                result = edi_2 - 0x1ec
                sub_4d1c30(result, result_1, *result, eax_6)
                edi_2 = var_10_1
            
            edi_2 += 0x7d8
            ebx_1 += 1
            esi_1 += 0x7d8
            var_10_1 = edi_2
        while (ebx_1 s< esi)

return result
