const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#04060A", /* black   */
  [1] = "#4D4458", /* red     */
  [2] = "#644F5C", /* green   */
  [3] = "#524E6A", /* yellow  */
  [4] = "#6E596B", /* blue    */
  [5] = "#726877", /* magenta */
  [6] = "#7E8B6E", /* cyan    */
  [7] = "#b0a4be", /* white   */

  /* 8 bright colors */
  [8]  = "#7b7285",  /* black   */
  [9]  = "#4D4458",  /* red     */
  [10] = "#644F5C", /* green   */
  [11] = "#524E6A", /* yellow  */
  [12] = "#6E596B", /* blue    */
  [13] = "#726877", /* magenta */
  [14] = "#7E8B6E", /* cyan    */
  [15] = "#b0a4be", /* white   */

  /* special colors */
  [256] = "#04060A", /* background */
  [257] = "#b0a4be", /* foreground */
  [258] = "#b0a4be",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
