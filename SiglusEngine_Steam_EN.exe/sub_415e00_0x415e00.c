// 函数: sub_415e00
// 地址: 0x415e00
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_131d2d0 == 0xffffffff)
    return 

void* esi_1 = &data_131d458
int32_t i_1 = 0x10
int32_t i

do
    if (*(esi_1 - 0x140) != 0xffffffff)
        if (*(esi_1 + 4) != 0 && *esi_1 != 0)
            int32_t* ecx_1 = data_131d308
            
            if (ecx_1 != 0xffffffff)
                sub_425d50(ecx_1, esi_1 + 0x1e8)
            
            int32_t* ecx_2 = data_131d304
            
            if (ecx_2 != 0xffffffff)
                sub_425d50(ecx_2, esi_1 - 0x48)
        
        if (*(esi_1 + 0x11c) != 0)
            void* eax
            eax.b = *(esi_1 + 0x118)
            
            if (eax.b != 0 && *(esi_1 - 0x130) != 0 && *(esi_1 - 0x128) != 0)
                int32_t ecx_3 = *(esi_1 - 0x120)
                
                if (ecx_3 != 0)
                    int32_t var_10_1 = *(esi_1 + 0xdc)
                    void* var_14_1 = eax
                    int32_t var_18_1 = 0
                    int32_t var_1c_1 = *(esi_1 + 0x110)
                    int32_t var_20_1 = *(esi_1 + 0x10c)
                    int32_t eax_3 = zx.d(*(esi_1 + 0xe4))
                    ecx_3 = sub_584980(eax_3, data_702fec, data_702fe8, data_702ff0, ecx_3, 
                        *(esi_1 - 0x11c), *(esi_1 - 0x118), 0, 0, 1, *(esi_1 + 0xd4), 
                        *(esi_1 + 0xd8), data_702ff4, (data_702ff8).b, data_702ffc, data_703000, 
                        ecx_3, *(esi_1 + 0xe0), eax_3, *(esi_1 + 0xe8), *(esi_1 + 0xec), 
                        *(esi_1 + 0xf0), (*(esi_1 + 0xf4)).b, (*(esi_1 + 0xf8)).b, 
                        (*(esi_1 + 0xfc)).b, zx.d(*(esi_1 + 0x100)), zx.d(*(esi_1 + 0x101)), 0, 0, 
                        0, 0, *(esi_1 + 0x108))
                
                int32_t var_10_2 = *(esi_1 + 0xdc)
                uint32_t var_14_2 = zx.d(*(esi_1 + 0x118))
                int32_t var_18_2 = *(esi_1 + 0x114)
                int32_t var_1c_2 = *(esi_1 + 0x110)
                int32_t var_20_2 = *(esi_1 + 0x10c)
                int32_t eax_11 = zx.d(*(esi_1 + 0xe4))
                sub_584980(eax_11, data_702fec, data_702fe8, data_702ff0, *(esi_1 - 0x128), 
                    *(esi_1 - 0x11c), *(esi_1 - 0x118), 0, 0, 1, *(esi_1 + 0xd4), *(esi_1 + 0xd8), 
                    data_702ff4, (data_702ff8).b, data_702ffc, data_703000, ecx_3, *(esi_1 + 0xe0), 
                    eax_11, *(esi_1 + 0xe8), *(esi_1 + 0xec), *(esi_1 + 0xf0), (*(esi_1 + 0xf4)).b, 
                    (*(esi_1 + 0xf8)).b, (*(esi_1 + 0xfc)).b, zx.d(*(esi_1 + 0x100)), 
                    zx.d(*(esi_1 + 0x101)), zx.d(*(esi_1 + 0x102)), zx.d(*(esi_1 + 0x103)), 
                    zx.d(*(esi_1 + 0x104)), *(esi_1 + 0x105), *(esi_1 + 0x108))
    
    esi_1 += 0x3b4
    i = i_1
    i_1 -= 1
while (i != 1)

if (data_131d300 == 2)
    void* eax_13 = data_107efa0 * 5
    sub_424660(eax_13, &data_107efa8, (eax_13 << 3) + &data_1319240, 1, 0xffffffff, i_1, i_1)
