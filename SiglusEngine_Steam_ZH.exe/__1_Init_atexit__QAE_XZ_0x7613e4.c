// 函数: ??1_Init_atexit@@QAE@XZ
// 地址: 0x7613e4
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

while (true)
    int32_t ecx_2 = data_b5b160
    
    if (ecx_2 u>= 0xa)
        break
    
    int32_t eax_1 = *((ecx_2 << 2) + &data_b9c040)
    data_b5b160 = ecx_2 + 1
    int32_t eax = DecodePointer(eax_1)
    
    if (eax != 0)
        eax()
