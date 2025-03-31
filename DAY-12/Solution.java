package DAY-12;

public class Solution {
    public List<Integer> preorderTraversal(TreeNode root) {
        List<Integer> result = new ArrayList();
        preorder(root , result);
        return result;
    }
    public void preorder(TreeNode root, List<Integer> result){
        if(root == null){
            return ;
        }
        result.add(root.val);
        if(root.left != null){
            preorder(root.left , result);
        }
        if(root.right != null){
            preorder(root.right , result);
        }
    }
} {
    
}
