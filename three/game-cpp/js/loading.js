export async function loadGameAssets(loader = async () => {}) {
  await new Promise(resolve => setTimeout(resolve, 300));
  await loader();
  return { state: "finish" };
}
