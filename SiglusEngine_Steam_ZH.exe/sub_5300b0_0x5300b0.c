// 函数: sub_5300b0
// 地址: 0x5300b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
uint32_t eax_1 = zx.d(arg2)
HWND hWnd

if (eax_1 == 0x3e9)
    sub_60c9f0()
    void* edx_1 = data_bac4e4
    void* ecx_1 = data_bac4a0
    *(ecx_1 + 0x68) = *(edx_1 + 0x18)
    *(ecx_1 + 0x6c) = *(edx_1 + 0x20)
    *(ecx_1 + 0x70) = *(edx_1 + 0x28)
    sub_53fdd0(arg1 + 0x3d8)
    sub_60ca90()
    sub_545880(arg1 + 0x2b14)
    void* edx_2 = data_bac510
    void* ecx_4 = data_bac4e4
    *(ecx_4 + 0x110) = *(edx_2 + 0xbb9c)
    *(ecx_4 + 0x114) = *(edx_2 + 0xbba0)
    sub_533a50(arg1 + 0x3708)
    sub_60ca90()
    sub_545880(arg1 + 0x3b44)
    sub_539a00(arg1 + 0x1e14)
    void* edx_3 = data_bac510
    void* ecx_8 = data_bac4e4
    *(ecx_8 + 0x13c) = *(edx_3 + 0xbbcc)
    *(ecx_8 + 0x140) = *(edx_3 + 0xbbd0)
    sub_53d620(arg1 + 0x2580)
    *(data_bac4e4 + 0x115) = *(data_bac510 + 0xbba1)
    sub_53e1b0(arg1 + 0x5980)
    *(data_bac4e4 + 0x15c) = *(data_bac510 + 0xbbec)
    
    if (*(arg1 + 0x47fc) != 0)
        sub_53bae0(arg1 + 0x47f4)
    
    sub_60cbb0()
    sub_535320(arg1 + 0x4b74)
    *(data_bac4e4 + 0x15c) = *(data_bac510 + 0xbbec)
    
    if (*(arg1 + 0x5064) != 0)
        sub_53bae0(arg1 + 0x505c)
    
    sub_60cbb0()
    sub_535320(arg1 + 0x5498)
    void* edx_6 = data_bac510
    void* ecx_16 = data_bac4e4
    *(ecx_16 + 0x141) = *(edx_6 + 0xbbd1)
    *(ecx_16 + 0x144) = *(edx_6 + 0xbbd4)
    *(ecx_16 + 0x148) = *(edx_6 + 0xbbd8)
    sub_5320c0(arg1 + 0x608c)
    sub_53ad30()
    *(data_bac4e4 + 0x16c) = *(data_bac510 + 0x1040d)
    sub_60cc40()
    sub_60ccc0()
    sub_60cd40()
    sub_536700(arg1 + 0x6ea4)
    sub_60cdc0()
    *(data_bac434 + 0xe) = 0
    sub_543330(arg1 + 0x8a80)
else if (eax_1 == 0x3f2)
    hWnd = *(arg1 + 4)
    
    if (hWnd != 0)
        SendMessageW(hWnd, 0x10, 0, 0)
        LRESULT eax_3
        eax_3.b = 1
        return eax_3

hWnd.b = 1
return hWnd
