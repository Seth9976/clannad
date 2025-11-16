// 函数: sub_4951d0
// 地址: 0x4951d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HGLOBAL hMem_1 = data_1be4b08

if (hMem_1 != 0)
    GlobalUnlock(hMem_1)
    GlobalFree(data_1be4b08)
    data_1be4b08 = 0
    data_1be4b04 = 0

uint32_t hMem = sub_495170()

if (arg1 s> 0)
    uint32_t dwBytes = arg1 * 0x2739a8
    hMem = GlobalAlloc(GHND, dwBytes)
    data_1be4b08 = hMem
    
    if (hMem != 0)
        int32_t eax = GlobalLock(hMem)
        data_1be4b00 = arg1
        data_1be4b04 = eax
        return eax
    
    if (data_1c04c64 == 0)
        int32_t var_c_3 = data_20c0500
        uint32_t dwBytes_1 = dwBytes
        char const* const var_14_1 = "SaveHistory"
        sub_4c84d0(0x1c04d68, "GlobalAlloc")
        hMem = sub_4cfd70(&data_1c04c68, "MEM_ERR")
        data_1c04c64 = 1
    
    data_1be4b00 = arg1

return hMem
