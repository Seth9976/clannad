// 函数: sub_48af50
// 地址: 0x48af50
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t eax = data_7192e0
int32_t eax_1 = eax

if (eax == 0)
    if (data_976b54 != 0)
        data_7192e4 = data_131310c
        sub_453b00(0)
        data_1b8a71c = 1
        int32_t eax_7 = sub_4a5090()
        data_7192e0 = 1
        return eax_7
    
    data_7192e0 = 2
else
    int32_t eax_2 = eax_1 - 1
    
    if (eax_1 == 1)
        int32_t eax_4 = sub_4d2110(eax_2, data_131310c, data_7192e4, 0x1f4, 0, 0x1f4)
        int32_t eax_5 = sub_4d2110(eax_4, data_131310c, data_7192e4, 0x1f4, 0, 0xffffff01)
        int32_t esi_1 = data_1af4144
        data_976f78 = data_1332b60
        int32_t ecx_4 = data_1332b64
        int32_t var_10_1 = 0
        int32_t var_14_1 = 0xff
        int32_t var_18_1 = eax_5
        int32_t var_1c_1 = 0
        int32_t var_20_1 = 0
        void* edx_3 = data_70300c
        void* var_88_1 = data_976b5c
        data_976f7c = ecx_4
        void* var_8c_1 = data_976b58
        data_1b8ad70 = esi_1
        int32_t var_90_1 = data_976b54
        data_1b1bcc8 = 0
        void* var_94_1 = data_7030dc
        data_1332b54 = esi_1
        data_976f74 = esi_1
        sub_584980(eax_5, edx_3, esi_1, var_94_1, var_90_1, var_8c_1, var_88_1, 0, 0, 0, 0, 0, 
            0xffffffff, 0xff, 0xffffffff, 0xffffffff, ecx_4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
            0, nullptr)
        data_1b8a71c = 1
        eax_1 = sub_4a5090()
        
        if (eax_4 == 0x1f4)
            data_7192e0 = 2
    else
        eax_1 = eax_2 - 1
        
        if (eax_2 == 1)
            return sub_42d590()

return eax_1
